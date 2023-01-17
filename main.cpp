#include <iostream>
#include <cstdio>
/* Bài 620: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một đại lý (DAILY). Biết rằng một đại lý gồm những thành phần sau:
– Mã đại lý: chuỗi tối đa 5 ký tự
– Tên đại lý: chuỗi tối đa 30 ký tự
– Điện thoại: kiểu số nguyên 4 byte
– Ngày tiếp nhận: kiểu dữ liệu ngày
– Địa chỉ: chuỗi tối đa 50 ký tự
– E-Mail: chuỗi tối đa 50 ký tự

Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này */
using namespace std;
struct ngaytiepnhan
{
    int ng,th,nm;
};
struct daily
{
    char madaily[5];
    char tendaily[30];
    int dienthoai;
    char diachi[50];
    char email[50];
};
void nhapthongtin(daily &dl, ngaytiepnhan &tn)
{
    cout<<"Nhap vao ma dai ly: "<<endl;
    gets(dl.madaily);
    cout<<"Nhap vao ten dai ly: "<<endl;
    fflush(stdin);
    gets(dl.tendaily);
    cout<<"Nhap vao dien thoai: "<<endl;
    fflush(stdin);
    cin>>dl.dienthoai;
    cout<<"nhap vao ngay tiep nhan: "<<endl;
    cin>>tn.ng;
    cout<<"nhap vao thang tiep nhan: "<<endl;
    cin>>tn.th;
    cout<<"nhap vao nam tiep nhan: "<<endl;
    cin>>tn.nm;
    cout<<"Nhap vao dia chi: "<<endl;
    fflush(stdin);
    gets(dl.diachi);
    cout<<"Nhap vao email: "<<endl;
    fflush(stdin);
    gets(dl.email);
}
void xuatthongtin(daily dl,ngaytiepnhan tn)
{
    cout<<"Ma dai ly: "<<dl.madaily<<endl;
    cout<<"Ten dai ly: "<<dl.tendaily<<endl;
    cout<<"Dien thoai: "<<dl.dienthoai<<endl;
    cout<<"Ngay tiep nhan: "<<tn.ng<<"/"<<tn.th<<"/"<<tn.nm<<endl;
    cout<<"Dia chi: "<<dl.diachi<<endl;
    cout<<"E-Mail: "<<dl.email<<endl;
}
int main()
{

    daily dl;
    ngaytiepnhan tn;
    nhapthongtin(dl,tn);
    cout<<"THONG TIN CUA DAI LY: "<<endl;
    xuatthongtin(dl,tn);
    return 0;
}
