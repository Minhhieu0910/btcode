#include <iostream>
//Tìm chữ số lớn nhất của số nguyên dương n
using namespace std;

int main()
{
     int n,h=0,t,x;
    int dem=0;
    cout<<"nhap so nguyen duong n "<<endl;
    cin>>n;
    while(n>0)
    {
        x=
        n%10;
        if(x>=h)
        {
            t=x;
        }
        h=t;
    }
    cout<<"chu so lon nhat cua so nguyen duong n la: "<<t;

    return 0;
}
