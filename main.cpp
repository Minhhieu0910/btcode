#include <iostream>
//Tìm điểm đối xứng qua đường phân giác thứ 1 (y=x)
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
void doixung(toadodiem td)
{
    diemdoixung dx;
    dx.x=td.y;
    dx.y=td.x;
    cout<<"Toa do cua diem la: ("<<dx.x<<";"<<dx.y<<")"<<endl;
}
int main()
{
    toadodiem td;
    nhaptoadodiem(td);
    xuattoadodiem(td);
    doixung(td);
    return 0;
}
