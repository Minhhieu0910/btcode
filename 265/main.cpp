#include <iostream>
//Cho 2 mảng tăng. Hãy trộn thành 1 mảng giảm dần
using namespace std;
void nhapmang(int a[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuatmang(int c[],int n)
{
    cout<<"\n cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<c[i]<<endl;
    }
}
void mangc(int a[],int b[],int c[],int n,int na,int nb)
{
    int j=0;
    for(int i=0;i<na;i++)
    {
        if(j<na)
        {
            c[i]=a[j];
            j=j+1;
        }
    }
    int k=0;
    for(int i=na;i<n;i++)
    {
        if(k<nb)
        {
            c[i]=b[k];
            k=k+1;
        }
    }
}
void tron(int c[],int &n)
{
    int h;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(c[i]<c[j])
            {
                h=c[j];
                c[j]=c[i];
                c[i]=h;
            }
        }
    }
}
int main()
{
    int a[100];
    int b[100];
    int c[100];
    int na,nb,n;
    cout<<"nhap Na:"<<endl;
    cin>>na;
    nhapmang(a,na);
    cout<<"Nhap Nb:"<<endl;
    cin>>nb;
    nhapmang(b,nb);
    n=na+nb;
    mangc(a,b,c,n,na,nb);
    tron(c,n);
    xuatmang(c,n);

    return 0;
}
