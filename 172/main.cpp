#include <iostream>
//Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm bội chung nhỏ nhất của tất cả các phần tử trong mảng
using namespace std;
void nhap(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuat(int a[],int n)
{
    cout<<"cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}
void boichung(int a[],int n)
{
    int x=a[0];
    int h=1;
    int dem =0;
    int boi=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            x=a[i];
        }
        h=h*a[i];
    }
    for(int t= x;t<=h;t++)
    {
         int dem =0;
        for(int i=0;i<n;i++)
        {
            if(t%a[i]==0)
        {
            dem++;
            if(dem==n & boi==0)
        {
            boi++;
            cout<<t<<endl;
        }
        }
        }

    }
}
int main()
{
   int a[100];
    int n;
    cout<<" nhap N ";
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    boichung(a,n);

    return 0;
}
