#include <iostream>
//Xóa các phần tử có chỉ số k trong mảng
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
int tim(int q,int n,int k)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        while(q>0)
        {
        if(q%10==k)
          {
           dem++;
          }
          else
          {
              dem=0;
              break;
          }
          q=q/10;
        }
        if(dem>0)
        {
            return 1;
        }

    }
}
void xoa(int a[],int &n,int k)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(tim(a[i],n,k)==1)
        {
            dem++;
            n=n-1;
            for(int j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
        }
    }
}
int main()
{
    int a[100];
    int n,k;
    cout<<"Nhap N:"<<endl;
    cin>>n;
    nhapmang(a,n);
    cout<<"xoa phan tu chi co so k la:"<<endl;
    cin>>k;
    xoa(a,n,k);
    xuatmang(a,n);
    return 0;
}
