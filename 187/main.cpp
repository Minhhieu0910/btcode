#include <iostream>
//Hãy liệt kê các vị trí mà giá trị tại các vị trí đó bằng giá trị dương nhỏ nhất trong mảng 1 chiều các số thực
using namespace std;
void nhap(float a[],int n)
{

    for(int i=0;i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuat(float a[],int n)
{
    cout<<"\n cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}
void vitri(float a[],int n)
{
    float x=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            x=a[i];
        }
    }
    float h=x;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0 & a[i]<=h)
        {
            h=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==h)
        {
            cout<<"vi tri gia tri duong nho nhat la:"<<i<<"\t";
        }
    }


}
int main()
{
    float a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
   vitri(a,n);
    return 0;
}
