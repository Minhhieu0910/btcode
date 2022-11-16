#include <iostream>
//Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên tố trong mảng 1 chiều các số nguyên
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
void nguyento(int a[],int n)
{
    cout<<"vi tri so nguyen to la:"<<endl;
    for(int i=0;i<n;i++)
    {
        int dem=0;
        for(int j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                dem++;
            }
        }
        if(dem==2)
        {
            cout<<"a["<<i<<"]"<<"\t";
        }
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
    nguyento(a,n);
    return 0;
}
