#include <iostream>
//Đếm giá trị dương trên đường chéo chính
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
    cout<<"Ta co ma tran vuong nhu sau:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void giatriduong(int a[][Max],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i][i]>0)
        {
            dem++;
        }
    }
    cout<<"so gia tri duong tren duong cheo chinh la: "<<dem;
}
int main()
{
    int a[Max][Max];
   int n;
   cout<<"nhap so cot va dong cua ma tran vuong"<<endl;
   cin>>n;
   nhapmatranvuong(a,n);
   xuatmatranvuong(a,n);
   giatriduong(a,n);
    return 0;
}
