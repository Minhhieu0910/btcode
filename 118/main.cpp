#include <iostream>
//Liệt kê tất cả các số chính phương nhỏ hơn n
#include <cmath>
using namespace std;
void chinhphuong(int n,float x)
{
    int b;
    for(int i=2;i<x;i++)
    {
     b = i*i;
     if(b<n)
     {
         cout<<b<<"\t";
     }
    }
}
int main()
{
    int n;
    float x;
    cout<<"nhap so n"<<endl;
    cin>>n;
    x=sqrt(n);
    if(n>3)
    {
    cout<<"cac so chinh phuong nho hon n la: ";
    }
    chinhphuong(n,x);

    return 0;
}
