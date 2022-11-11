#include <iostream>
//Tìm giá trị nhỏ nhất trong mảng 1 chiều số thực
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
       cout<<a[i]<<endl;
   }
}
void nhonhat(float a[], int n)
{
    float x=a[0];
    for( int i=0;i<n;i++)
    {
        if(x>a[i])
        {
            x=a[i];
        }
    }
    cout<<"gia tri nho nhat trong mang la: "<<x;
}
int main()
{
    float a[100];
    int n;
    cout<<"nhap N"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    nhonhat(a,n);


    return 0;
}
