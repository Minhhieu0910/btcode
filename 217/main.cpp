#include <iostream>
//Đếm số dương chia hết cho 7 trong mảng
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
int duong(int a[],int n)
{
    int dem=0;
    for(int  i=0;i<n;i++)
    {
        if(a[i]>0 & a[i]%7==0)
        {
            //cout<<a[i]<<"\t";
            dem++;
        }
    }return dem;     //cách 2
    /*if(dem>0)
    {
        cout<<"so luong ao chia het cho 7 la:"<<dem;
    }
    else
    {
        cout<<"khong co so duong chia het cho 7 trong mang";
    }*/
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    int x=duong(a,n)    // cách 2
    cout<<x;
    return 0;
}
