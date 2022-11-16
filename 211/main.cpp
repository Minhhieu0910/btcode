#include <iostream>
//Tính trung bình cộng các số nguyên tố trong mảng 1 chiều các số nguyên
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
int tong(int k,int n)
{
    for(int i=0;i<n;i++)
    {
        int dem=0;
        for(int j=1;j<=k;j++)
        {
           if(k%j==0)
           {
            dem++;
           }
        }
        if(dem==2)
        {
            return 1;
        }
    }
}
void tongnt(int a[],int n)
{
    int x=0;
    int h=0;
    for(int i=0;i<n;i++)
    {
        if(tong(a[i],n)==1)
        {
            x=x+a[i];
            h++;
        }
    }
    float t = float(x)/float(h);
    cout<<"trung binh cong cac so nguyen to trong mang bang = "<<t<<endl;
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    tongnt(a,n);
    return 0;
}
