#include <iostream>
//Tạo mảng b chỉ chứa giá trị lẻ từ mảng a
using namespace std;
void nhapmang(int a[],int n)
{
    cout<<"nhap gia tri cho cac phan tu trong mang :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]="<<endl;
        cin>>a[i];
    }
}
void xuatmang(int b[],int nb)
{
    cout<<"xuat mang b:"<<endl;
    for(int j=0;j<nb;j++)
    {
        cout<<b[j]<<"\t";
    }
}
void taomang(int a[],int n)
{
    int b[100];
    int nb=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[nb]=a[i];
            nb++;
        }
    }
    xuatmang(b,nb);
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap so luong phan tu trong mang a:"<<endl;
    cin>>n;
    nhapmang(a,n);
    taomang(a,n);
    return 0;
}
