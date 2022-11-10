#include <iostream>
//Tìm vị trí số hoàn thiện cuối cùng trong mảng 1 chiều các số nguyên. Nếu mảng không có số hoàn thiện thì trả về giá trị  -1
using namespace std;
void nhap(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuat(int a[],int n)
{
    cout<<"cac phan tu co trong mang: "<<endl;
    for(int i=0;i<n;i++)
   {
       cout<<a[i]<<endl;
   }
}
void vitri(int a[],int n)
{
    int t,dem=0;
    for(int i=0;i<n;i++)
    {
        int x=0;
        for(int j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                x=x+j;
                if(x==a[i])
                {
                    dem++;
                    t=x;
                }
            }
    }
}
          if(dem>0)
          {
            cout<<t<<" la so hoan thien cuoi cung cua mang"<<endl;
          }
          else
          {
              cout<<"-1";
          }

}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    vitri(a,n);
    return 0;
}


