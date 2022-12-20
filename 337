#include <iostream>
//Tính tích các số chẵn trên 1 cột trong ma trận các số nguyên
using namespace std;
#define Max 100
void nhapmatran(int a[][Max],int col, int row)
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
void xuatmatran(int a[][Max],int col,int row)
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
void tich(int a[][Max], int &c,int &d)
{
    for(int i=0;i<c;i++)
    {
        int x=1;
        int dem=0;
        for (int j=0;j<d;j++)
        {
            if((a[j][i]) %2 ==0)
            {
               x=x*a[j][i];
               dem++;
            }
        }
        if(dem>0)
        {
            cout<<"Tich cac gia tri chan trong cot "<<i<<" la: "<<x<<endl;
        }
        else
        {
            cout<<"Trong cot "<<i<<" khong co phan tu co gia tri chan"<<endl;
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

    nhapmatran(a,col,row);
    xuatmatran(a,col,row);
    tich(a,col,row);
    return 0;
}
