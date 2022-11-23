#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
//Hãy xuất phần tử trong mảng theo yêu cầu: chẵn vàng, lẻ trắng
using namespace std;
void nhapmang(int a[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuatmang(int a[],int &n)
{
    cout<<"\n cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
    }
}
void textcolor ( int x )
{
     HANDLE mau;
    mau = GetStdHandle
        (STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(mau, x);
}

void chanle(int a[],int n)
{
    cout<<"xuat mang, chan vang le trang:"<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            textcolor(6);
            cout<<a[i]<<endl;
        }
        else
        {
          textcolor(7);
            cout<<a[i]<<endl;
        }
    }
}
int main()
{
    int a[100];
    int k;
    cout<<"nhap K:"<<endl;
    cin>>k;
    nhapmang(a,k);
    chanle(a,k);
    //xuatmang(a,k);
    return 0;
}
