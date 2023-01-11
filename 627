#include <iostream>
/* Bài 612: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một cầu thủ. Biết rằng một cầu thủ gồm những thành phần sau:

Mã cầu thủ: chuỗi tối đa 10 ký tự
Tên cầu thủ: chuỗi tối đa 30 ký tự
Ngày sinh: kiểu dữ liệu ngày
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này */

using namespace std;
struct ngay
{
    int ng,th,nm;
};
struct thongtincauthu
{
    char macauthu[10];
    char tencauthu[30];
};
int kiemtranamnhuan(ngay a)
{
    if(a.nm%4==0 && a.nm%100==0  ||(a.nm%400==0))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int ngaytrongthang(ngay a)
{
    int songay;
    switch(a.th)
    {

         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        songay = 31;
        break;
        case 4: case 6: case 9 : case 11:
        songay = 30;
        break;
        case 2:
        int check = kiemtranamnhuan(a);
        if(check == 1)
        {
           songay = 29;
        }
        else
        {
            songay = 28;
        }

    }
    return songay;
}
void nhapngaythangnam(ngay &a)
{
    do
    {
        cout<<"nhap vao nam: "<<endl;
        cin>>a.nm;
        if(a.nm<1 )
        {
            cout<<"vui long nhap lai nam !"<<endl;
        }
    }while (a.nm<1);

    do
    {
         cout<<"nhap vao ngay: "<<endl;
         cin>>a.ng;
         if(a.ng<1 || a.ng>ngaytrongthang(a))
         {
             cout<<"vui long nhap lai !";
         }
    }while(a.ng<1 || a.ng>ngaytrongthang(a));

    do
    {
        cout<<"nhap vao thang: "<<endl;
        cin>>a.th;
        if(a.th<1 || a.th>12)
        {
            cout<<"vui long nhap lai thang !"<<endl;
        }
    }while(a.th<1 || a.th>12);

}
void nhapthongtin(thongtincauthu &ct)
{
    cout<<"nhap vao ma cau thu: "<<endl;
    cin>>ct.macauthu;
    cout<<"nhap vao ten cau thu: "<<endl;
    cin>>ct.tencauthu;
}
void xuatthongtin(thongtincauthu ct, ngay a)
{
    cout<<"ma cau thu: "<<ct.macauthu<<endl;
    cout<<"ten cau thu: "<<ct.tencauthu<<endl;
    cout<<"ngay sinh: "<<a.ng<<"/"<<a.th<<"/"<<a.nm<<endl;
}
int main()
{
    ngay a;
    thongtincauthu ct;
    nhapngaythangnam(a);
    nhapthongtin(ct);
    xuatthongtin(ct,a);
    return 0;
}
