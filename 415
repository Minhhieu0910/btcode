#include <iostream>
//Xóa 1 cột trong ma trận
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
void xoa1cot(int a[][Max],int &row,int &col,int &x)
{
    for(int i=0;i<row;i++)
    {
        for(int j=x;j<col-1;j++)
     {
         a[i][j]=a[i][j+1];
     }
    }
    col--;
}
int main()
{
    int a[Max][Max];
    int row,col;
    int colx;
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
    cout<<"Nhap vao cot can xoa trong ma tran"<<endl;
    cin>>colx;
    xoa1cot(a,row,col,colx);
    xuatmatran(a,row,col);

    return 0;
}
