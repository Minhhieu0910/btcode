#include <iostream>
//Cho 2 mảng a, b. Liệt kê các giá trị chỉ xuất hiện 1 trong 2 mảng
using namespace std;
void nhapmang(int a[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuatmang(int a[],int n)
{
    cout<<"\n cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}
void lietke(int a[],int b[],int na,int nb)
{
    int k,u;
    for(int i=0;i<na;i++)
    {
        int dem=0;
        int t=0;
        for(int j=0;j<nb;j++)
        {
            if( a[i]==a[j])
            {
                t++;
            }
        }
        for(int j=0;j<nb;j++)
        {
             if(a[i]==b[j] && t==1)
            {
                dem++;
            }
        }
        if(dem==0 & t==1)
          {
            cout<<a[i]<<"\t";
          }

}
    for(int i=0;i<nb;i++)
    {
        int dem=0;
        int h=0;
        for(int j=0;j<na;j++)
        {
            if(b[i]==b[j])
               {
                   h++;
               }
        }
         for(int j=0;j<na;j++)
         {
             if(b[i]==a[j] && h==1)
            {
                dem++;
            }
         }
        if(dem==0 & h==1)
        {
            cout<<b[i]<<"\t";
        }
    }
}
int main()
{
   int a[100];
   int b[100];
   int na,nb;
    cout<<"Nhap so luong phan tu mang 1:"<<endl;
    cin>>na;
    nhapmang(a,na);
    xuatmang(a,na);
    cout<<"Nhap so luong phan tu mang 2:"<<endl;
    cin>>nb;
    nhapmang(b,nb);
    xuatmang(b,nb);
    cout<<"cac gia tri chi xuat hien 1 lan trong 2 mang: ";
    lietke(a,b,na,nb);
    return 0;
}
