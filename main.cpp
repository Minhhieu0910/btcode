#include <iostream>
//Khai báo kiểu dữ liệu biểu diễn tọa độ điểm trong không gian Oxyz
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
    cout<<"Toa do diem trong khong gian oxyz la: ("<<td.x<<";"<<td.y<<";"<<td.z<<")";
}
int main()
{
    toadodiem td;
    nhaptoado(td);
    xuattoado(td);
    return 0;
}
