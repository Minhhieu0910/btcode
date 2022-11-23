#include <iostream>
//Thêm 1 phần tử x vào mảng tại vị trí k
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
        cout<<"c["<<i<<"]= "<<c[i]<<endl;
    }
}
void them(int a[],int &n,int k,int x)
{
          n++;
    for(int i=n;i>k-1;i--)
            {
                a[i]=a[i-1];
            }
            a[k-1]=x;

}
int main()
{
   int a[100];
   int n;
   int x,k;
   cout<<"Nhap N:"<<endl;
   cin>>n;
   nhapmang(a,n);
   xuatmang(a,n);
   cout<<"nhap phan tu can muon them:"<<endl;
   cin>>x;
   cout<<"nhap vao vi tri muon them vao:"<<endl;
   cin>>k;
   them(a,n,k,x);
   xuatmang(a,n);
    return 0;
}
