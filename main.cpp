#include <iostream>
//Tìm max nguyên tố trong ma trận
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
void maxnguyento(int a[][Max],int n)
{
    int temp=0,x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int dem=0;
            for(int h=1;h<=a[i][j];h++)
            {
                if(a[i][j]%h==0)
                {
                    dem++;
                }
            }
            if(dem==2)
            {
                 x=a[i][j];
                temp++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int dem=0;
            for(int h=1;h<=a[i][j];h++)
            {
                if(a[i][j]%h==0)
                {
                    dem++;
                }

            }
            if(dem==2 & a[i][j]>x)
            {
                x=a[i][j];
            }
        }
    }
    if(temp>0)
    {
        cout<<"max so nguyen to trong ma tran la:"<<x;
    }
    else
    {
        cout<<"ma tran khong co so nguyen to";
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
   maxnguyento(a,n);
    return 0;
}
