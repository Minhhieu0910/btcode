#include <iostream>
//Kiểm tra hỗn số tối giản
using namespace std;
struct honso
{
    int nguyen,tu,mau;
};
struct toigian
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
void kiemtratoigian(honso hs)
{
    if(hs.tu>hs.mau)
    {
        hs.nguyen=hs.nguyen+(hs.tu/hs.mau);
        hs.tu=hs.tu-(hs.tu/hs.mau)*hs.mau;
        cout<<"hon so chua duoc toi gian"<<endl;
        cout<<"hon so sau khi duoc toi gian "<<hs.nguyen<<"("<<hs.tu<<"/"<<hs.mau<<")";
    }
    else
    {
         cout<<"hon so da toi gian"<<endl;
    }

}
int main()
{
    honso hs;
    nhaphonso(hs);
    xuathonso(hs);
    kiemtratoigian(hs);
    return 0;
}
