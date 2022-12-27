#include <iostream>
#include <math.h>
//Tìm các chữ số xuất hiện nhiều nhất trong ma trận
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
void TachChuSo(int n, int b[])
{
    int ChuSo;
    n = abs(n);
    do
    {
        ChuSo = n % 10;
        b[ChuSo]++;
        n /= 10;
    }while(n > 0);
}

void TimCacChuSoXuatHienNhieuNhat(int a[][Max], int dong, int cot)
{
    int b[10] = {0};
    int x=0;
    for(int i = 0; i < dong; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            TachChuSo(a[i][j], b);
        }
    }
    int ChuSoXuatHienNhieuNhat = 0;
    for(int i = 0; i < 10; i++)
    {
        if(b[ChuSoXuatHienNhieuNhat] < b[i])
        {
            ChuSoXuatHienNhieuNhat = i;
        }
    }
    cout<<"Cac chu so xuat hien nhieu nhat: ";
    for(int i = 0; i < 10; i++)
    {
        if(b[ChuSoXuatHienNhieuNhat] == b[i])
        {
            cout<<i<<"\t";
             x=b[i];
        }
    }
    cout<<" voi cung "<<x<<" lan xuat hien";
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
    TimCacChuSoXuatHienNhieuNhat(a,row,col);
    return 0;
}
