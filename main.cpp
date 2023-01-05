#include <iostream>
// Viết hàm nhập, xuất ma trận vuông các số nguyên
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
int main()
{
   int a[Max][Max];
   int n;
   cout<<"nhap so cot va dong cua ma tran vuong"<<endl;
   cin>>n;
   nhapmatranvuong(a,n);
   xuatmatranvuong(a,n);

    return 0;
}
