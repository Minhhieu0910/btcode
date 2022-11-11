#include <iostream>
//Hãy tìm giá trị âm lớn nhất trong mảng 1 chiều các số thực. Nếu mảng không có giá trị âm thì trả về  -1
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
    int dem=0,x=0,h=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]*1<0)
        {
            x=a[i];
            dem++;
        }
    }
     for(int j=0;j<n;j++)
            {
                if(a[j]*x>0)
                {
                    if(x>=a[j])
                    {
                        h=x;
                    }
                    else
                    {
                        h=a[j];
                    }
                    x=h;
                }
            }
            if(dem==0)
            {
                cout<<"khong co so am: -1";
            }
            else
            {
                cout<<"gia tri am lon nhat la: "<<h;
            }


}
int main()
{
    int a[0];
    int n;
    cout<<" nhap N ";
    cin>>n;
    nhap(a,n);
    xuat (a,n);
    tim(a,n);
    return 0;
}
