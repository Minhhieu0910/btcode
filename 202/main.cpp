#include <iostream>
//Tính tổng các giá trị có chữ số đầu tiên là chữ số lẻ trong mảng 1 chiều các số nguyên
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
int le(int k,int n)
{
    for(int i=0;i<n;i++)
    {
    while(k>=10)
    {
        k=k/10;
    }
    if(k%2!=0)
    {
        return 1;
    }
    }
}
void tongle(int a[],int n)
{
    int x=0;
    for(int i=0;i<n;i++)
    {
        if (le(a[i],n)==1)
        {
            x=x+a[i];
        }
    }
    cout<<"tong gia tri cac chu so co chu so dau tien la chu so le la: "<<x;
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    tongle(a,n);

    return 0;
}
