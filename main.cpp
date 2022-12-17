#include <iostream>
//Liệt kê dãy con toàn dương và có độ dài lớn hơn 1
using namespace std;
void nhapmang(int a[],int n)
{
   cout<<"nhap gia tri cua cac phan tu trong mang:"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<"a["<<i<<"]= "<<endl;
       cin>>a[i];
   }
}
void xuatmangcon(int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<b[i];
    }
    cout<<endl;
}
int toanduong(int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(b[i]<=0)
        {
            return 0;
        }
    }
    return 1;
}
int dodailonhon1(int b[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(abs(b[i+1]-b[i])<=1)
        {
            return 0;
        }
    }
    return 1;
}
void lietke(int a[],int n)
{
    int b[100];
    for(int i=0;i<n;i++)
    {
        for(int y=1;y<=n;y++)
        {
           int nb=0;
            for(int j=i;j<y;j++)
            {

                b[nb]=a[j];
                nb++;
            }
            if(nb>1)
            {
                 if(toanduong(b,nb) && dodailonhon1(b,nb)==1)
                {
                    xuatmangcon(b,nb);
                }
            }
        }
    }
}
int main()
{
int n;
int a[100];
cout<<"nhap n:"<<endl;
cin>>n;
nhapmang(a,n);
lietke(a,n);
    return 0;
}
