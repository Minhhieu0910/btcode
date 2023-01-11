#include <iostream>
#include <cmath>
//Xét vị trí tương đối giữa 2 hình cầu(không cắt nhau, tiếp xúc, cắt nhau)
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
int khoangcach(hinhcau a,hinhcau b)
{
    float c;
    c=sqrt(pow((a.I.x-b.I.x),2)+pow((a.I.y-b.I.y),2)+pow((a.I.z-b.I.z),2));
    return c;
}
void vitrituongdoi(hinhcau a,hinhcau b)
{
    float c;
    c=khoangcach(a,b);
    if(a.r+b.r < c || abs(a.r-b.r)>c || c==0)
    {
        cout<<"2 hinh cau khong cat nhau"<<endl;
    }
    else if(a.r+b.r == c || c==abs(a.r-b.r))
    {
        cout<<"2 hinh cau tiep xuc nhau "<<endl;
    }
    else if(a.r+b.r > c && abs(a.r-b.r)<c)
    {
        cout<<"2 hinh cau cat nhau"<<endl;
    }
}
int main()
{
    diem d;
    hinhcau hc1;
    nhaphinhcau(hc1);
    xuathinhcau(hc1);
    hinhcau hc2;
    nhaphinhcau(hc2);
    xuathinhcau(hc2);
    vitrituongdoi(hc1,hc2);
    return 0;
}
