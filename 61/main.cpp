#include <iostream>
//Cho 2 số nguyên dương a và b. Hãy tìm ước chung lớn nhất của 2 số này.
using namespace std;

int main()
{
    int a,b,n=0,x=0;
    do
    {
         cout<<"nhap so nguyen duong a"<<endl;
         cin>>a;
        cout<<"nhap so nguyen duong b"<<endl;
         cin>>b;
         if(a<=0 || b<=0)
         {
             cout<<"nhap sai, vui long nhap lai !"<<endl;
         }
    }while(a<=0 || b<=0);
    if(a>=b)
    {
        n=a;
    }
    else{ n=b; }
    for(int i=1;i<=n;i++)
    {
        if(a%i==0 && b%i==0)
        {
            x=i;
        }
    }
   cout<<"uoc chung lon nhat cua 2 so "<<a<<" va so "<<b<<"la: "<<x;
    return 0;
}
