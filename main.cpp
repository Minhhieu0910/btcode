#include <iostream>
//Tìm giá trị xuất hiện nhiều nhất
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
int laplai(int a[][Max],int row, int col,int h,int k)
{
    int x=a[h][k];
    int dem=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]==x)
            {
                dem++;
            }
        }
    }
    return dem;
}
int nhieunhat(int a[][Max],int row,int col)
{
    int z=1;
    int t=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            int y = laplai(a,row,col,i,j);
            if(z<y)
            {
                z=y;
                t=a[i][j];
            }
        }
    }
    if(z==1)
    {
        cout<<"tat ca cac so trong ma tran deu xuat hien 1 lan duy nhat";
    }
    else
    {
        cout<<"so xuat hien nhieu lan nhat trong ma tran la: "<<t<<" voi "<<z<<" lan";
    }
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
    nhieunhat(a,row,col);
    return 0;
}
