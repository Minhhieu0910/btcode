#include <iostream>
//Liệt kê các giá trị chẵn trong mảng các số nguyên
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

        cout<<"cac gia tri chan trong mang la:";

}
int chan(int a[],int n)
{
     for(int i=0;i<n;i++)
     {
         if(a[i]%2==0)
         {
             cout<<"a["<<i<<"]= "<<a[i]<<"\t";
         }
     }
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap so luong phan tu trong mang n= "<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    chan(a,n);
    return 0;
}
