#include <iostream>
#include <cmath>
//Tính diện tích tam giác
using namespace std;
#define Max 100
struct diem
{
    float x[Max],y[Max];
};
struct chuvi
{
    float a,b,c;
    float C;
};
struct dientich
{
    float a,b,c,p,S ;
};
void nhapdiem(diem &d)
{
    for(int i=1;i<=3;i++)
    {
        cout<<"nhap vao toa do diem "<<i<<endl;
        cout<<"nhap x:"<<endl;
        cin>>d.x[i];
        cout<<"nhap y:"<<endl;
        cin>>d.y[i];
    }
}
void xuatdiem(diem d)
{
    cout<<"Ta co toa do 3 diem cua tam giac nhu sau :(";
    for(int i=1;i<=3;i++)
    {
        if(i==3)
        {
            cout<<"("<<d.x[i]<<","<<d.y[i]<<")";
        }
        else
        {
            cout<<"("<<d.x[i]<<","<<d.y[i]<<");";
        }
    }
    cout<<")"<<endl;
}
int chuvitamgiac(diem d)
{
    chuvi cv;
    cv.c=sqrt(pow((d.x[2]-d.x[1]),2)+pow((d.y[2]-d.y[1]),2));
    cv.b=sqrt(pow((d.x[3]-d.x[1]),2)+pow((d.y[3]-d.y[1]),2));
    cv.a=sqrt(pow((d.x[2]-d.x[3]),2)+pow((d.y[2]-d.y[3]),2));
    cv.C=cv.c+cv.b+cv.a;
    return cv.C;
}
void dientichtamgiac(diem d)
{
    dientich dt;
    dt.p=chuvitamgiac(d)/2;
    dt.c=sqrt(pow((d.x[2]-d.x[1]),2)+pow((d.y[2]-d.y[1]),2));
    dt.b=sqrt(pow((d.x[3]-d.x[1]),2)+pow((d.y[3]-d.y[1]),2));
    dt.a=sqrt(pow((d.x[2]-d.x[3]),2)+pow((d.y[2]-d.y[3]),2));
    dt.S=sqrt(dt.p*(dt.p-dt.a)*(dt.p-dt.b)*(dt.p-dt.c));
    cout<<"Dien tich cua tam giac S=  "<<dt.S;
}
int main()
{
    diem d;
    nhapdiem(d);
    xuatdiem(d);
    dientichtamgiac(d);
    return 0;
}
