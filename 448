#include <iostream>
//Viết hàm kiểm tra trong ma trận vuông các số nguyên có tồn tại giá trị chẵn nhỏ hơn 2015 hay không
using namespace std;
#define Max 100
void nhapmatranvuong(int a[][Max],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]= "<<endl;
            cin>>a[i][j];
        }
    }
}
void xuatmatranvuong(int a[][Max],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void kiemtra(int a[][Max],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]%2==0 & a[i][j]<2015)
            {
                dem++;
            }
        }
    }
    if(dem>0)
    {
        cout<<"co ton tai gia tri chan nho hon 2015";
    }
    else
    {
        cout<<"khong ton tai gia tri chan nho hon 2015";
    }
}
int main()
{
    int a[Max][Max];
   int n;
   cout<<"nhap so cot va dong cua ma tran vuong"<<endl;
   cin>>n;
   nhapmatranvuong(a,n);
   xuatmatranvuong(a,n);
   kiemtra(a,n);
    return 0;
}
