#include <iostream>
//Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2004 hay không
using namespace std;
void nhap(int a[],int n)
{
   for(int i=0;i<n;i++)
   {
        cout<<"A["<<i<<"]= ";
        cin>>a[i];
   }
}
int kt(int a[],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0 & a[i]<2004)
    {
        cout<<a[i]<<"\t";
        dem++;
    }
    }
    if(dem >0)
    {
        cout<<"la cac gia tri chan nho hon 2004 nen suy ra co TON TAI"<<endl;
    }
    else
    {
        cout<<"KHONG TON TAI gia tri chan nho hon 2004 trong mang"<<endl;
    }
}

int main()
{
   int a[100];
   int n;
   cout<<"nhap vao so luong phan tu trong mang"<<endl;
   cin>>n;
   nhap(a,n);
   kt(a,n);
    return 0;
}
