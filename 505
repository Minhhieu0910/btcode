#include <iostream>
//Tính đạo hàm cấp k đơn thức
using namespace std;
struct donthuc
{
    float a;
    int n;
};
struct daoham
{
    donthuc y;
    int n;
    float b=1;
    float c;
};
void nhapdonthuc(donthuc &dt)
{
    cout<<"nhap vao co so cua don thuc:"<<endl;
    cin>>dt.a;
    cout<<"nhap vao so mu cua don thuc:"<<endl;
    cin>>dt.n;
}
void tinhdaoham(daoham &dh)
{
    int k;
    nhapdonthuc(dh.y);
    do
    {
       cout<<"nhap vao cap dao ham k:"<<endl;
       cin>>k;
       if(k<=0)
       {
           cout<<"nhap cap dao ham k bi sai, vui long nhap lai !"<<endl;
       }
    }while(k<=0);
    for(int i=1;i<=k;i++)
    {
        dh.b=(dh.b  * (dh.y.n--));
        dh.n=(dh.y.n);
        dh.c=dh.y.a * dh.b;
    }
    cout<<"ta co don thuc sau khi dao ham cap k bang: "<<dh.c<<".X^"<<dh.n;
}
int main()
{
    donthuc dt;
    daoham dh;
    tinhdaoham(dh);
    return 0;
}
