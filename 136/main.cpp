#include <iostream>
//Tìm số chẵn cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có giá trị chẵn thì trả về -1
using namespace std;
void nhap(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuat(int a[],int n)
{
    cout<<"cac phan tu co trong mang: "<<endl;
    for(int i=0;i<n;i++)
   {
       cout<<a[i]<<endl;
   }
}

void tim(int a[],int n)
{
    int x;
    int dem=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]%2==0)
    {
        x=a[i];
        dem++;
    }
    }
    if(dem>=1)
    {
     cout<<"gia tri chan cuoi tron mang la: "<<
     x;
    }
    if(dem==0)
    {
        cout<<"-1 :khong co gia tri chan trong mang";
    }
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    tim(a,n);
    return 0;
}
