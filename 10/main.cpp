#include <iostream>
//Tính T(x, n) = x^n
using namespace std;

int main()
{
    float x;
    float r=1;
    float t=1;
    int i=1,n;
    cout<<"nhap vao co so x"<<endl;
    cin>>x;
    cout<<"nhap vao so mu n ="<<endl;
    cin>>n;

       if(n<0)
       {
           for(n;n<0;n++)
           {
               r= x*r;
               t=(1 /r);
           }
       }

       else if (n>0)
       {
           while(i<=n)
           {
            t=x*t;
              i++;
           }
       }
       else
         {
           t=1;
         }

   cout<<"T(x,n) = "<<t;
    return 0;
}
