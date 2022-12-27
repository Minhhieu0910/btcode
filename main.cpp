#include <iostream>
//Hoán vị 2 dòng trên ma trận
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
void hoanvi2dong(int a[][Max],int row,int col,int h, int k)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(h<k)
            {
                if(i==h )
              {
                  a[row][j]=a[k][j];
                  a[k][j]=a[h][j];
              }
               if(i==k)
              {
                 a[h][j]=a[row][j];
              }
            }
        }
    }
}
int main()
{
    int a[Max][Max];
    int row,col,h,k;
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
    cout<<"nhap 2 dong hoan vi "<<endl;
    cin>>h;
    cout<<endl;
    cin>>k;
    hoanvi2dong(a,row,col,h,k);
    xuatmatran(a,row,col);
    return 0;
}
