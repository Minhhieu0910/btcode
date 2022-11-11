#include <iostream>
//Tìm số hoàn thiện đầu tiên trong mảng 1 chiều số nguyên. Nếu mảng không có số hoàn thiện thì trả về  -1
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
    int h=0,dem=0;
    for(int i=0; i<n; i++)
    {
        int x=0;
        for(int j=1; j<a[i]; j++)
        {
            if(a[i]%j==0)
            {
                x=x+j;
                }
                if(x==a[i] & h<1)
                {
                    dem++;
                    h++;
                    cout<<"so hoan thien dau tien trong mang 1 chieu la:"<<x;
            }

        }
    }
     if(dem==0)
            {
                cout<<"khong co so hoan thien trong mang :-1";
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
