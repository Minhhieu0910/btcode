#include <iostream>
//Sắp xếp số hoàn thiện giảm dần nhưng giá trị khác giữ nguyên vị trí
using namespace std;
void nhapmang(int a[],int &n)
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
        cout<<a[i]<<endl;
    }
}
int hoanthien(int k,int n)
{ int t;
    for(int i=0;i<n;i++)
    {
        int x=0;
        for(int j=1;j<=k/2;j++)
        {
            if(k%j==0)
            {
                x=x+j;
            }
        }
        if(x==k)
        {

            return 1;

        }
    }
}
void sapxep(int a[],int &n)
{
    int t;
     for(int i=0;i<n;i++)
     {
        if(hoanthien(a[i],n)==1)
         {
            for(int j=i+1;j<n;j++)
            {
                if(hoanthien(a[j],n)==1)
                {
                   if(a[i]<a[j])
                   {
                       t=a[j];
                       a[j]=a[i];
                       a[i]=t;
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
    cout<<"nhap N"<<endl;
    cin>>n;
    nhapmang(a,n);
    sapxep(a,n);
    xuatmang(a,n);

    return 0;
}
