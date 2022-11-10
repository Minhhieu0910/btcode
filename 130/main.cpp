#include <iostream>
//Viết hàm nhập, xuất mảng 1 chiều các số thực
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
int main()
{
    float a[100];
    int n;
    cout<<"nhap N"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    return 0;
}
