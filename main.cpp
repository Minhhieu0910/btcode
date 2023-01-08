#include <iostream>
//So sánh 2 phân số: hàm trả về 1 trong 3 giá trị: 0,-1,1
using namespace std;
struct phanso
{
    float tuso;
    float mauso;
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
int sosanh2phanso(phanso a,phanso b)
{
    float c,d;
    c=a.tuso / a.mauso;
    d=b.tuso / b.mauso;
    if(c>d)
    {
        return 1;
    }
    else if(c==d)
    {
        return 0;
    }
    else if(c<d)
    {
        return -1;
    }
}
int main()
{
    phanso ps1;
   phanso ps2;
   nhapphanso(ps1);
   xuatphanso(ps1);
   nhapphanso(ps2);
   xuatphanso(ps2);
   float sosanh=sosanh2phanso(ps1,ps2);
  if(sosanh==1)
   {
       cout<<"gia tri phan so 1 lon hon phan so 2";
   }
   else if(sosanh==0)
   {
       cout<<"gia tri hai phan so bang nhau";
   }
   else if(sosanh==-1)
   {
       cout<<"gia tri phan so 2 lon hon phan so 1";
   }
    return 0;
}
