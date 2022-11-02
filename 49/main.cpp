#include <iostream>
//Tìm phần tử lớn nhất trong mảng một chiều
#define MAX 100
using namespace std;
void nhapmang(float a[], int n)
{
   do
   {
       cout<<"nhap vao so phan tu cua mang "<<endl;
       cin>>n;
       if(n<=0 || n>MAX)
       {
           cout<<"so phan tu khong hop le !"<<endl;
       }
   }while(n<=0 || n>MAX);
   for(int i=0; i<n;i++)
   {
       cout<<"nhap vao gia tri cua a["<<i<<"]= ";
       cin>>a[i];
   }
}
float timmax(float a[],int n)
{
     float m=a[0];
    for(int i=0;i<n;i++)
    {

        if(a[i]>m)
        {
            m=a[i];
        }
    }
    return m;
}
void xuatmang(float a[],int n)
{
    cout<<"cac phan tu trong mang la: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"phan tu lon nhat trong mang la: "<<timmax(a,n);
}
int main()
{
    int n;
float a[MAX];
  nhapmang(a,n);
   xuatmang(a,n);

}
