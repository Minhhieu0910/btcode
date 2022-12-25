#include <iostream>
//Liệt kê các dòng có chứa giá trị chẵn trong ma trận các số nguyên
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
int lietke(int a[][Max], int row, int col)
{
    int flag = 0;
        int dem=0;
        for(int j=0;j<col;j++)
        {
            if(a[row][j]%2==0)
            {
                dem++;
            }
            if(dem!=0)
            {
               flag =1;
            }
        }
    return flag;
}
void hangchan(int a[][Max],int row,int col)
{
    int dem=0;
    cout<<"cac dong co chua gia tri chan trong ma tran la: ";
    for(int i=0;i<row;i++)
    {
        if(lietke(a,i,col)==1)
        {
            cout<<i<<"   ";
            dem++;
        }
    }
    if(dem==0)
    {
        cout<<" KHong co";
    }
}
int main()
{
     int a[Max][Max];
    int row,col,hang;
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
    hangchan(a,row,col);
    return 0;
}
