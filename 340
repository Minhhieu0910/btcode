#include <iostream>
#include <math.h>
//Tính trung bình nhân các số dương trong ma trận các số thực
using namespace std;
#define Max 100
void nhapmatran(float a[][Max],int row, int col)
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
void xuatmatran(float a[][Max],int row,int col)
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
void tbnhan(float a[][Max],int &c, int &d)
{
    float x=1;
    int dem=0;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
           if(a[j][i] >0)
           {
               x=x*a[j][i];
               dem++;
           }
        }
    }
    float y=0;
    y=pow(x,1.0 /dem);
    cout<<"Trung binh nhan cac so duong trong ma tran bang = "<<y;
}
int main()
{
   float a[Max][Max];
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

    nhapmatran(a,col,row);
    xuatmatran(a,col,row);
    tbnhan(a,col,row);
    return 0;
}
