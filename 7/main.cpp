#include <iostream>
//Tính S(n) = 1/2 + 2/3 + 3/4 + …. + n / (n + 1) bằng C / C++
using namespace std;

int main()
{
   int n;
   float s=0;
   do
   {
       cout<<"nhap n ="<<endl;
       cin>>n;
       if(n<1)
       {
           cout<<"n phai lon hon hoac bang 1"<<endl;
       }
   }while(n<1);
   for(int i=1;i<=n;i++)
   {
       s= s + (float)i/(i+1);
   }
   cout<<"S(n) ="<<s;
    return 0;
}
