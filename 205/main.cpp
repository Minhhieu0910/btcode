#include <iostream>
//Tính tổng các giá trị lớn hơn trị tuyệt đối của giá trị đứng liền sau nó trong mảng 1 chiều các số thực
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
void tong(int a[],int n)
{
    int x=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]> abs(a[i+1]))
        {
            x=x+a[i];
        }
    }
    cout<<"tong bang = "<<x;
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    tong(a,n);
    return 0;
}
