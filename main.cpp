#include <iostream>
//Tính tích 2 đơn thức
using namespace std;
struct donthuc
{
    float a;
    int n;
};
struct tich2donthuc
{
    donthuc dt1;
    donthuc dt2;
    float b;
    int n;
};
void nhapdonthuc(donthuc &dt)
{
        cout<<"nhap vao co so cua don thuc 1"<<endl;
        cin>>dt.a;
        cout<<"nhap vao so mu cua don thuc 2"<<endl;
        cin>>dt.n;
        cout<<dt.a<<".X^"<<dt.n<<endl ;
}
void tinhtich(tich2donthuc &t)
{
    nhapdonthuc(t.dt1);
    nhapdonthuc(t.dt2);
    t.b=t.dt1.a * t.dt2.a;
    t.n=t.dt1.n + t.dt2.n;

}
void xuattinhtich(tich2donthuc t)
{
    cout<<"tinh 2 don thuc bang: "<<t.b<<".X^"<<t.n;
}
int main()
{
    donthuc dt1;
    donthuc dt2;
    tich2donthuc t;
    tinhtich(t);
    xuattinhtich(t);
    return 0;
}
