#include <iostream>
/*Cho mảng số thực có nhiều hơn 2 giá trị và các giá trị trong mảng khác nhau từng đôi một.
 Hãy viết hàm tìm 2 giá trị gần nhau nhất trong mảng
  (Lưu ý: Mảng có các giá trị khác nhau từng đôi một còn có tên là mảng phân biệt)*/
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
void giatri(float a[],int n)
{
    float b=abs(a[0]-a[1]);
    float x=0;
    int h=0;
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(a[i]== a[j])
                {
                    h++;
                }
            }
        }
        if(h>0)
        {
            cout<<"cac gia tri PHAI khac nhau tung doi mot";
        }
        if(h==0)
        {
            for(int i=0;i<n;i++)
        {
        for(int j=i+1;j<=n;j++)
        {
            x=abs(a[i]-a[j]);
              if(x<b)
              {
                  b=x;

              }
        }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                x=abs(a[i]-a[j]);
              if(x==b)
              {
                  cout<<a[i]<<" va "<<a[j]<<endl;
              }
            }

        }
}
}
int main()
{
    int n;
   // int Max;
    float a[100];
    do
    {
        cout<<" nhap N:"<<endl;
        cin>>n;
        if(n<=2 || n>100)
        {
            cout<<"n phai lon hon 2, vui long nhap lai!"<<endl;
        }
    }while(n<=2 || n>100);
    nhap(a,n);
    xuat(a,n);
    giatri(a,n);

    return 0;
}
