#include <iostream>
//Viết hàm sắp xếp ma trận vuông các số thực tăng dần từ trên xuống dưới và từ trái sang phải
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
    cout<<"Ta co ma tran vuong nhu sau:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void tangdan(float a[][Max],int n)
{
    int y=n*n;
    for(int i=0;i<y-1;i++)
    {
        for(int j=i;j<y;j++)
        {
            if(a[i/n][i%n]>a[j/n][j%n])
            {
                float x=a[j/n][j%n];
                a[j/n][j%n]=a[i/n][i%n];
                a[i/n][i%n]=x;
            }

        }
    }
}

int main()
{
    float a[Max][Max];
   int n;
   cout<<"nhap so cot va dong cua ma tran vuong"<<endl;
   cin>>n;
   nhapmatranvuong(a,n);
   xuatmatranvuong(a,n);
   tangdan(a,n);
    xuatmatranvuong(a,n);
    return 0;
}
