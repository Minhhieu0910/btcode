#include <iostream>
//Tính S(n) = 1/2 + 1/4 + … + 1/2n
using namespace std;

int main()
{
    int n,i;
    float s=0;
    do
    {
        cout<<"Nhap n = "<<endl;
       cin>>n;
       if(n<1)
       {
           cout<<"n phai lon hon hoac bang 1"<<endl;
       }
    }
    while(n<1);
    for(int i=1;i<=n;i++)
    {
        s=s+ (1.0 /(2*i));
    }
    cout<<"S(n) ="<<s;
    return 0;
}
