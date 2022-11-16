#include <iostream>
//Đếm số lượng giá trị tận cùng bằng 5 trong mảng
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
void soluong(int a[],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%10==5)
        {
            cout<<a[i]<<"\t";
            dem++;
        }
    }
    if(dem>0)
    {
         cout<<"so luong gia tri tan cung bang 5 trong mang la:"<<dem;
    }
   else
   {
       cout<<"khong co gia tri tan cung bang 5 trong mang";
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
    soluong(a,n);
    return 0;
}
