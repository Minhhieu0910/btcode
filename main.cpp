#include <iostream>
//Kiểm tra điểm thuộc phần tư thứ 2 ko?
using namespace std;
struct toadodiem
{
    float x,y;
};
struct phantuthu2
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
void kiemtra(toadodiem td)
{
    if(td.x<0 && td.y>0)
    {
        cout<<"toa do diem thuoc phan tu thu 2";
    }
    else
    {
        cout<<"toa do diem khong thuoc phan tu thu 2";
    }
}
int main()
{
    toadodiem td;
    nhaptoadodiem(td);
    xuattoadodiem(td);
    kiemtra(td);
    return 0;
}
