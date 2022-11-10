#include <iostream>
//Viết hàm tính tổng các giá trị âm trong mảng 1 chiều các số thực
using namespace std;
void tong(float a[],int n)
{
    int i;
    float b;
    cout<<"nhap vao gia tri cua mang"<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<"A["<<i<<"]= ";
    cin>>a[i];
    }
        for(int i=0;i<n;i++)
        {
             if(a[i]*1<0)
             {
                 b=b+a[i];
             }
        }

    cout<<" tong cac gia tri am trong mang 1 chieu cac so thuc = "<<b<<endl;
}
int main()
{
   float a[100];
   int n;
   cout<<"nhap vao so luong phan tu trong mang 1 chieu"<<endl;
   cin>>n;
   tong(a,n);
    return 0;
}
