#include <iostream>
//Viết chương trình nhập tọa độ 3 đỉnh của 1 tam giác trong mặt phẳng Oxy.
// Tính diện tích, chu vi và tọa độ trọng tâm của tam giác và xuất ra kết quả
using namespace std;
struct diem
{
    float x[3];
    float y[3];
};
void nhaptoado(diem &d)
{
    for(int i=1;i<4;i++)
    {
        cout<<"nhap toa do X dinh "<<i<<" cua tam giac la: ";
        cin>>d.x[i];
        cout<<"nhap toa do Y dinh "<<i<<" cua tam giac la: ";
        cin>>d.y[i];
        cout<<endl;
    }
}
void xuattoado(diem d)
{
    for(int i=1;i<4;i++)
    {
        cout<<"("<<d.x[i]<<";"<<d.y[i]<<")";
    }
}
int main()
{
    diem d;
    nhaptoado(d);
    xuattoado(d);
    return 0;
}
