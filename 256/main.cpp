#include <iostream>
//Sắp xếp mảng giảm dần
using namespace std;
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
void giamdan(int a[],int &n)
{
    int x;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(a[i]<a[j])
             {
                x=a[j];
                a[j]=a[i];
                a[i]=x;

             }
        }
        cout<<a[i]<<"\t";
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
    cout<<"sap xep theo thu tu giam dan trong mang la: ";
    giamdan(a,n);
    return 0;
}
