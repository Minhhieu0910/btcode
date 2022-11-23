#include <iostream>
//Dịch phải xoay vòng k phần tử trong mảng
using namespace std;
void nhapmang(int a[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuatmang(int a[],int &n)
{
    cout<<"\n cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
    }
}
void xoayvong(int a[],int n)
{
    int h=0;
    int d=0;
    h=a[n-1];
    for(int i=n-1;i>0;i--)
    {
      a[i]=a[i-1];
    }
    a[d]=h;
}
int main()
{
    int a[100];
    int k;
    cout<<"nhap K:"<<endl;
    cin>>k;
    nhapmang(a,k);
    xoayvong(a,k);
    xuatmang(a,k);
    return 0;
}
