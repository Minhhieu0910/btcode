#include <iostream>
//Tính hiệu 2 số phức
using namespace std;
struct sophuc
{
    float phanthuc,phanao;
};
struct tinhhieu
{
    float phanthuc,phanao;
};
void nhapsophuc(sophuc &sp)
{
    cout<<"nhap vao phan thuc: "<<endl;
    cin>>sp.phanthuc;
    cout<<"nhap vao phan ao: "<<endl;
    cin>>sp.phanao;
}
void xuatsophuc(sophuc sp)
{
    cout<<"Ta co so phuc: "<<sp.phanthuc<<" + ("<<sp.phanao<<")i"<<endl;
}
void hieu2sophuc(sophuc &sp1,sophuc &sp2,tinhhieu &c)
{
    c.phanthuc = sp1.phanthuc - sp2.phanthuc;
    c.phanao = sp1.phanao - sp2.phanao;
}
void xuattinhhieu(tinhhieu c)
{
    cout<<"Ta co ket qua hieu cua 2 so phuc: "<<c.phanthuc<<" + ("<<c.phanao<<")i";
}
int main()
{
    sophuc sp1;
    sophuc sp2;
    tinhhieu c;
    nhapsophuc(sp1);
    xuatsophuc(sp1);
    nhapsophuc(sp2);
    xuatsophuc(sp2);
    hieu2sophuc(sp1,sp2,c);
    xuattinhhieu(c);
    return 0;
}
