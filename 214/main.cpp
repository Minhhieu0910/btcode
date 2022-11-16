#include <iostream>
#include <math.h>
//Tính trung bình nhân các giá trị dương có trong mảng 1 chiều các số thực
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
void trungbinhnhan(int a[],int n)
{
    int x=1,d=0;
    float t,h;

    for(int i=0;i<n;i++)
    {
        if(a[i>0])
           {
             x=x*a[i];
             d++;
           }
    }
     h= float(1)/float(d);
    t=pow(x,h);
    cout<<"trung binh chan cac gia tri nhan trong mang bang = "<<t;
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    trungbinhnhan(a,n);

    return 0;
}
