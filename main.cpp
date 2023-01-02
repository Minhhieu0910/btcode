#include <iostream>
//Dịch phải xoay vòng theo chiều kim đồng hồ các giá trị nằm trên biên ma trận
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
void dichchuyencot(int a[][Max],int row,int col)
{

}
void dichphaixoayvong(int a[][Max],int row,int col)
{
     int x = a[0][0];
     int i,j;
     for(i=0,j=0;i<row;i++)
     {
         a[i][j]=a[i+1][j];
     }
    for(i=row-1,j=0;j<col;j++)
    {
        a[i][j]=a[i][j+1];
    }
    for(j=col-1,i=row-1;i>0;i--)
    {
        a[i][j]=a[i-1][j];
    }
    for(i=0,j=col-1;j>0;j--)
    {
        a[i][j]=a[i][j-1];
    }
    a[0][0]=x;

}
int main()
{
    int a[Max][Max];
    int row,col;
     do
    {
         cout<<"Nhap vao so cot cua ma tran:"<<endl;
         cin>>col;
         if(col<1 || col >Max)
         {
             cout<<"Nhap so cot bi loi, vui long nhap lai !"<<endl;
         }
    }while(col<1 || col >Max);

    do
    {
        cout<<"Nhap vao so hang cua ma tran:"<<endl;
         cin>>row;
          if(row<1 || row >Max)
         {
             cout<<"Nhap so cot bi loi, vui long nhap lai !"<<endl;
         }
    }while(row<1 || row >Max);

    nhapmatran(a,row,col);
    xuatmatran(a,row,col);
    dichphaixoayvong(a,row,col);
    xuatmatran(a,row,col);
    return 0;
}
