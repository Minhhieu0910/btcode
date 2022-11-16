#include <iostream>
//Cho mảng 1 chiều các số nguyên. Hãy viết hàm liệt kê các giá trị trong mảng có dạng 3^k. Nếu mảng không có giá trị đó thì trả về 0
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
void lietke(int a[], int n)
{
    cout<<"cac gia tri trong mang co gia tri dang 3^k:";
    int h,x,dem=0;
    for( int i=0;i<n;i++)
    {
        h=3;
        x=1;
        for(int j=1;j<a[i];j++)
        {
            x=x*h;
            if(x==a[i])
            {
                cout<<a[i]<<"\t";
                dem++;
            }
        }
    }
    if(dem==0)
    {
        cout<<"khong co gia tri dang 3^k trong mang: 0";
    }
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    lietke(a,n);
    return 0;
}
