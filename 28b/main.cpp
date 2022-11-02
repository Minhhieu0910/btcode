#include <iostream>
//Đếm chữ số nhỏ nhất của số nguyên dương n
using namespace std;

int main()
{
    int n,i,t,x,dem1=0,dem2=0,dem ;
    do
    {
        cout<<"nhap vao so nguyen duong n "<<endl;
        cin>>n;
        if(n<=0)
        {
            cout<<"n la so nguyen duong, xin vui long nhap lai !"<<endl;
        }
    }while(n<=0);
    i = n%10;
    while(n>0)
    {
        t = n % 10;
        if(t=i)
        {
            i=t;
            dem1++;
        }
        if(t<i)
        {
            i=t;

            if(x<i)
            {
                dem2=0;

            }

        }
         x=i;
        n = n/10;
    }

     cout<<"so nho nhat cua so nguyen duong n la: "<<i;
    cout<<"so chu so nho nhat cua so nguyen duong n la: "<<dem;

    return 0;
}
