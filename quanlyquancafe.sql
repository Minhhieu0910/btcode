CREATE DATABASE QuanLyQuanCafe
GO

USE QuanLyQuanCafe
GO

--Food
--Table
--FoodCategory
--Account
--Bill
--Billinfo

CREATE TABLE TableFood
(
   id INT IDENTITY PRIMARY KEY,
   name NVARCHAR(100) NOT NULL DEFAULT N'Bàn chưa có tên',
   status NVARCHAR(100) NOT NULL DEFAULT N'Trống'  --Trống || có người 
)
GO

CREATE TABLE Account
(
      UserName NVARCHAR(100) PRIMARY KEY,
	 DisplayName NVARCHAR(100) NOT NULL,	
	 PassWord NVARCHAR(1000) NOT NULL DEFAULT 0,
	 Type INT NOT NULL DEFAULT 0  -- 1:Admin && 0:Staff
)
GO
select * from account

CREATE TABLE FoodCategory
(
       id INT IDENTITY PRIMARY KEY,
	   name NVARCHAR(100) NOT NULL DEFAULT N'chưa đặt tên'
)
GO

CREATE TABLE Food
(
     id INT IDENTITY PRIMARY KEY,
	 name NVARCHAR(100) NOT NULL DEFAULT N'chưa đặt tên',
	 idCategory INT NOT NULL,
	 price FLOAT NOT NULL DEFAULT 0
	 FOREIGN KEY (idCategory) REFERENCES dbo.FoodCategory(id) 
)
GO

CREATE TABLE Bill
(
    id INT IDENTITY PRIMARY KEY,
	DateCheckIn DATE NOT NULL DEFAULT GETDATE(),
	DateCheckOut DATE,
	idTable INT NOT NULL,
	status INT NOT NULL DEFAULT 0 -- 1:đã thanh toán && 0:chưa thanh toán
	 
	 FOREIGN KEY (idTable) REFERENCES dbo.TableFood(id)
)
GO

CREATE TABLE BillInfo
(
    id INT IDENTITY PRIMARY KEY,
	idBill INT NOT NULL,
	idFood INT NOT NULL,
    Count INT NOT NULL DEFAULT 0

    FOREIGN KEY (idBill) REFERENCES dbo.Bill(id),
	FOREIGN KEY (idFood) REFERENCES dbo.Food(id) 
)
GO
-------------------------------------
INSERT INTO Account
VALUES ('K9','RONGK9','1',1);

INSERT INTO Account
VALUES ('staff','staff','1',0);

 -------------------------------------

 EXEC USP_GetAcoountByUserName @userName = N'K9'

 select * from Account where UserName = N'K9' and passWord ='1'
 GO
 -------------------------------------
 CREATE PROC USP_Login
 @userName nvarchar(100), @passWord nvarchar(100)
 AS
 BEGIN
    SELECT * FROM Account WHERE UserName = @userName AND PassWord = @passWord 
 END
 GO
 USP_Login  @userName = N'staff', @passWord = N'1'

-------------------------------------

 DECLARE @i INT = 0
 WHILE @i<=10
 BEGIN
    INSERT TableFood (name) VALUES (N'Bàn '+ CAST(@i AS nvarchar(100)))
	SET @i = @i + 1
END
SELECT * FROM TableFood 
 INSERT TableFood (name,status)
VALUES (N'Bàn 1')
 INSERT TableFood (name,status)
VALUES (N'Bàn 1')

-------------------------------------

--THÊM CATEGORY-------------
INSERT FoodCategory(name)  VALUES(N'Hải sản ') 

INSERT FoodCategory(name)  VALUES(N'Nông sản ') 

INSERT FoodCategory(name)  VALUES(N'Lâm sản ') 

INSERT FoodCategory(name)  VALUES(N'Sản sản ') 

INSERT FoodCategory(name)  VALUES(N'Nước ') 

---THÊM MÓN ĂN ------------
INSERT Food(name,idCategory,price)
VALUES (N'Mực một nắng nướng sa tế',1,120000)

