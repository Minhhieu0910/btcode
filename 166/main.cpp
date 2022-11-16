#include <iostream>
//Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm giá trị đầu tiên trong mảng có dạng 2^k. Nếu mảng không có giá trị dạng 2k thì hàm sẽ trả về 0
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
    int t=0,h=1;
    int dem=0;
    int q=0;
    for (int i=0;i<n;i++)
    {
        h=1;
        for (int j=0;j<a[i];j++)
        {
            t=h;
        h=2*t;
        if(a[i]==h)
        {
            dem++;
            if(dem==1)
            {
                cout<<"gia tri dau tien trong mang co gia dang 2^k la:"<<a[i];
            }
        }
        }
        if(a[i]%2==0)
        {
            q++;
        }

    }
    if(q==0)
            {
                cout<<"mang khong co gia tri 2k : 0";
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
