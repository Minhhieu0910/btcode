#include <iostream>
//Liệt kê tất cả các mảng con
using namespace std;
void nhapmang(int a[],int n)
{
   cout<<"nhap gia tri cua cac phan tu trong mang:"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<"a["<<i<<"]= "<<endl;
       cin>>a[i];
   }
}
void xuatmang(int a[],int n)
{
    cout<<"cac phan tu trong trong mang sau khi da hoan thanh yeu cau bai toan:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
    }
}
void mangcon(int a[],int n)
{
    int chieudai;
    for(int i=0;i<n;i++)
    {
        for(chieudai=1;chieudai<=n;chieudai++)
        {
            for(int j=i;j<chieudai;j++)
            {
                cout<<a[j]<<"\t";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int a[100];
   int n;
   cout<<"nhap so luong phan tu trong mang:"<<endl;
   cin>>n;
   nhapmang(a,n);
    mangcon(a,n);
   xuatmang(a,n);
    return 0;
}