INSERT Food(name,idCategory,price)
VALUES (N'Nghêu hấp xả ',1,50000)

INSERT Food(name,idCategory,price)
VALUES (N'Dú dê nướng sữa',2,60000)

INSERT Food(name,idCategory,price)
VALUES (N'Heo rừng nướng muối ớt ',3,75000)

INSERT Food(name,idCategory,price)
VALUES (N'Cơm chiên mushi',4,99999)

INSERT Food(name,idCategory,price)
VALUES (N'7Up',5,15000)

INSERT Food(name,idCategory,price)
VALUES (N'Cafe',5,12000)

--- THÊM bill --------

INSERT Bill(DateCheckIn,DateCheckOut,idTable,status)
VALUES (GETDATE(),NULL,1,0)

INSERT Bill(DateCheckIn,DateCheckOut,idTable,status)
VALUES (GETDATE(),NULL,2,0)

INSERT Bill(DateCheckIn,DateCheckOut,idTable,status)
VALUES (GETDATE(),GETDATE(),2,1)
delete from Bill where id= 4 and id=5
SELECT * FROM Bill
--THÊM BillInfo---------------
INSERT BillInfo(idBill,idFood,count)
VALUES(1,1,2)

INSERT BillInfo(idBill,idFood,count)
VALUES(1,3,4)

INSERT BillInfo(idBill,idFood,count)
VALUES(1,5,1)

INSERT BillInfo(idBill,idFood,count)
VALUES(2,1,2)

INSERT BillInfo(idBill,idFood,count)
VALUES(2,6,2)

INSERT BillInfo(idBill,idFood,count)
VALUES(3,5,2)

GO

SELECT *  FROM Bill WHERE idTable = 2 AND status = 1

SELECT * FROM BillInfo WHERE idBill = 1

SELECT f.name, bi.Count, f.price, f.price*bi.Count AS N'totalPrice' FROM BillInfo AS bi, Bill AS b, Food AS f
WHERE bi.idBill = b.id AND bi.idFood = f.id  AND b.status=0 AND b.idTable = 1
GO
-------------------------------

CREATE   PROC USP_InsertBill
@idTable INT
AS
BEGIN
     INSERT INTO Bill(DateCheckIn,DateCheckOut,idTable,status,discount)
	 VALUES (GETDATE(),NULL,@idTable,0,0)
END
GO
----------------------------- 
CREATE PROC USP_GetTableList
AS SELECT * FROM TableFood
GO
--------------------------------

 CREATE PROC USP_GetAcoountByUserName
 @userName NVARCHAR(100)
 AS
 BEGIN
 SELECT * FROM Account WHERE UserName = @userName
 END
 GO
 ------------------------------
CREATE PROC USP_InsertBillInfo
@idBill INT, @idFood INT, @count INT
AS
BEGIN
   DECLARE @isExitsBillInfo INT
	 DECLARE @foodCount INT

	 SELECT @isExitsBillInfo = id, @foodCount=b.Count 
	 FROM BillInfo AS b 
	 WHERE idBill = @idBill AND idFood = @idFood 
	 
	 IF(@isExitsBillInfo >0)
	  BEGIN
	  DECLARE @newCount INT = @foodCount + @Count
	  IF(@newCount > 0)
	   UPDATE BillInfo SET Count = @foodCount + @count WHERE  idFood = @idFood
	   ELSE
	   DELETE FROM BillInfo  WHERE idBill = @idBill AND idFood = @idFood 
	   END
	 ELSE
	  BEGIN
       INSERT INTO BillInfo VALUES(@idBill,@idFood,@count)
	  END
END
GO

-------------------------------

CREATE TRIGGER UTG_UpdateBillInfo
ON BillInfo FOR INSERT, UPDATE
AS
BEGIN
     DECLARE @idBill INT
	 SELECT @idBill = idBill FROM Inserted

     DECLARE @idTable INT
	 SELECT @idTable = idTable FROM Bill WHERE id = @idBill AND status = 0

	 DECLARE @count INT
	 SELECT @count = COUNT(*) FROM BillInfo WHERE idBill = @idBill
	 UPDATE TableFood SET status = N'Có người' WHERE id = @idTable
