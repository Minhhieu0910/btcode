#include <iostream>
// Đưa chẵn về đầu ma trận vuông
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
void hoanvi(int &n1,int &n2)
{
    int temp=n1;
       n1=n2;
       n2=temp;
}
void chanvedau(int a[][Max],int n)
{
    int b[Max];
    int h=0,z=0,k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[h++]=a[i][j];
            if(a[i][j]%2==0)
            {
                hoanvi(b[z++],b[h-1]);
            }
        }
    }
    h=0;
    for(int i=0;i<n;i++ )
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=b[h++];
        }
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
   chanvedau(a,n);
   xuatmatranvuong(a,n);

    return 0;
}
