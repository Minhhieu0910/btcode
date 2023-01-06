#include <iostream>
// Kiểm tra đường chéo chính có tăng dần hay ko
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
void kiemtratangdan(int a[][Max],int n)
{
    int flag =1;
    for(int i=1;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i][i]>=a[j][j])
         {
            flag =0;
            break;
         }
        }

    }
    if(flag==1)
    {
        cout<<"duong cheo chinh cua ma tran tang dan";
    }
    else
    {
        cout<<"duong cheo chinh cua ma tran khong tang dan";
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
   kiemtratangdan(a,n);
    return 0;
}
