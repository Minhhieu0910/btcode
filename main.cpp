#include <iostream>
//Xuất hỗn số
using namespace std;
struct honso
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
    cout<<"ta co hon so: "<<hs.nguyen<<"("<<hs.tu<<"/"<<hs.mau<<")";
}
int main()
{
    honso hs;
    nhaphonso(hs);
    xuathonso(hs);
    return 0;
}
