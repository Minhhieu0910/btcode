#include <iostream>
//Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm số chẵn nhỏ nhất lớn hơn mọi giá trị có trong mảng
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
int soledautien(int a[],int n)
{
    int x=0;
    int dem=0;
    for (int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            x=a[i];
            dem++;
            if(dem==1)
            {
                return i;
            }
        }
    }
    if(dem==0)
    {
        return -1;
    }
}
void solelonnhat(int a[],int n )
{
    int h=0,t=0,dem=0,k=0;
    int lon=soledautien(a,n);
    for(int i=lon;i<n;i++)
    {
        if(a[i]%2!=0 & a[i]>=a[lon])
        {
            h=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0 & a[i]>h)
        {
            t=a[i];
            dem++;
            if(dem>=2 & t<k)
            {
                k=t;
            }
            if(dem<2)
            {
                k=t;
            }
        }
    }
    cout<<"gia tri chan nho nhat lon hon moi gia tri la: "<<k;
}
int main()
{
     int a[100];
    int n;
    cout<<" nhap N ";
    cin>>n;
    nhap(a,n);
    xuat (a,n);
    soledautien(a,n);
    solelonnhat(a,n);




    return 0;
}
