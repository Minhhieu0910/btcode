#include <iostream>
//Đếm số nguyên tố có trong mảng một chiều các số nguyên
using namespace std;
void nhap(int a[],int n)
{
        for(int i=0;i<n;i++)
        {
           cout<<"nhap gia tri cua phan tu a["<<i<<"]= "<<endl;
           cin>>a[i];
        }

}
void xuat(int a[],int n)
{
         cout<<"cac so nguyen to trong mang mot chieu la: ";
}
int demNT(int a[], int n)
{
    int h=0;
    for(int i=0;i<n;i++)
    {
         int dem =0;
        for(int t=1;t<=a[i];t++)
    {
        if(a[i]% t == 0)
        {
            dem++;

        }
    }
    if(dem ==2)
    {
        cout<<a[i]<<"\t";
        h++;
    }
    }
    cout<<" so luong so nguyen to co trong mang mot chieu la: "<<h;
}
int main()
{
    int a[100];
    int n;
    int h;
    cout<<"nhap so luong phan tu trong mang n="<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    demNT(a,n);
    return 0;
}
