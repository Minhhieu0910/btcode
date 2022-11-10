#include <iostream>
//Viết chương trình nhập 1 số nguyên có 3 chữ số.  Hãy in ra cách đọc của số nguyên này
using namespace std;

int main()
{
    int n,m;
    do
    {
      cout<<"nhap vao so nguyen  co 3 chu so"<<endl;
    cin>>n;
    if(n<100 || n>999)
    {
        cout<<"day khong phai la so co 3 chu so, vui long nhap lai!"<<endl;
    }
    }while(n<100 || n>999);

    if(n/100==1)
    {
        cout<<"mot tram ";
    }
    if(n/100==2)
    {
        cout<<"hai tram ";
    }
    if(n/100==3)
    {
        cout<<"ba tram ";
    }
    if(n/100==4)
    {
        cout<<"bon tram ";
    }
    if(n/100==5)
    {
        cout<<"nam tram ";
    }
    if(n/100==6)
    {
        cout<<"sau tram ";
    }
    if(n/100==7)
    {
        cout<<"bay tram ";
    }
    if(n/100==8)
    {
        cout<<"tam tram ";
    }
    if(n/100==9)
    {
        cout<<"chin tram ";
    }
    m=n/10;
    if(m%10==1)
    {
        cout<<" muoi ";
    }
    if(m%10==2)
    {
        cout<<" hai muoi ";
    }
    if(m%10==3)
    {
        cout<<"  ba muoi ";
    }
    if(m%10==4)
    {
        cout<<" bon muoi ";
    }
    if(m%10==5)
    {
        cout<<" nam muoi ";
    }
    if(m%10==6)
    {
        cout<<" sau muoi ";
    }
    if(m%10==7)
    {
        cout<<" bay muoi ";
    }
    if(m%10==8)
    {
        cout<<" tam muoi ";
    }
    if(m%10==9)
    {
        cout<<" chin muoi ";
    }


    if(n%10==1)
    {
        cout<<" mot ";
    }
    if(n%10==2)
    {
        cout<<" hai ";
    }
    if(n%10==3)
    {
        cout<<" ba ";
    }
    if(n%10==4)
    {
        cout<<" bon ";
    }
    if(n%10==5)
    {
        cout<<" nam ";
    }
    if(n%10==6)
    {
        cout<<" sau ";
    }
    if(n%10==7)
    {
        cout<<" bay ";
    }
    if(n%10==8)
    {
        cout<<" tam ";
    }
    if(n%10==9)
    {
        cout<<" chin ";
    }

    return 0;
}
