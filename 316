#include <iostream>
//Tìm dãy con toàn dương có tổng lớn nhất
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
void xuatmangcon(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int y=1;y<=n;y++)
        {
            for(int j=i;j<y;j++)
            {
                cout<<a[j]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
int duong(int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(b[i]<0)
        {
            return 0;
        }
    }
    return 1;
}
int lonnhat(int b[],int n)
{
    int m=0;
    for(int i=0;i<n;i++)
    {
        m=m+b[i];
    }
      return m;
}
void duongtong(int a[],int n)
{
    int x=0;
    int b[100];
    for (int i=0;i<n;i++)
    {
        for(int y=1;y<=n;y++)
        {
            int nb=0;
            for(int j=i;j<y;j++)
            {
                b[nb]=a[j];
                nb++;
                if(duong(b,nb)==1)
                {
                  if(lonnhat(b,nb)>x)
                  {
                      x=lonnhat(b,nb);
                  }
                }
            }
        }
    }
    cout<<"day toan duong co gia tri lon nhat bang =  "<<x<<endl;
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap vao so phan tu trong mang "<<endl;
    cin>>n;
    nhapmang(a,n);
    xuatmangcon(a,n);
    duongtong(a,n);
    return 0;
}
