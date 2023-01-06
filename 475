#include <iostream>
//Kiểm tra ma trận có phải là ma phương ko? Ma phương là khi tổng ptử trên các dòng, cột và 2 chéo chính phụ bằng nhau
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
int maphuong(int a[][Max],int n)
{
    int s1=0,s2=0,s3=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            s1=s1+a[i][j];
        }

    }
    for(int i=0;i<n;i++)
    {
            s2=s2+a[i][i];
            s3=s3+a[i][n-1-i];
    }
    if(s2!=s3)
    {
        return 0;
    }
    if(s1!=s2)
    {
        return 0;
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
   if(maphuong(a,n))
   {
       cout<<"ma tran la 1 ma phuong";
   }
   else
   {
       cout<<"ma tran khong phai la 1 ma phuong";
   }

    return 0;
}
