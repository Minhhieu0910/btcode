#include <iostream>
//Tạo mảng b sao cho b[i] = tổng các phần tử lân cận với a[i] trong mảng a
using namespace std;
void nhapmang(int a[],int n)
{
    cout<<"nhap gia tri cho cac phan tu trong mang :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]="<<endl;
        cin>>a[i];
    }
}
void xuatmang(int b[],int nb)
{
    cout<<"xuat mang b:"<<endl;
    for(int j=0;j<nb;j++)
    {
        cout<<b[j]<<"\t";
    }
}
void taomang(int a[],int n)
{
    int b[100];
    for(int i=0;i<n;i++)
    {
        if(i>0)
        {
             b[i]=a[i]+a[i-1]+a[i+1];
        }
       else if(i==0)
       {
           b[i]=a[i]+a[i+1];
       }

    }
    xuatmang(b,n);
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap vao so luong phan trong mang a:"<<endl;
    cin>>n;
    nhapmang(a,n);
    taomang(a,n);
    return 0;
}
