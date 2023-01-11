#include <iostream>
// Xuất ngày theo định dạng (ng/th/nm)
using namespace std;
struct ngay
{
    int ng,th,nm;
};
void nhapngay(ngay &a)
{
    do
    {
         cout<<"nhap vao ngay: "<<endl;
         cin>>a.ng;
         if(a.ng<1 || a.ng>31)
         {
             cout<<"vui long nhap lai !";
         }
    }while(a.ng<1 || a.ng>31);
}
void xuatngay(ngay a)
{
    cout<<a.ng;
};
int main()
{
   ngay a;
   nhapngay(a);
   xuatngay(a);
    return 0;
}
