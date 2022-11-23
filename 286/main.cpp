#include <iostream>
//Hãy đưa chẵn về đầu, lẻ về cuối, phần tử 0 nằm giữa mảng
using namespace std;
void nhapmang(int a[],int n)
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
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
    }
}
void duave(int a[],int &n)
{
    int t=0;
    int h;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]%2==0)
                {
                    h=a[j];
                    a[j]=a[i];
                    a[i]=h;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {   // int l=9;
        if(a[i]%2==1)
        {
            n++;  //cho n=9
           //a[n-2]=l;
            for(int j=n;j>i;j--)
            {
                 a[j]=a[j-1];
            }
            a[i]=t;
          break;
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
    duave(a,n);
    xuatmang(a,n);
       return 0;
}
