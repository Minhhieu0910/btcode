#include <iostream>
// Tính tổng các giá trị chính phương trong mảng 1 chiều các số nguyên
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
void tong(int a[],int n)
{
    int x=0;
   for(int i=0;i<n;i++)
   {
       for(int j=1;j<=a[i];j++)
       {
           if(j*j==a[i])
           {
               x=x+a[i];
           }
       }
   }
   cout<<"tong cac so chinh phuong trong mang bang="<<x;
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    tong(a,n);

    return 0;
}
