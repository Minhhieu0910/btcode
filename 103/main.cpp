#include <iostream>
//Viết chương trình nhập vào 1 ngày ( ngày, tháng, năm). Tìm ngày trước ngày vừa nhập (ngày, tháng, năm)
using namespace std;
int nhuan(int y)
{
    return((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}
int songaytrongthang(int m,int y)
{
    switch(m)
    {
       case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
        break;
       case 4: case 6: case 9: case 11:
       return 30;
       break;
       if(nhuan(y))
       {
           return 29;
       }
       else
       {
           return 28;

       }

    }
}
void ngaytruocdo(int d, int m, int y)
{
        int nd=d,nm=m,ny=y;
    if(y>0 & m>0 & m<13 & d>0 & d<=(songaytrongthang(m,y)))
       {
           nd=d-1;
           if(m!=1 & d==1)
       { nm=m-1;
             if( nm==3 || nm==5 || nm==7 || nm==8 || nm==10 || nm==12 )
             {
                 nd=31;
                 nm=m-1;
             }
             if(nm==4 ||nm==6 ||nm==9 ||nm==11 )
             {
                 nd=30;

             }
             if(nm==2 )
             {
                 if(nhuan(y))
                 {
                     nd=29;
                 }
                 else
                 {
                     nd=28;
                 }
             }
       }
       if(m==1 & d==1)
             {
                 ny = y-1;
                 nm =12;
                 nd =31;
             }
       cout<<"ngay truoc ngay do la "<< nd <<":" << nm<<":" << ny;
       }
}
int main()
{
    int d,m,y;
   cout<<"nhap ngay trong thang "<<endl;
   cin>>d;
    cout<<"nhap thang trong nam "<<endl;
   cin>>m;
    cout<<"nhap nam"<<endl;
   cin>>y;
   ngaytruocdo(d,m,y);


    return 0;
}
