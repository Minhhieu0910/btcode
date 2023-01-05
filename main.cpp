#include <iostream>
//Tìm min trong ma trận tam giác dưới
using namespace std;
#define Max 100
void nhapmatranvuong(float a[][Max],int n)
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
void xuatmatranvuong(float a[][Max],int n)
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
float mintamgiacduoiduongcheochinh(float a[][Max],int n)
{
    float x=a[1][0];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            if(a[i][j]<x)
            {
                x=a[i][j];
            }
        }
    }
    return x;
}
float mintamgiacduoiduongcheophu(float a[][Max],int n)
{
    float y=a[n-1][n-1];
    for(int i=1;i<n;i++)
    {
        for(int j=n-1;j>n-1-i;j--)
        {
            if(a[i][j]<y)
            {
                y=a[i][j];
            }
        }
    }
    return y;
}
int main()
{
     float a[Max][Max];
   int n;
   cout<<"nhap so cot va dong cua ma tran vuong"<<endl;
   cin>>n;
   nhapmatranvuong(a,n);
   xuatmatranvuong(a,n);
   float Min1=mintamgiacduoiduongcheochinh(a,n);
   cout<<"gia tri nho nhat tam giac duoi duong cheo chinh la:"<<Min1<<endl;
   float Min2=mintamgiacduoiduongcheophu(a,n);
    cout<<"gia tri nho nhat tam giac duoi duong cheo chinh la:"<<Min2<<endl;
    return 0;
}
