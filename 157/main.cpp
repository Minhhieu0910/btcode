#include <iostream>
//Cho mảng 1 chiều các số thực, hãy tìm đoạn [a, b] sao cho đoạn này chứa tất cả các giá trị trong mảng
using namespace std;
void nhap(float a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuat(float a[],int n)
{
    cout<<"cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}
void tim(float a[],int n)
{
    float c=a[0];
    float d=a[0];
    for(int i=1;i<n;i++)
    {
        if(c>a[i])
        {
            c=a[i];
        }
    }
    for(int i=1;i<n;i++)
    {
        if(d<a[i])
        {
            d=a[i];
        }
    }
    cout<<"doan chua tat ca cac gia tri trong mang la: ["<<c<<" , "<<d<<"]";
}
int main()
{
    float a[100];
    int n;
    cout<<" nhap N ";
    cin>>n;
    nhap(a,n);
    xuat (a,n);
    tim(a,n);
    return 0;
}
