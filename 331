#include <iostream>
//Viết hàm sắp xếp ma trận các số thực tăng dần từ trên xuống dưới và từ trái sang phải
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
void sapxephang(float a[][Max],int &c,int &d)
{

    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d-1;j++)
        {
            float x=a[i][j];
            for(int k=j;k<d;k++)
            {
                if(a[i][k]<x)
          {

              x=a[i][k];
              a[i][k]=a[i][j];
              a[i][j]=x;
          }
            }

        }
    }
}
void sapxepcot(float a[][Max],int &c,int &d)
{
     for(int i=0;i<d;i++)
    {
        for(int j=0;j<c-1;j++)
        {
            float x=a[j][i];
            for(int k=j;k<c;k++)
            {
                if(a[k][i]<x)
          {

              x=a[k][i];
              a[k][i]=a[j][i];
              a[j][i]=x;
          }
            }

        }
    }
}
int main()
{
    float a[Max][Max];
   int row,col;
   do
    {
         cout<<"Nhap vao so cot cua ma tran:"<<endl;
         cin>>row;
         if(row<1 || row >Max)
         {
             cout<<"Nhap so cot bi loi, vui long nhap lai !"<<endl;
         }
    }while(row<1 || row >Max);

    do
    {
        cout<<"Nhap vao so hang cua ma tran:"<<endl;
         cin>>col;
          if(col<1 || col >Max)
         {
             cout<<"Nhap so cot bi loi, vui long nhap lai !"<<endl;
         }
    }while(col<1 || col >Max);

   nhapmatran(a,row,col);
   xuatmatran(a,row,col);
   sapxephang(a,row,col);
   sapxepcot(a,row,col);
   xuatmatran(a,row,col);
    return 0;
}
