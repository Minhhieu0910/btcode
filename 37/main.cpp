#include <iostream>
//Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000
using namespace std;

int main()
{
    int n,t=0,x=0,h;
   while(t<=10000)
   {
       h=t;
       x=x+1;
       t=h+x;
   }
    cout<<"so nguyen duong n nho nhat la: "<<x;
    return 0;
}
