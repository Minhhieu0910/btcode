#include <iostream>
//Đếm số nguyên tố trong mảng
using namespace std;
void nhap(int a[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuat(int a[],int n)
{
    cout<<"\n cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}
int soluong(int a[],int n)
{
    int h=0;
    for(int i=0;i<n;i++)
    {
        int dem=0;
        for(int j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
               dem++;
            }
        }
       if(dem==2)
       {
           h++;
       }
    }
    return h;
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
   int t= soluong(a,n);
   cout<<"so luong so nguyen to trong mang la: "<<t;
    return 0;
}
