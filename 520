#include <iostream>
//rút gọn phân số
using namespace std;
struct phanso
{
    int tuso;
    int mauso;
};
struct rutgon
{
    int lon;
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
    cout<<ps.tuso<<"/"<<ps.mauso;
}
void rutgondathuc(phanso ps)
{
    rutgon c;
    if(ps.tuso >=ps.mauso)
    {
        c.lon=ps.tuso;
    }
    else
    {
        c.lon=ps.mauso;
    }
    for(int i=1;i<=c.lon;i++)
    {
        if(ps.tuso %i==0 && ps.mauso %i==0)
        {
            ps.tuso=ps.tuso /i;
            ps.mauso=ps.mauso /i;
            i=1;
        }
    }
    cout<<"sau khi rut gon ta duoc phan so : "<<ps.tuso<<"/"<<ps.mauso;
}
int main()
{
    phanso ps;
    nhapphanso(ps);
    xuatphanso(ps);
    rutgondathuc(ps);
    return 0;
}
