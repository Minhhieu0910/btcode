#include <iostream>
//Chương trình tìm số ngày trong tháng
using namespace std;
int ktnamnhuan(int nam)
{
    if((nam % 4==0 && nam % 100 !=0)|| nam % 400==0)
    {
        return 1;
    }
    else

            return 0;
   // return((nam % 4==0 && nam % 100 !=0)|| nam % 400==0);
}
int check(int thang,int nam)
{
    switch(thang)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            {
                if(ktnamnhuan(nam)==1)
                {
                    return 29;
                }
                else
                {
                    return 28;
                }
            }
        default :
            {
                cout<<"so thang khong hop le"<<endl;
            }
            break;


    }
}
int main()
{
int thang, nam;
do
{
    cout<<"nhap vao nam ban can kiem tra"<<endl;
    cin>>nam;
     cout<<"nhap vao thang ban can kiem tra"<<endl;
    cin>>thang;
    if(nam<=0 || thang<1 ||thang>12)
    {
        cout<<"NAM hoac THANG ban da nhap SAI, vui long nhap lai !"<<endl;
    }
}while(nam<=0 || thang<1 ||thang>12);
cout<<"so ngay trong thang "<<thang<<" la: "<<check(thang,nam);
    return 0;
}
