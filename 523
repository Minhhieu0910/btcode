#include <iostream>
//Tính tích 2 phân số
using namespace std;
struct phanso
{
    int tuso;
    int mauso;
};
struct tinhtich
{
    int tuso;
    int mauso;
    float rutgon;
};
void nhapphanso(phanso &ps)
{
    cout<<"nhap vao gia tri tu cua phan so: "<<endl;
    cin>>ps.tuso;
    cout<<"nhap vao gia tri mau cua phan so :"<<endl;
    cin>>ps.mauso;
}
void xuatphanso(phanso ps)
{
    cout<<ps.tuso<<"/"<<ps.mauso<<endl;
}
void tinhtich2phanso(phanso a,phanso b)
{
    tinhtich c;
    c.tuso=a.tuso * b.tuso;
    c.mauso=a.mauso * b.mauso;
    cout<<"tich cua 2 phan so bang: "<<c.tuso<<"/"<<c.mauso;
}
int main()
{
   phanso ps1;
   phanso ps2;
   nhapphanso(ps1);
   xuatphanso(ps1);
   nhapphanso(ps2);
   xuatphanso(ps2);
   tinhtich2phanso(ps1,ps2);

    return 0;
}
