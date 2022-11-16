#include <iostream>
//Đếm số lượng các giá trị phân biệt có trong mảng
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
int phanbiet(int a[],int n)
{
    int h=n;
    for( int i=0;i<n;i++)
    {
        int dem=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                h=h-2;
            }
        }
    }
    return h;
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
   int t= phanbiet(a,n);
   cout<<"so luong cac gia tri phan biet trong mang  la: "<<t;
    return 0;
}
