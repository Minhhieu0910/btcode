#include <iostream>
//Hoán vị 2 dòng
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
void hoanvi2dong(int a[][Max],int n1,int n2,int n)
{
      for(int j=0;j<n;j++)
        {
           hoanvi(a[n1][j],a[n2][j]);
        }
}
int main()
{
     int a[Max][Max];
   int n,n1,n2;
   cout<<"nhap so cot va dong cua ma tran vuong"<<endl;
   cin>>n;
   nhapmatranvuong(a,n);
   xuatmatranvuong(a,n);
   cout<<"nhap vao 2 dong can hoan doi"<<endl;
   cin>>n1;
   cin>>n2;
    hoanvi2dong(a,n1,n2,n);
    xuatmatranvuong(a,n);
  return 0;
}
