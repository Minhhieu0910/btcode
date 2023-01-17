#include <iostream>
//Cho mảng 1 chiều các số nguyên. Viết hàm tính tổng các số chẵn trong mảng bằng phương pháp đệ quy
using namespace std;
#define Max 100
void nhapmang1chieu(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"Nhap vao gia tri a["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuatmang1chieu(int a[],int n)
{
    cout<<"Ta co mang 1 chieu nhu sau: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
    }
}
int tongchandequy(int a[],int n)
{
    if(n==0)
    {
        return 0;
    }
    int s=tongchandequy(a,n-1);
       if (a[n-1]%2==0)
       {
            s=s+a[n-1];
       }
       return s;
}
int main()
{
    int a[Max];
    int n;
    cout<<"Nhap vao so luong phan tu n: "<<endl;
    cin>>n;
    nhapmang1chieu(a,n);
    xuatmang1chieu(a,n);
    int tong=tongchandequy(a,n);
    cout<<"Tong co so chan bang: "<<tong<<endl;
    return 0;
}
