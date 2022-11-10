#include <iostream>
// Viết hàm sắp xếp mảng 1 chiều các số thực tăng dần
using namespace std;
void nhap(float a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuat(float a[],int n)
{
    cout<<"cac phan tu co trong mang: "<<endl;
    for(int i=0;i<n;i++)
   {
        cout<<a[i]<<endl;
   }
}
void sapxep(float a[],int &n)
{
    float temp=0;
      for(int i=0;i<n-1;i++)
      {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
               temp = a[j];
               a[j]=a[i];
               a[i]=temp;
            }
        }

      }
}
int main()
{
    float a[100];
    int n;
    cout<<"nhap so luong phan tu cua mang "<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    sapxep(a,n);
    xuat(a,n);

    return 0;
}
