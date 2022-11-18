#include <iostream>
// Kiểm tra mảng có 2 giá trị 0 liên tiếp hay không? Có trả về 1, không có trả về 0
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
void lientiep(int a[],int n)
{
    int dem=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1] & a[i]==0)
        {
            dem++;
        }
    }
    if(dem>0)
    {
        cout<<"co 2 gia tri 0 lien tiep: 1";
    }
    else
    {
        cout<<"khong co 2 gia tri 0 lien tiep: 0";
    }
}
int main()
{

    int a[100];
    int n;
    cout<<"nhap N:";
    cin>>n;
    nhapmang(a,n);
    xuatmang(a,n);
    lientiep(a,n);
    return 0;
}
