#include <iostream>
//Đảo ngược thứ tự các số chẵn trong mảng
using namespace std;
void nhapmang(int a[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuatmang(int a[],int &n)
{
    cout<<"\n cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
    }
}
void hoanvi(int &a,int &b)
{
    int c=a;
    a=b;
    b=c;
}
void daonguoc(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]%2==0)
        {
            for(int j=i+1;j<n;j++)
            {
            if(a[j]%2==0)
            {
                hoanvi(a[i],a[j]);
            }
            }
        }
    }
}
int main()
{
   int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhapmang(a,n);
    daonguoc(a,n);
    xuatmang(a,n);
    return 0;
}