END
GO

CREATE TRIGGER UTG_UpdateTable
ON TableFood FOR UPDATE
AS
BEGIN
     DECLARE @idTable INT
	 DECLARE @status NVARCHAR(100)

	 SELECT @idTable = id , @status = inserted.status FROM inserted

	 DECLARE @idBill INT
	 SELECT @idBill = id FROM Bill WHERE idTable = @idTable AND status = 0
	 
	 DECLARE @coundBillInfor INT
	 SELECT @coundBillInfor = COUNT(*) FROM BillInfo WHERE idBill = @idBill

	 IF(@coundBillInfor >0 AND @status <> N'Có người')
	 UPDATE TableFood SET status = N'Có người' WHERE id = @idTable
	 ELSE IF (@coundBillInfor <0 AND @status <> N'Trống')
	 UPDATE TableFood SET status = N'Trống' WHERE id = @idTable

END
GO


CREATE  TRIGGER UTG_UpdateBill
ON Bill FOR UPDATE 
AS
BEGIN
       DECLARE @idBill INT 
	   SELECT @idBill = id FROM Inserted 
	   DECLARE @idTable INT 
	   SELECT @idTable  = idTable FROM Bill Where id= @idBill 
	   DECLARE @count INT =0
	   SELECT @count = COUNT(*) FROM Bill WHERE idTable = @idTable AND status = 0
	   IF(@count = 0)
	   UPDATE TableFood SET status = N'Trống' WHERE id = @idTable 
END
GO
----------------------------------------

CREATE PROC USP_SwitchTable
 @idTable1 INT, @idTable2 INT
AS
BEGIN
     DECLARE @idFirstBill INT
	 DECLARE @idSeconrdBill INT

	 DECLARE @isFirstTableEmpty INT =1
	 DECLARE @isSecondTableEmpty INT =1

	 SELECT @idSeconrdBill = id FROM Bill WHERE idTable = @idTable2 AND status =0

	 SELECT @idFirstBill = id FROM Bill WHERE idTable = @idTable1 AND status =0

	 IF(@idFirstBill IS NULL)
	 BEGIN
	     INSERT Bill(DateCheckIn,DateCheckOut,idTable,status)
		 VALUES(GETDATE(),NULL,@idTable1,0)
		 SELECT @idFirstBill = MAX(id) FROM Bill WHERE idTable = @idTable1 AND status =0
				
     END
	  SELECT @isFirstTableEmpty = COUNT(*) FROM BillInfo WHERE idBill = @idFirstBill

	  IF(@idSeconrdBill IS NULL)
	 BEGIN
	     INSERT Bill(DateCheckIn,DateCheckOut,idTable,status)
		 VALUES(GETDATE(),NULL,@idTable2,0)
		 SELECT @idSeconrdBill = MAX(id) FROM Bill WHERE idTable = @idTable2 AND status =0
		
     END
	    SELECT @isSecondTableEmpty = COUNT(*) FROM BillInfo WHERE idBill = @idSeconrdBill
	

     SELECT id INTO IDBillInfoTable FROM BillInfo WHERE idBill = @idSeconrdBill  

	 UPDATE BillInfo SET idBill = @idSeconrdBill WHERE idBill = @idFirstBill

	 UPDATE BillInfo SET idBill = @idFirstBill WHERE id IN (SELECT * FROM IDBillInfoTable)

	 IF(@isFirstTableEmpty =0)
	  UPDATE TableFood SET status = N'Trống' WHERE id = @idTable2
	 IF(@isSecondTableEmpty =0)
	  UPDATE TableFood SET status = N'Trống' WHERE id = @idTable1

	 DROP TABLE IDBillInfoTable
END
GO

