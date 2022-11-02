#include <iostream>
//Đếm chữ số nhỏ nhất của số nguyên dương n
using namespace std;

int main()
{
    int n,i,m=9,dem=0 ;
    do
    {
        cout<<"nhap va
        o so nguyen duong n "<<endl;
        cin>>n;
        if(n<=0)
        {
            cout<<"n la so nguyen duong, xin vui long nhap lai !"<<endl;
        }
    }while(n<=0);
    do
    {
        i = n%10;
        if(i<m)
        {
            m = i;
        }
        n = n/10;
    }while(n>=0);
     do
    {
        i = n%10;
        if(i=m)
        {
            dem++;
        }
        n = n/10;
    }while(n>=0);

     cout<<"so nho nhat cua so nguyen duong n la: "<<m;
    cout<<"so chu so nho nhat cua so nguyen duong n la: "<<dem;

    return 0;
}
