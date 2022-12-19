#include <iostream>
//Viết hàm kiểm tra trong ma trận số nguyên có tồn tại giá trị chẵn nhỏ hơn 2015?
using namespace std;
#define Max 100
void nhapmatran(int a[][Max],int row, int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Nhap gia tri cac phan tu trong ma tran:"<<endl;
            cout<<"a["<<i<<"]["<<j<<"]= "<<endl;
            cin>>a[i][j];
        }
    }
}
void xuatmatran(int a[][Max],int row,int col)
{
    cout<<"Ta co ma tran nhu sau:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void kiemtra(int a[][Max],int row, int col)
{
    int dem=0;
    cout<<"Cac phan tu trong ma tran co gia tri chan va nho hon 2015 la:"<<"\t";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]%2==0 && a[i][j]<2015)
            {
                cout<<a[i][j]<<"\t";
                dem++;
            }

        }
    }
    if(dem==0)
        cout<<"Khong co";
}
int main()
{
   int a[Max][Max];
   int row,col;
   do
    {
         cout<<"Nhap vao so cot cua ma tran:"<<endl;
         cin>>row;
         if(row<1 || row >Max)
         {
             cout<<"Nhap so cot bi loi, vui long nhap lai !"<<endl;
         }
    }while(row<1 || row >Max);

    do
    {
        cout<<"Nhap vao so hang cua ma tran:"<<endl;
         cin>>col;
          if(col<1 || col >Max)
         {
             cout<<"Nhap so cot bi loi, vui long nhap lai !"<<endl;
         }
    }while(col<1 || col >Max);

   nhapmatran(a,row,col);
   xuatmatran(a,row,col);
   kiemtra(a,row,col);
    return 0;
}
