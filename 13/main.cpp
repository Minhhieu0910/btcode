#include <iostream>
//Tính S(n) = x^2 + x^4 + … + x^2n

using namespace std;

int main()
{
    int n,h=1;
    float x,t=1,r=1,a=0;
    cout<<"nhap co so x: "<<endl;
    cin>>x;
    cout<<"nhap so mu n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       while(h<=2)
       {
           r=x*r;
           h++;
       }
       t=t*r;
       a=a+t;
    }
    cout<<"S(n) = "<<a;
    return 0;
}
