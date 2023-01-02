#include <iostream>
// Xuất các giá trị âm  giảm dần(ma trận không thay đổi sau khi xuất)
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
void amgiamdan(int a[][Max],int row,int col)
{
   int n=row*col;
   int b[Max];
    int dem=0,h=0;
      for(int j=0;j<n;j++)
        {
            if(a[j/col][j%col]<0)
            {
                b[h++]=a[j/col][j%col];
            }
        }
    for(int i=0;i<h-1;i++)
    {
        for(int j=i;j<h;j++)
        {
            if(b[j]>b[i])
            {
                int x=b[j];
                b[j]=b[i];
                b[i]=x;
             }
         }
    }
    cout<<"xuat cac gia tri am giam dan :  ";
    for(int i=0;i<h;i++)
    {
        cout<<b[i]<<"   ";
    }
    cout<<endl;
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
    amgiamdan(a,row,col);
     xuatmatran(a,row,col);
    return 0;
}
