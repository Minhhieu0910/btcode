#include <iostream>
//Xuất hình cầu theo định dạng ((x, y, z), r)
using namespace std;
struct diem
{
    float x,y,z;
};
struct hinhcau
{
    diem I;
    float r;
};
void nhapdiem(diem &d)
{
    cout<<"nhap x:"<<endl;
    cin>>d.x;
    cout<<"nhap y:"<<endl;
    cin>>d.y;
    cout<<"nhap z:"<<endl;
    cin>>d.z;
}
void nhaphinhcau(hinhcau &hc)
{
    nhapdiem(hc.I);
    cout<<"nhap vao ban kinh hinh cau:"<<endl;
    cin>>hc.r;
}
void xuathinhcau(hinhcau hc)
{
cout<<"Ta co toa do hinh cau: (("<<hc.I.x<<" ,"<<hc.I.y<<" ,"<<hc.I.z<<"),"<<hc.r<<")"<<endl;
}
int main()
{
    diem d;
    hinhcau hc;
    nhaphinhcau(hc);
    xuathinhcau(hc);

    return 0;
}