---------------------------------------------
CREATE PROC USP_GetListBillByDateAndPage
@DateCheckIn DATETIME, @DateCheckOut DATETIME, @page INT
AS
BEGIN
      DECLARE @pageRows INT = 10
	  DECLARE @selectRows INT = @pageRows 
	  DECLARE @exceptRows INT = (@page -1) * @pageRows

	  ;WITH BillShow AS ( SELECT b.id, t.name AS [Tên bàn],b.totalPrice AS [Tổng tiền], DateCheckIn AS [Ngày vào ],DateCheckOut  AS [Ngày ra],discount AS [Giảm gá]
      FROM Bill AS b, TableFood AS t
      WHERE DateCheckIn >= @DateCheckIn AND DateCheckOut <= @DateCheckOut AND b.status = 1 
      AND t.id = b.idTable  )

	  SELECT TOP (@selectRows) * FROM BillShow WHERE id
	 NOT IN (SELECT TOP (@exceptRows) id  FROM BillShow)	        
END
GO
-------------------------------------------------
CREATE PROC USP_GetListBillByDate 
@DateCheckIn DATETIME, @DateCheckOut DATETIME
AS
BEGIN
      
	  SELECT  t.name AS [Tên bàn],b.totalPrice AS [Tổng tiền], DateCheckIn AS [Ngày vào ],DateCheckOut  AS [Ngày ra],discount AS [Giảm gá]
      FROM Bill AS b, TableFood AS t
      WHERE DateCheckIn >= @DateCheckIn AND DateCheckOut <= @DateCheckOut AND b.status = 1 
      AND t.id = b.idTable  	  
      
END
GO
EXEC  USP_GetListBillByDate @DateCheckIn = '2023-11-01', @DateCheckOut = '2023-11-30'
GO
--------------------------------------------------------------
CREATE PROC USP_GetNumBillByDate
@DateCheckIn DATETIME, @DateCheckOut DATETIME
AS
BEGIN
      
	  SELECT COUNT(*)
      FROM Bill AS b, TableFood AS t
      WHERE DateCheckIn >= @DateCheckIn AND DateCheckOut <= @DateCheckOut AND b.status = 1 
      AND t.id = b.idTable  	  
      
END
GO
----------------------------------------------------
  CREATE PROC USP_UpdateAccount
  @userName NVARCHAR(100), @displayName NVARCHAR(100) , @password NVARCHAR(100) , @newPassword NVARCHAR(100)
  AS
  BEGIN
           DECLARE @isRightPass INT = 0
		   SELECT @isRightPass = COUNT(*) FROM Account WHERE UserName = @userName AND PassWord = @password
		   IF(@isRightPass =1)
		   BEGIN
		      IF(@newPassword = NULL OR  @newPassword = '')
			  BEGIN
			  UPDATE Account SET DisplayName = @displayName WHERE UserName = @userName 
			  END
			  ELSE
			   UPDATE Account SET DisplayName = @displayName , PassWord = @newPassword WHERE UserName = @userName 

		   END
  END
  GO

  
  --------------------------------------
CREATE TRIGGER UTG_DeleteBillInfo
ON BillInfo FOR DELETE
AS
BEGIN
     DECLARE @idBillInfo INT
	 DECLARE @idBill INT
	 SELECT @idBillInfo = id, @idBill = deleted.idBill  from Deleted

	 DECLARE @idTable INT
	 SELECT @idTable = idTable  FROM Bill WHERE id = @idBill

     
	 DECLARE @count INT =0
	 SELECT @count = COUNT(*) FROM BillInfo AS bi, Bill AS b WHERE b.id =bi.idBill AND b.id = @idBill AND b.status = 0
	 IF(@count = 0)
	 UPDATE TableFood SET status = N'Trống' WHERE id = @idTable
END
GO

------------------------------------------
CREATE PROC USP_GetListBillByDateForReport 
@DateCheckIn DATETIME, @DateCheckOut DATETIME
AS
BEGIN
      
	  SELECT  t.name ,b.totalPrice , DateCheckIn ,DateCheckOut  ,discount 
      FROM Bill AS b, TableFood AS t
      WHERE DateCheckIn >= @DateCheckIn AND DateCheckOut <= @DateCheckOut AND b.status = 1 
      AND t.id = b.idTable  	  
      
END
GO