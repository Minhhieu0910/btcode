#include <iostream>
//Tính S(x, n) = x – x^3 + x^5 + … + (-1)^n * x^2n+1
using namespace std;

int main()
{
    int x,n=0,h,t=0,m;
    do
    {
        cout<<"nhap so mu lon m= "<<endl;
           cin>>m;
    if(m%2==0)
    {
        cout<<"so mu m phai la SO LE, vui long nhap lai!"<<endl;
    }
    }while(m%2==0);
    cout<<"nhap co so x="<<endl;
    cin>>x;
    int s=x;
   for(int i=0;i<=m;i=i+2)
    {
        if(n%2==0)
        {
            s=s+t;
        }
        else
        {
            s=s-t;
        }
            t=x*x;
        for(int k=0;k<=i;k++)
        {
            h=t*x;
            t=h;
        }
        n++;
    }
    cout<<"S(x,n)= "<<s;

    return 0;
}
