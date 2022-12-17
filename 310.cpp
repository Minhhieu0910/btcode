#include <iostream>
//Đếm số lần xuất hiện của mảng a trong mảng b
using namespace std;
void nhapmang(int a[],int n)
{
   cout<<"nhap gia tri cua cac phan tu trong mang:"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<"a["<<i<<"]= "<<endl;
       cin>>a[i];
   }
}
int dem(int a[],int b[],int na,int nb)
{
    int start,flag, dem=0;
    for(int i=0;i<nb;i++)
    {
        if(a[0]==b[i] && nb-i>=na)
        {
            start =i;
            flag=1;
            for(int j=0;j<na;j++)
            {
                if(a[j]!=b[start++])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                dem++;
            }

        }
    }
    return dem;
}
int main()
{
  int a[100],b[100];
  int na,nb;
  cout<<"nhap na:"<<endl;
  cin>>na;
   nhapmang(a,na);
  cout<<"nhap nb:"<<endl;
  cin>>nb;
  nhapmang(b,nb);
  int h=dem(a,b,na,nb);
  cout<<h;

    return 0;
}
