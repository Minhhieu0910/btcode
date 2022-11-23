#include <iostream>
//Xóa tất cả các phần tử xuất hiện nhiều hơn 1 lần trong mảng
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
void xoa1phantu(int a[],int &n,int vitrixoa)
{
     n--;
    for(int i=vitrixoa;i<n;i++)
    {
        a[i]=a[i+1];
    }

}
void xoa(int a[],int &n)
{
    for(int i=0;i<n-1;i++)
    {
    int dem=0;
     for (int j=i+1;j<n;j++)
     {
       if(a[i]==a[j] )
       {
           xoa1phantu(a,n,j);
           j--;
           dem++;
       }
     }
     if(dem>0)
     {
   xoa1phantu(a,n,i);
   i--;
     }
    }
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhapmang(a,n);
    xoa(a,n);
    xuatmang(a,n);
    return 0;
}
