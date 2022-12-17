#include <iostream>
//Cho mảng a, số nguyên M. Tìm 1 mảng con sao cho tổng các phần tử bằng M
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
        cout<<b[i]<<"  ";
    }
    cout<<endl;
}
int tong10(int b[],int n,int M)
{
    int m=0;
    for(int i=0;i<n;i++)
    {
        m=b[i]+m;
    }
    if(m==M)
    {
        return 1;
    }
    return 0;
}
void tim(int a[],int n,int M)
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
            if(tong10(b,nb,M)==1)
            {
                xuatmangcon(b,nb);
            }
        }
    }
}
int main()
{
    int a[100];
    int n,M;
    cout<<"nhap n:"<<endl;
    cin>>n;
    nhapmang(a,n);
    cout<<"Nhap so nguyen M:"<<endl;
    cin>>M;
    tim(a,n,M);
    return 0;
}
