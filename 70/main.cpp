#include <iostream>
//Tính S(x, n) = -x + x^2/(1 + 2) – x^3/(1 + 2 + 3) + … + (-1)^n * x^n/(1 + 2 +… + n)
using namespace std;

int main()
{
  int n,x,u=1,h;
  float t,d=1;
  cout<<"nhap n= "<<endl;
  cin>>n;
  cout<<"nhap x= "<<endl;
  cin>>x;
  float s=-x;
for(int i=1;i<=n;i=i+1)
    {
        float k=(t/(d));
        u=u+1;
        d=d+u;
        if(i%2==0)
        {
            s=s+k;
        }
        else
        {
            s=s-k;
        }
            t=x;
        for(int k=1;k<=i;k++)
        {
            h=t*x;
            t=h;

    }
        }
        cout<<"S(x,n)= "<<s;

    return 0;
}
