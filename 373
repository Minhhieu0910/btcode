#include <iostream>
/* Liệt kê các dòng trong ma trận các số thực thỏa mãn đồng thời các điều kiện sau:
  dòng có chứa giá trị âm, giá trị 0 và giá trị dương */
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
int lietke(float a[][Max], int row, int col)
{
     int x=0,y=0,z=0;
        for(int j=0;j<col;j++)
        {
            if(a[row][j]>0)
            {
                x=1;
            }
            else if(a[row][j]<0)
            {
               y =1;
            }
             else if(a[row][j]==0)
            {
                z=1;
            }
        }
    return (x+y+z);
}
void hangam(float a[][Max],int row,int col)
{
    int dem=0;
    cout<<"cac dong co chua gia tri am, gia tri 0 va gia tri duong trong ma tran la: ";
    for(int i=0;i<row;i++)
    {
        if(lietke(a,i,col)==3)
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
    float a[Max][Max];
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
    hangam(a,row,col);
    return 0;
}
