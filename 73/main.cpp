#include <iostream>
//Tính S(x, n) = -1 + x^2/2! – x^4/4! + … + (-1)^n+1 * x^2n/(2n)!
using namespace std;

int main()
{
    int n,k=1;
    float x,t;
    do
    {
       cout<<"nhap n ="<<endl;
       cin>>n;
       if(n<0)
       {
           cout<<"nhap lon hon hoac bang 0"<<endl;
       }
    }while(n<0);
    cout<<"nhap x ="<<endl;
    cin>>x;
    t=x*x;
    for(int i=0;i<=n;i++)
    {
        s=s+h;
        k=k*t;

    }

    return 0;
}
