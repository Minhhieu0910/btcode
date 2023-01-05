#include <iostream>
#include<conio.h>
#include<math.h>
//Cho ma trận A. Hãy tạo ma trận B, B[i][j] = lớn nhất dòng i, cột j của A
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
int TimPhanTuLonNhatDongICotJ(int a[][Max], int row, int col, int i, int j)
{
    int MAX = a[i][0];
    for(int k = 1; k < row; k++)
    {
        MAX = (MAX < a[i][k]) ? a[i][k] : MAX;
    }
    for(int k = 0; k < col; k++)
    {
        MAX = (MAX < a[k][j]) ? a[k][j] : MAX;
    }
    return MAX;
}

void XayDungMaTranB(int a[][Max], int row, int col, int b[][Max])
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            b[i][j] = TimPhanTuLonNhatDongICotJ(a, row, col, i, j);
        }
    }
    cout<<"Ta co ma tran nhu sau:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<b[i][j]<<"\t";
       }
        cout<<endl;
    }
}
int main()
{
    int a[Max][Max];
        int b[Max][Max];
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
    XayDungMaTranB(a,row,col,b);
    return 0;
}
