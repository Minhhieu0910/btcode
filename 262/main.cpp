#include <iostream>
//Sắp xếp chẵn, lẻ tăng dần nhưng vị trí tương đối giữa các số không thay đổi
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
        cout<<a[i]<<endl;
    }
}
void sapxep(int a[],int &n)
{
    int h,t;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j] & a[j]%2==0)
                {
                    h=a[j];
                    a[j]=a[i];
                    a[i]=h;
                }
            }
        }
         if(a[i]%2==1)
        {
            for(int k=i+1;k<n;k++)
            {
                if(a[i]>a[k] & a[k]%2==1)
                {
                    t=a[k];
                    a[k]=a[i];
                    a[i]=t;
                }
            }
        }
    }
}
int main()
{
    int a[100];
    int n;
    cout<<"Nhap N:"<<endl;
    cin>>n;
    nhapmang(a,n);
    sapxep(a,n);
    xuatmang(a,n);

    return 0;
}
