#include <iostream>
//Tính thứ của ngày bất kỳ trong năm(Dùng CT Zeller)
using namespace std;
struct ngay
{
    int ng;
};
struct thang
{
    int th;
};
struct nam
{
    int nm;
};
int kiemtranamnhuan(nam c)
{
    if(c.nm%4==0 && c.nm%100==0  ||(c.nm%400==0))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int ngaytrongthang(thang b,nam c)
{
    int songay;
    switch(b.th)
    {

         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        songay = 31;
        break;
        case 4: case 6: case 9 : case 11:
        songay = 30;
        break;
        case 2:
        int check = kiemtranamnhuan(c);
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
void nhapngaythangnam(ngay &a,thang &b,nam &c)
{
    do
    {
        cout<<"nhap vao nam: "<<endl;
        cin>>c.nm;
        if(c.nm<1 )
        {
            cout<<"vui long nhap lai nam !"<<endl;
        }
    }while (c.nm<1);

    do
    {
        cout<<"nhap vao thang: "<<endl;
        cin>>b.th;
        if(b.th<1 || b.th>12)
        {
            cout<<"vui long nhap lai thang !"<<endl;
        }
    }while(b.th<1 || b.th>12);

    do
    {
         cout<<"nhap vao ngay: "<<endl;
         cin>>a.ng;
         if(a.ng<1 || a.ng>ngaytrongthang(b,c))
         {
             cout<<"vui long nhap lai !";
         }
    }while(a.ng<1 || a.ng>ngaytrongthang(b,c));
}
void xuatngaythangnam(ngay a,thang b, nam c)
{
    cout<<a.ng<<"/"<<b.th<<"/"<<c.nm<<endl;
}
/*
Sử dụng công thức Zeller
    dayofweek = (d + y + y/4 - y/100 + y/400 + (31*m)/12) % 7
    với a = (14 - month) / 12
    y = year - a;
    m = month + 12*a - 2
*/
void timthu(ngay a,thang b,nam c)
{
    c.nm -= (14 - b.th) / 12;
    b.th += 12 * ((14 - b.th) / 12) - 2;

    int dayofweek = (a.ng + c.nm + c.nm / 4 - c.nm / 100 + c.nm / 400 + (31 * b.th)/12) % 7;
     dayofweek =dayofweek + 1;
    if(!dayofweek)
        cout<<"Chu nhat";
    else
        cout<<"Thu "<<dayofweek;
}
int main()
{
     ngay a;
    thang b;
    nam c;
    nhapngaythangnam(a,b,c);
    xuatngaythangnam(a,b,c);
    timthu(a,b,c);
    return 0;
}
