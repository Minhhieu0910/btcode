#include <iostream>
//Tính tích tất cả các “ước số” của số nguyên dương n
using namespace std;

int main()
{
    int n,t=1;
    cout<<"nhap so nguyen duong n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            t=i*t;
        }
    }
    cout<<"tich tat ca cac uoc so cua so nguyen duong n = "<<t;
    return 0;
}
