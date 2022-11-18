#include <iostream>
//Hãy liệt kê các giá trị có số lần xuất hiện nhiều nhất trong mảng
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
void xuathien(int a[], int n)
{
    int x=0,h=0,dem,y=0,t=0;
    for( int i=0;i<n;i++)
    {
        dem=0;
        for(int j=i;j<n;j++)
        {
            if(a[i]==a[j])
            {
               dem++;
            }
        }
        if(dem>=h)
        {
            if(dem>h)
            {
            h=dem;
            x=a[i];
            }
            else if(h==dem)
            {
                t=dem;
                y=a[i];
            }
        }
    }
    if(h==t)
    {
        cout<<"so xuat hien nhieu nhat trong mang la:"<<x<<" va "<<y<<" voi cung so lan la:"<<h;
    }
    else if(h>t)
    {
        cout<<"so xuat hien nhieu nhat trong mang la:"<<x<<" voi so lan la:"<<h;
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
    xuathien(a,n);
    return 0;
}
