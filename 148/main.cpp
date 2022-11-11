#include <iostream>
//Tìm số nguyên tố cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về  -1
using namespace std;
void nhap(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuat(int a[],int n)
{
    cout<<"cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}
void tim(int a[],int n)
{
    int x=0,h=0;
    for(int i=0; i<n; i++)
    {
        int dem=0;
         for(int j=1; j<=a[i]; j++)
         {
            if(a[i]%j==0 )
            {
                dem++;
            }
         }
         if(dem==2)
         {
             h++;;
             x=a[i];
         }
    }
    if(h==0)
    {
        cout<<"khong co so nguyen to trong mang: -1";
    }
    else
    {
        cout<<"so nguyen to cuoi cung trong mang la : "<<x;
    }
}
int main()
{
    int a[0];
    int n;
    cout<<" nhap N ";
    cin>>n;
    nhap(a,n);
    xuat (a,n);
    tim(a,n);
    return 0;
}
