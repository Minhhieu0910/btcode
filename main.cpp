#include <iostream>
//Tính khoảng cách giữa 2 điểm trong không gian theo phương z
using namespace std;
struct toadodiem
{
    float x,y,z;
};
void nhaptoado(toadodiem &td)
{
    cout<<"nhap x: "<<endl;
    cin>>td.x;
    cout<<"nhap y: "<<endl;
    cin>>td.y;
    cout<<"nhap z: "<<endl;
    cin>>td.z;
}
void xuattoado(toadodiem td)
{
    cout<<"Toa do diem trong khong gian oxyz la: ("<<td.x<<";"<<td.y<<";"<<td.z<<")"<<endl;
}
void khoangcach(toadodiem a,toadodiem b)
{
    float d;
    d=abs(b.z - a.z);
    cout<<"khoang cach giua 2 diem bang: "<<d;
}
int main()
{
   toadodiem td1;
    nhaptoado(td1);
    xuattoado(td1);
    toadodiem td2;
    nhaptoado(td2);
    xuattoado(td2);
    khoangcach(td1,td2);
    return 0;
}
