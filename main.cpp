#include <iostream>
//Tìm tọa độ điểm đối xứng qua mặt phẳng Oxz
using namespace std;
struct toadodiem
{
    float x,y,z;
};
struct toadodiemdoixung
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
void doixung(toadodiem td)
{
    toadodiemdoixung c;
    c.y=-1*td.y;
    cout<<"Toa do diem doi xung qua mat phang oxz la: ("<<td.x<<";"<<c.y<<";"<<td.z<<")"<<endl;
}
int main()
{
    toadodiem td;
    nhaptoado(td);
    xuattoado(td);
    doixung(td);
    return 0;
}
