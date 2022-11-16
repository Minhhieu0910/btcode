#include <iostream>
//Hãy xác định số lượng phần tử kề nhau mà cả 2 đều chẵn
using namespace std;
void nhap(int a[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuat(int a[],int n)
{
    cout<<"\n cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
    }
int xacdinh(int a[],int n)
{
    int h=0;
    for(int i=0;i<n-1;i++)
    {

        if(a[i]%2==0 & a[i+1]%2==0 )
           {
            h=h+2;
           }
    }
         for(int i=0;i<n-2;i++)
        {
            if( a[i]%2==0 && a[i+1]%2==0 && a[i+2]%2==0)
            {
                h=h-1;
            }
        }

    return h;
}
int main()
{

    int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
   int t= xacdinh(a,n);
   cout<<"so luong phan tu ke nhau ma ca 2 deu chan la: "<<t;
    return 0;
}
