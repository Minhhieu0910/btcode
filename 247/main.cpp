#include <iostream>
//Ta định nghĩa 1 mảng có tính chất lẻ, khi tổng của 2 phần tử liên tiếp luôn là lẻ. Kiểm tra mảng có tính chất lẻ hay không
using namespace std;
void nhapmang(int a[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuatmang(int a[],int n)
{
    cout<<"\n cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}
void tinhchat(int a[],int n)
{
    int dem=0;
    for(int i=0;i<n-1;i++)
    {
        int x=0;
        x=a[i]+a[i+1];
        if(x%2==0)
        {
           dem++;
        }
    }
    if(dem==0)
    {
         cout<<"mang co tinh chat le";
    }
    else
    {
         cout<<"mang khong co tinh chat le ";
    }
}
int main()
{

    int a[100];
    int n;
    cout<<"nhap N:";
    cin>>n;
    nhapmang(a,n);
    xuatmang(a,n);
    tinhchat(a,n);
    return 0;
}
