#include <iostream>
//Tính hiệu 2 hỗn số
using namespace std;
struct honso
{
    int nguyen,tu,mau;
};
struct tinhhieu
{
    int nguyen,tu,mau;
};
void nhaphonso(honso &hs)
{
    cout<<"nhap vao so nguyen cua hon so: "<<endl;
    cin>>hs.nguyen;
    cout<<"nhap vao tu so cua phan so trong hon so: "<<endl;
    cin>>hs.tu;
    cout<<"nhap vao mau so cua phan so trong hon so: "<<endl;
    cin>>hs.mau;
}
void xuathonso(honso hs)
{
    cout<<"ta co hon so: "<<hs.nguyen<<"("<<hs.tu<<"/"<<hs.mau<<")"<<endl;
}
void tinhhieu2honso(honso a,honso b)
{
    tinhhieu c;
    int x,y;
    x=a.tu+a.nguyen*a.mau;
    y=b.tu+(b.nguyen*b.mau);
    c.tu=x*b.mau-y*a.mau;
    c.mau=a.mau*b.mau;
    if(abs(c.tu)>c.mau)
    {
        c.nguyen=c.tu/c.mau;
        c.tu=abs(c.tu)%c.mau;
    }
    cout<<"hieu cua 2 hon so bang: "<<c.nguyen<<"("<<c.tu<<"/"<<c.mau<<")";
}
int main()
{
    honso hs1;
    honso hs2;
    nhaphonso(hs1);
    xuathonso(hs1);
    nhaphonso(hs2);
    xuathonso(hs2);
    tinhhieu2honso(hs1,hs2);
    return 0;
}
