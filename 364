#include <iostream>
//Kiểm tra một hàng ma trận có tăng dần hay không
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
int ktrahang(float a[][Max], int col,int hang )
{
    float x= a[hang][0];
        for(int j=1;j<col;j++)
        {
           if(a[hang][j] > x)
           {
               x=a[hang][j];
           }
           else
           {
               return 0;
           }
        }
        return 1;
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
    do
    {
       cout<<"nhap vao hang ban can kiem tra"<<endl;
    cin>>hang;
    if(hang <0 || hang>=row)
    {
        cout<<"so hang vua nhap bi sai !"<<endl;
    }
    }while(hang <0 || hang>=row);

    int y= ktrahang(a,col, hang);
    if(y==1)
    {
         cout<<"hang "<<hang<<" co tang dan";
    }
    else
    {
         cout<<"hang "<<hang<<" KHong tang dan";
    }

    return 0;
}
