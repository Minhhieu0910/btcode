#include <iostream>
//Liệt kê dãy con tăng và chứa giá trị lớn nhất
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
void xuatmang(int a[],int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
    }
}
void xuatmangcon(int b[],int n)
{
     cout<<"day mang con tang:";
    for(int i=0;i<n;i++)
    {
        cout<<b[i];
    }
    cout<<endl;
}
int timmax(int a[],int n)
{
    int Max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>Max)
        {
            Max=a[i];
        }
    }
    return Max;
}
int tangdan(int b[],int n)
{
        for(int j=0;j<n-1;j++)
        {
            if(b[j]>b[j+1])
            {
                return 0;
            }
        }
        return 1;
}
int ktracomax(int b[],int n,int Max)
{
    for(int j=0;j<n;j++)
        {
            if(b[j]==Max)
            {
                return 1;
            }
        }
        return 0;
}
void lietke(int a[],int n,int Max)
{
    int b[90];
    int nb;
    for(int i=0;i<n;i++)
    {
        for(int y=1;y<=n;y++)
        {
            nb=0;
            for(int j=i;j<y;j++)
            {
                b[nb]=a[j];
                nb++;
            }
            if(nb>1)
            {
                 if(tangdan(b,nb)==1)
            {
                 xuatmangcon(b,nb);
                if(ktracomax(b,nb,Max)==1)
                {
                    cout<<"mang con nay co chua gia tri lon nhat cua mang 1 chieu, do la: "<<Max<<endl;
                }
            }
            }

        }
    }
}
int main()
{
    int a[100];
    int n;
    int Max;
    cout<<"Nhap n:"<<endl;
    cin>>n;
    nhapmang(a,n);
    Max=timmax(a,n);
    lietke(a,n,Max);

    return 0;
}
