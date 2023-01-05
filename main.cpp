#include <iostream>
//Tổng phần tử trên đường chéo phụ
using namespace std;
#define Max 100
void nhapmatranvuong(float a[][Max],int n)
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
void xuatmatranvuong(float a[][Max],int n)
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
void tongduongcheophu(float a[][Max],int n)
{
    int tong=0;
    for(int i=0;i<n;i++)
    {
                tong=tong+a[i][n-1-i];
    }
    cout<<"tong phan tu tren duong cheo phu bang:"<<tong;
}
int main()
{
    float a[Max][Max];
   int n;
   cout<<"nhap so cot va dong cua ma tran vuong"<<endl;
   cin>>n;
   nhapmatranvuong(a,n);
   xuatmatranvuong(a,n);
   tongduongcheophu(a,n);
    return 0;
}
