#include <iostream>
//Cho mảng 1 chiều các số nguyên. Hãy viết hàm liệt kê các giá trị chẵn có ít nhất 1 lân cận cũng là giá trị chẵn
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
void lietke(int a[],int n)
{
    cout<<"gia tri chan co it nhat 1 lan can cung chan"<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0 & (a[i+1]%2==0  || a[i-1]%2==0))
        {
            cout<<a[i]<<"\t";
        }
    }
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    lietke(a,n);
    return 0;
}
