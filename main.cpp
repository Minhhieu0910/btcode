#include <iostream>
/* Bài 618: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một lớp học (LOPHOC). Biết rằng một lớp học gồm những thành phần sau:

Tên lớp: chuỗi tối đa 30 ký tự
Sĩ số: kiểu số nguyên 2 byte
Danh sách các học sinh trong lớp ( tối đa 50 học sinh)
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này */
using namespace std;
struct hocsinh
{
    char hoten[30];
};
struct lophoc
{
    char tenlop[30];
    int siso;
    hocsinh danhsach[50];
};
void nhaphocsinh(hocsinh &hs)
{
     for(int i=0;i<lh.siso;i++)
     {
         cout<<"nhap vao ho va ten hoc sinh: "<<endl;
         fflush(stdin);
         gets(hs.hoten);
     }

}
void nhapthongtin(lophoc &lh)
{
    fflush(stdin);
    cout<<"nhap vao ten lop: "<<endl;
    gets(lh.tenlop);
    cout<<"nhap vao si so cua lop: "<<endl;
    fflush(stdin);
    cin>>lh.siso
    nhaphocsinh(lh.danhsach[i]);

}
int main()
{
    lophoc lh;
    nhapthongtin(lh);
    return 0;
}
