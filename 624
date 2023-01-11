#include <iostream>
/* Bài 609: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của 1 vé xem phim (VE). Biết rằng 1 vé xem phim gồm những thành phần sau:

Tên phim: Chuỗi tối đa 20 ký tự
Giá tiền: kiểu số nguyên 4 byte
Xuất chiếu: kiểu thời gian (THOIGIAN)
Ngày xem: kiểu dữ liệu ngày (NGAY)
Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này */

using namespace std;
struct ngay
{
    int ng,th,nm;
};
struct xuatchieu
{
    int gio,phut,giay;
};
struct vexemphim
{
    char tenphim[20];
    int giatien;
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
void nhapthoigian(xuatchieu &b)
{
    do
    {
        cout<<"nhap vao gio: "<<endl;
        cin>>b.gio;
        if(b.gio<1 || b.gio>24)
        {
            cout<<" vui long nhap lai gio !"<<endl;
        }
    }while(b.gio<1 || b.gio>24);

    do
    {
        cout<<"nhap vao phut: "<<endl;
        cin>>b.phut;
        if(b.phut<1 || b.phut>60)
        {
            cout<<" vui long nhap lai phut !"<<endl;
        }
        if(b.phut==60)
        {
            b.phut=00;
            b.gio++;
        }
    }while(b.phut<0 || b.phut>60);

    do
    {
        cout<<"nhap vao giay: "<<endl;
        cin>>b.giay;
        if(b.giay<1 || b.giay>60)
        {
            cout<<" vui long nhap lai giay !"<<endl;
        }
        if(b.giay==60)
        {
            b.giay=00;
            b.phut++;
        }
    }while(b.giay<0 || b.giay>60);
}
void nhapthongtin(vexemphim &v)
{
    cout<<"nhap vao ten phim: "<<endl;
    cin>>v.tenphim;
    cout<<"nhap vao gia tien ve xem phim: "<<endl;
    cin>>v.giatien;
}
void xuatthongtin(ngay a, xuatchieu b, vexemphim v)
{
    cout<<"Phim: "<<v.tenphim<<endl;
    cout<<"gia tien: "<<v.giatien<<"VND"<<endl;
    cout<<"xuat chieu: "<<b.gio<<":"<<b.phut<<":"<<b.giay<<endl;
    cout<<"thoi gian: "<<a.ng<<"/"<<a.th<<"/"<<a.nm<<endl;
}
int main()
{
   vexemphim v;
   xuatchieu b;
   ngay a;
   nhapngaythangnam(a);
   nhapthoigian(b);
   nhapthongtin(v);
   xuatthongtin(a,b,v);
    return 0;
}
