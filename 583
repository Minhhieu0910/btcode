#include <iostream>
//Nhập đường tròn
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
    cout<<"Ta co duong tron tam I("<<dt.i.x<<";"<<dt.i.y<<") va ban kinh r="<<dt.i.r;
}
int main()
{
    toadotam td;
    duongtron dt;
    xuatduongtron(dt);
    return 0;
}
