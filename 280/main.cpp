#include <iostream>
//Xóa tất cả các phần tử trùng nhau trong mảng và chỉ giữ lại duy nhất 1 phần tử
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
        cout<<"a["<<i<<"]= "<<c[i]<<endl;
    }
}
void xoa(int a[],int &n)
{
    for(int i=0;i<n;i++)
    {
     for (  int j=i+1;j<n;j++)
     {
       if(a[i]==a[j])
       {
           n=n-1;
           for(int k=j;k<n;k++)
           {
               a[k]=a[k+1];
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
    xoa(a,n);
    xuatmang(a,n);
    return 0;
}
