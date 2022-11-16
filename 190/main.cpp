#include <iostream>
// Hãy liệt kê các giá trị có toàn chữ số lẻ trong mảng 1 chiều các số nguyên
using namespace std;
//void nhap(int a[],int n)
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
int sole(int k)
{
    int dem;
       dem=0;
        while(k>0)
        {
        if(k%2==0)
        {
           dem++;
        }
        k= k/10;
        }
      if(dem==0)
      {
          return 1;
      }


}
int xuatsole(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(sole(a[i])==1)
        {
            cout<<a[i]<<"\t";
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
    cout<<"cac gia tri toan gia tri le tron"
    xuatsole(a,n);
    return 0;
}
