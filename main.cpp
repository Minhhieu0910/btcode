#include <iostream>
#include <cmath>
//Tính diện tích đường tròn
using namespace std;
struct toadotam
{
    float x,y,r;
};
struct duongtron
{
    toadotam i;
    float r;
};
void nhapdiem(toadotam &td)
{
    cout<<"nhap x: "<<endl;
    cin>>td.x;
    cout<<"nhap y; "<<endl;
    cin>>td.y;
    cout<<"nhap vao ban kinh duong tron: "<<endl;
    cin>>td.r;
}
void xuatduongtron(duongtron &dt)
{
    nhapdiem(dt.i);
    cout<<"Ta co duong tron tam I("<<dt.i.x<<";"<<dt.i.y<<") va ban kinh r="<<dt.i.r<<endl;
}
void tinhdientich(duongtron dt)
{
    float s=0;
    s=2*M_PI*pow(dt.i.r,2);
    cout<<"dien tich duong tron bang: "<<s;
}
int main()
{
    duongtron dt;
    xuatduongtron (dt);
    tinhdientich(dt);
    return 0;
}
