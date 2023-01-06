#include <iostream>
//Hãy khai báo kiểu dữ liệu biểu diễn khái niệm đường tròn trong mặt phẳng Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
 using namespace std;
struct diem
{
    float x,y;
};
struct duongtron
{
    diem I;
    float R;
};
void nhapdiem(diem &i)
{
    float temp;
    cout<<"nhap x:"<<endl;
    cin>>temp;
    i.x=temp;
    cout<<"nhap y;"<<endl;
    cin>>temp;
    i.y=temp;
}
void nhapduongtron(duongtron &dt)
{
    nhapdiem(dt.I);
    cout<<"nhap ban kinh:"<<endl;
    cin>>dt.R;
}
void xuatduongtron(duongtron dt)
{
    cout<<"ta co duong tron tam I("<<dt.I.x<<";"<<dt.I.y<<") ban kinh R= "<<dt.R;
}
int main()
{
    diem i;
    duongtron dt;
    nhapduongtron(dt);
    xuatduongtron(dt);
    return 0;
}

