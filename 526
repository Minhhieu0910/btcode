#include <iostream>
//Qui đồng phân số
using namespace std;
struct phanso
{
    int tuso;
    int mauso;
};
struct quydong
{
    int tuso;
    int mauso;
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
void quydong2phanso(phanso a,phanso b)
{
    quydong c;
    int d;
    int h=1;
    if(a.mauso>=b.mauso)
    {
        d=a.mauso;
    }
    else{d=b.mauso;}
    for(int i=2;i<=d;i++)
    {
        if(a.mauso %i==0 && b.mauso%i==0)
        {
            h=h*i;
            a.mauso=a.mauso/i;
            b.mauso=b.mauso/i;
            i=1;
        }
    }
    c.mauso=a.mauso * b.mauso * h;
    c.tuso=a.mauso*b.tuso +b.mauso*a.tuso;
    cout<<c.tuso<<"/"<<c.mauso;

}
int main()
{
     phanso ps1;
   phanso ps2;
   nhapphanso(ps1);
   xuatphanso(ps1);
   nhapphanso(ps2);
   xuatphanso(ps2);
   quydong2phanso(ps1,ps2);
    return 0;
}
