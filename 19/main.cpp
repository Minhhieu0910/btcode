#include <iostream>
//Tìm ước số lẻ lớn nhất của số nguyên dương n
using namespace std;

int main()
{
   int n,x=1,t,k,h,i;
   cout<<"nhap so nguyen duong n: "<<endl;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       if(n%i==0)
       {
           t=i;
        if(t%2!=0)
        {
          h=t;
        }
       }
       if (h>=x)
       {
           k=h;
       }
   }
   cout<<"uoc so le lon nhat cua so nguyen duong "<<n<<" la: "<<k;
    return 0;
}
