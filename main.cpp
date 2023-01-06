#include <iostream>
// Đếm số lượng cặp giá trị đối xứng nhau wa đường chéo chính
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
void soluongdoixung(int a[][Max],int n)
{
    int dem =0;
    for( int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i][j]==a[j][i])
                dem++;
        }
    }
    cout<<"so phan tu doi xung qua duong cheo chinh la:"<<dem;
}
int main()
{
    int a[Max][Max];
   int n;
   cout<<"nhap so cot va dong cua ma tran vuong"<<endl;
   cin>>n;
   nhapmatranvuong(a,n);
   xuatmatranvuong(a,n);
   soluongdoixung(a,n);
    return 0;
}
