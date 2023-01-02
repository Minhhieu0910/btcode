#include <iostream>
//Viết hàm sắp xếp các phần tử trên 1 dòng tăng dần từ trái sang phải
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
void dongtangdan(int a[][Max],int row,int col)
{
    int i,j;
    int b[Max][Max];
    for( i=0;i<row;i++)
    {
        for( j=0;j<col;j++)
        {
            b[i][j]=a[i][j];

        }
          for(int h=0;h<col;h++)
          {
              for(int k=h;k<col;k++)
              {
                  if(b[i][k]<b[i][h])
                {
                    int z=b[i][k];
                    b[i][k]=b[i][h];
                      b[i][h]=z;
               }
              }

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
    dongtangdan(a,row,col);
    return 0;
}
