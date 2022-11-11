#include <iostream>
//Tìm số chính phương đầu tiên trong mảng 1 chiều các số nguyên
using namespace std;
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
    int h=0;
    int x=0;
     for(int i=0;i<n;i++)
    {
         for(int j=1;j<n;j++)
         {
             if(j*j==a[i])
             {
                 x=a[i];
                 h++;
                 if(h==1)
                 {
                     cout<<"so chinh phuong dau tien trong mang la: "<<x;
                 }
             }
         }
}
if(h==0)
{
    cout<<"khong co so chinh phuong nao trong mang";
}
}
int main()
{
    int a[100];
    int n;
    cout<<" nhap N ";
    cin>>n;
    nhap(a,n);
    xuat (a,n);
    tim(a,n);
    return 0;
}
