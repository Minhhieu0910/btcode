#include <iostream>
#include <cstdio>
// Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong mặt phẳng Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
using namespace std;
struct diem
{
    float x;
    float y;
};
void nhapdiem(diem &d)
{
    float temp;
    cout<<"nhap x:"<<endl;
    cin>>temp;
    d.x=temp;

    cout<<"nhap y:"<<endl;
    cin>>temp;
    d.y=temp;
}
void xuatdiem(diem d)
{
    cout<<d.x<<"  "<<d.y;
}
int main()
{
    diem d;
    nhapdiem(d);
    xuatdiem(d);
    return 0;
}
