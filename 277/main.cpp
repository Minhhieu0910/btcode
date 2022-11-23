
#include <iostream>
//Xóa tất cả các phần tử trùng với x
using namespace std;
void nhapmang(int a[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuatmang(int c[],int n)
{
    cout<<"\n cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]= "<<c[i]<<endl;
    }
}
void xoa(int a[],int &n,int x)
{
    for(int i=0;i<n;i++)
    {
       if(a[i]==x)
       {
           n=n-1;
           for(int k=i;k<n;k++)
           {
               a[k]=a[k+1];
           }
       }
     }
}
int main()
{
    int a[100];
    int n,x;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhapmang(a,n);
    cout<<"xoa tat ca cac phan tu trung voi x, x la: "<<endl;
    cin>>x;
    xoa(a,n,x);
    xuatmang(a,n);
    return 0;
}
