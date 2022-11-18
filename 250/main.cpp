#include <iostream>
//Hãy cho biết các phần tử trong mảng có lập thành cấp số cộng hay không? Nếu có chỉ ra công sai d
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
void capsocong(int a[],int n)
{
    int x,dem=0,h=0;
    x=abs(a[0]-a[1]);
    for(int i=0;i<n-1;i++)
    {
        h=abs(a[i]-a[i+1]);
        if(x!=h)
        {
            dem++;
        }
    }
    if(dem==0)
    {
        cout<<"cac phan tu trong mang 1 chieu la cap so cong, voi cong sai la: "<<h;
    }
    else
    {
        cout<<"cac phan tu trong mang 1 chieu khong la 1 cap so cong";
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
    capsocong(a,n);
    return 0;
}
