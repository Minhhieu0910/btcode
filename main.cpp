#include <iostream>
//Tìm tọa độ điểm đối xứng qua gốc tọa độ
using namespace std;
struct toadodiem
{
    float x,y;
};
struct diemdoixung
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
void toadodoixung(toadodiem td)
{
    diemdoixung c;
    c.x=td.x *-1;
    c.y=td.y *-1;
    cout<<"Toa do cua diem doi xung qua goc toa do la: ("<<c.x<<";"<<c.y<<")"<<endl;
}
int main()
{
    toadodiem td;
    nhaptoadodiem(td);
    xuattoadodiem(td);
    toadodoixung(td);
    return 0;
}
