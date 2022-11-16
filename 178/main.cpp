#include <iostream>
// Hãy liệt kê các số chẵn trong mảng 1 chiều các số nguyên thuộc đoạn [x, y] cho trước (x, y là các số nguyên)
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
void lietke(int a[],int n,int x,int y)
{
    int dem=0;
    cout<<"so chan trong doan [x,y]: ";
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0 & x<=a[i] & y>=a[i] )
        {
            cout<<a[i]<<"\t";
            dem++;
        }

    }
    if(dem==0)
        {
            cout<<"khong co";
        }
}
int main()
{
        int x,y,n;
        int a[100];
    cout<<"Nhap N:";
    cin>>n;
        do
        {
        cout<<"Nhap x:";
        cin>>x;
        cout<<"\n Nhap y:";
        cin>>y;
        if(x>=y)
          {
              cout<<"\n khoang bi sai, vui long nhap lai!"<<endl;
          }
        }while(x>=y);
        nhap(a,n);
        xuat(a,n);
        lietke(a,n,x,y);




    return 0;
}
