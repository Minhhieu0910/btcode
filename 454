#include <iostream>
// Tổng phần tử thuộc ma trận tam giác trên (ko tính đường chéo) trong ma trận vuông
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
void tongtamgiactren(float a[][Max],int n)
{
    float tong=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            tong=tong+a[i][j];
        }
    }
    cout<<"Tong phan tu ma tran thuoc tam giac tren bang :"<<tong;
}
int main()
{
    float a[Max][Max];
   int n;
   cout<<"nhap so cot va dong cua ma tran vuong"<<endl;
   cin>>n;
   nhapmatranvuong(a,n);
   xuatmatranvuong(a,n);
   tongtamgiactren(a,n);
    return 0;
}
