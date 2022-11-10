#include <iostream>
//Viết hàm liệt kê các vị trí mà giá trị tại đó là giá trị âm trong mảng 1 chiều các số thực
using namespace std;
void nhap(float a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuat(float a[],int n)
{
    cout<<"cac phan tu co trong mang: "<<endl;
    for(int i=0;i<n;i++)
   {
      ;  cout<<a[i]<<endl;
   }
}
void lietke(float a[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]*1<0)
        {
            cout<<"a["<<i<<"]"<<"\t";
        }
    }
}
int main()
{

    float a[100];
    int n;
    cout<<"nhap N"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    cout<<"vi tri ma gia tri tai do am la: "<<endl;
    lietke(a,n);
    return 0;
}
