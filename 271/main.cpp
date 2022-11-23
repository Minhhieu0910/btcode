#include <iostream>
//Thêm x vào trong mảng tăng nhưng vẫn giữ nguyên tính tăng của mảng
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
void mangtang(int a[],int n)
{
    int h=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                h=a[j];
                a[j]=a[i];
                a[i]=h;
            }
        }

    }
}
void chenx(int a[],int &n,int x)
{
    for(int i=0;i<n;i++)
    {
       if(x<a[i])
       {
          // a[i]=x; NẾU ĐỂ A[i]=X CHỖ NÀY THÌ GIÁ TRỊ CỦA A[i] TRƯỚC KHI BẰNG X SẼ MẤT VÌ NÓ ĐÃ TĂNG i LÊN
           for(int j=n;j>i;j--)
           {
               a[j]=a[j-1];
           }
           a[i]=x;

         break;
       }
       if(x>a[n-1])
       {
           a[n]=x;
       }
    }n++;
}
int main()
{
    int a[100];
    int n,x;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhapmang(a,n);
    cout<<"nhap gia tri can chen vao x= "<<endl;
    cin>>x;
    mangtang(a,n);
    chenx(a,n,x);
    xuatmang(a,n);
    return 0;
}
