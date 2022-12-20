#include <iostream>
//Tính tổng các giá trị trên 1 dòng trong ma trận các số thực
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
void tongdong(float a[][Max], int &c, int &d)
{
   for(int i=0;i<c;i++)
   {
       float x=0;
       for(int j=0;j<d;j++)
       {
           x=a[i][j]+x;
       }
       cout<<"Tong cac gia tri tren dong "<<i<<" la: "<<x<<endl;
   }
}

int main()
{
    float a[Max][Max];
    int row, col;
     do
    {
         cout<<"Nhap vao so cot cua ma tran:"<<endl;
         cin>>row;
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
   tongdong(a,row,col);
    return 0;
}
