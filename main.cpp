#include <iostream>
//Tích 2 ma trận
using namespace std;
#define Max 100
void nhapmatranvuong(int a[][Max],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]= "<<endl;
            cin>>a[i][j];
        }
    }
}
void xuatmatranvuong(int a[][Max],int n)
{
    cout<<"Ta co ma tran vuong nhu sau:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void tich2matran(int a[][Max],int b[][Max],int n)
{
    int c[Max][Max];
    for(int z=0;z<n;z++)
    {
        for(int i=0;i<n;i++)
     {
         int tong =0;
        for(int j=0;j<n;j++)
        {
            tong = tong + a[z][j] * b[j][i];
        }
        c[z][i]=tong;
     }
    }
     cout<<"Ta co tich 2 ma tran vuong bang ma tran sau:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }

}
int main()
{
      int a[Max][Max],b[Max][Max];
   int n;
   cout<<"nhap so cot va dong cua ma tran vuong"<<endl;
   cin>>n;
   cout<<"nhap vao ma tran vuong A:"<<endl;
   nhapmatranvuong(a,n);
   xuatmatranvuong(a,n);
   cout<<"nhap vao ma tran vuong B:"<<endl;
   nhapmatranvuong(b,n);
    xuatmatranvuong(a,n);
   xuatmatranvuong(b,n);
   tich2matran(a,b,n);
    return 0;
}
