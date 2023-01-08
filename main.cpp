#include <iostream>
#include <cmath>
//Tính khoảng cách giữa 2 điểm
using namespace std;
struct toadodiem
{
    float x,y;
};
void nhaptoadodiem(toadodiem &td)
{
    cout<<"nhap x: "<<endl;
    cin>>td.x;
    cout<<"nhap y: "<<endl;
    cin>>td.y;
}
void xuattoadodiem(toadodiem td)
{
    cout<<"Toa do cua diem la: ("<<td.x<<";"<<td.y<<")"<<endl;
}
void khoangcachgiua2diem(toadodiem a, toadodiem b)
{
    float c;
    c=sqrt(pow((b.x - a.x),2)+pow((b.y - a.y),2));
    cout<<"khoang cach giua 2 diem la: "<<c;
}
int main()
{
    toadodiem td1;
    nhaptoadodiem(td1);
    xuattoadodiem(td1);
    toadodiem td2;
    nhaptoadodiem(td2);
    xuattoadodiem(td2);
    khoangcachgiua2diem(td1,td2);
    return 0;
}
