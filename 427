#include <iostream>
/* Viết hàm sắp xếp các phần tử trong ma trận theo yêu cầu sau:
Dòng có chỉ số chẵn tăng dần
Dòng có chỉ số lẻ giảm dần */
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
void dongchantanglegiam(int a[][Max],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {

        }
        for(int h=0;h<col;h++)
        {
            for(int k=h;k<col;k++)
            {
                if(i%2==0)
                {
                    if(a[i][k]<a[i][h])
                {
                    int x=a[i][k];
                   a[i][k]=a[i][h];
                   a[i][h]=x;
                }
                }
                else
                {
                   if(a[i][k]>a[i][h])
                {
                    int x=a[i][k];
                   a[i][k]=a[i][h];
                   a[i][h]=x;
                }
                }


            }
        }
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
    dongchantanglegiam(a,row,col);
    xuatmatran(a,row,col);
    return 0;
}
