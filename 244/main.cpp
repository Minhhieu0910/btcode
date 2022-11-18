#include <iostream>
//Kiểm tra mảng thỏa tính chất: mảng không có số hoàn thiện lớn hơn 256. Có trả về 1, không có trả về 0
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
int hoanthien(int a[],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        int x=0;
        for(int j=1;j<=a[i]/2;j++)
        {
            if(a[i]%j==0)
            {
                x=x+j;
                if(x>256 & x==a[i])
                {
                    dem++;
                    cout<<a[i]<<"\t";
                }
            }
        }
    }
    return dem;
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N:";
    cin>>n;
    nhapmang(a,n);
    xuatmang(a,n);
    if(hoanthien(a,n)>0)
    {
        cout<<"mang co so hoan thien lon hon 256: 1 ";
    }
    else
    {
        cout<<"mang khong co so hoan thien lon hon 256: 0";
    }
    hoanthien(a,n);
    return 0;
}
