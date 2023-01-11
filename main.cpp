#include <iostream>
#include <stdio.h>
#include <conio.h>
/* Bài 615: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một thí sinh (THISINH). Biết rằng một thí sinh gồm những thành phần sau:

Mã thí sinh: chuỗi tối đa 5 ký tự
Họ tên thí sinh: chuỗi tối đa 30 ký tự
Điểm toán: kiểu số thực
Điểm lý: kiểu số thực
Điểm hóa: kiểu số thực
Điểm tổng cộng: kiểu số thực
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này */

using namespace std;
struct thisinh
{
    char mathisinh[5];
    char hotenthisinh[30];
    float diemtoan,diemly,diemhoa,diemtongcong;
};
void nhapthongtin(thisinh &a)
{
    fflush(stdin);
    cout<<"nhap ma thi sinh: "<<endl;
    gets(a.mathisinh);
    fflush(stdin);
    cout<<"nhap ho ten thi sinh: "<<endl;
    gets(a.hotenthisinh);
    do
    {
        cout<<"nhap vao diem toan: "<<endl;
        cin>>a.diemtoan;
        if(a.diemtoan<0 || a.diemtoan>10)
        {
            cout<<"vui long nhap diem lai!"<<endl;
        }
    }while (a.diemtoan<0 || a.diemtoan>10);
    do
    {
        cout<<"nhap vao diem ly: "<<endl;
        cin>>a.diemly;
        if(a.diemly<0 || a.diemly>10)
        {
            cout<<"vui long nhap diem lai!"<<endl;
        }
    }while(a.diemly<0 || a.diemly>10);
    do
    {
        cout<<"nhap vao diem hoa: "<<endl;
        cin>>a.diemhoa;
        if(a.diemhoa<0 || a.diemhoa>10)
        {
            cout<<"vui long nhap diem lai!"<<endl;
        }
    }while(a.diemhoa<0 || a.diemhoa>10);

        a.diemtongcong=(a.diemtoan + a.diemhoa + a.diemly)/3;
}
void xuatthongtin(thisinh a)
{
    cout<<"Ma thi sinh: "<<a.mathisinh<<endl;
    cout<<"Ho va ten thi sinh: "<<a.hotenthisinh<<endl;
    cout<<"Diem toan: "<<a.diemtoan<<endl;
    cout<<"Diem ly: "<<a.diemly<<endl;
    cout<<"Diem hoa: "<<a.diemhoa<<endl;
    cout<<"Diem Tong Cong: "<<a.diemtongcong<<endl;
}
int main()
{

   thisinh a;
   nhapthongtin(a);
   xuatthongtin(a);
   getch();
    return 0;
}
