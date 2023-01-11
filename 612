#include <iostream>
//Tính số thứ tự ngày kể từ ngày 1/1/1
using namespace std;
int minyear=1900,maxyear=10000;
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
struct tinh
{
    int ng;
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
        if(c.nm<minyear || c.nm >maxyear)
        {
            cout<<"vui long nhap lai nam !"<<endl;
        }
    }while (c.nm<minyear || c.nm >maxyear);

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
void tinhsothutungay(ngay a,thang b, nam c)
{
    tinh t;
    int x=t.ng;
    t.ng=0;
    for(int i=1;i<c.nm;i++)
    {
        if(kiemtranamnhuan(c)==1)
        {
            t.ng=t.ng +366;
        }
        else
        {
            t.ng=t.ng + 365;
        }
    }
    for(int i=1;i<b.th;i++)
    {
       switch(i)
       {
           case 4: case 6: case 9 : case 11:
           t.ng += 30;
           break;
           case 2:
        int check = kiemtranamnhuan(c);
        if(check == 1)
        {
           t.ng+= 29;
        }
        else
        {
            t.ng += 28;
        }
        break;
       }
    }
    t.ng=t.ng + x;
    cout<<"so thu tu ngay bang: "<<t.ng;
}
int main()
{
    ngay a;
    thang b;
    nam c;
    nhapngaythangnam(a,b,c);
    xuatngaythangnam(a,b,c);
    tinhsothutungay(a,b,c);
    return 0;
}
