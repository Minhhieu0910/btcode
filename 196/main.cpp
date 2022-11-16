#include <iostream>
// Liệt kê các số âm trong mảng 1 chiều các số nguyên
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
void am(int a[],int n)
{
    cout<<"cac gia tri am trong mang la:";
    for(int i=0;i<n;i++)
    {
        if(a[i]*1<0)
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
    am(a,n);
    return 0;
}
