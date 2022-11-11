#include <iostream>
//Cho mảng 1 chiều các số thực, hãy tìm giá trị đầu tiên lớn hơn giá trị 2003. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về  -1
using namespace std;
void nhap(float a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuat(float a[],int n)
{
    cout<<"cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}
void tim(float a[],int n)
{
    int h=0;
    float x;
    for(int i=0;i<n;i++)
    {
        if(a[i]>2003)
        {
            x=a[i];
            h++;
            if(h==1)
            {
                cout<<"gia tri dau tien lon hon gia tri 2003 la:"<<x;
            }
        }
    }
    if(h==0)
    {
        cout<<"khong co gia tri lon hon 2003: -1";
    }
}
int main()
{
     float a[100];
    int n;
    cout<<" nhap N ";
    cin>>n;
    nhap(a,n);
    xuat (a,n);
    tim(a,n);
    return 0;
}
