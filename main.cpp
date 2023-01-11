#include <iostream>
#include <cmath>
//Hãy cho biết dạng của tam giác(đều, vuông, vuông cân, cân, thường)
using namespace std;
#define Max 100
struct diem
{
    float x[Max],y[Max];
};
struct dangtamgiac
{
    float a,b,c ;
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
void dangcuatamgiac(diem d)
{
    dangtamgiac tg;
    tg.c=sqrt(pow((d.x[2]-d.x[1]),2)+pow((d.y[2]-d.y[1]),2));
    tg.b=sqrt(pow((d.x[3]-d.x[1]),2)+pow((d.y[3]-d.y[1]),2));
    tg.a=sqrt(pow((d.x[2]-d.x[3]),2)+pow((d.y[2]-d.y[3]),2));
    if(tg.a==tg.b==tg.c)
    {
        cout<<"Tam giac deu";
    }
    else
    {
        if(tg.a*tg.a + tg.b*tg.b==tg.c*tg.c ||tg.a*tg.a + tg.c*tg.c==tg.b*tg.b ||tg.c*tg.c + tg.b*tg.b==tg.a*tg.a )
        {
            if(tg.a==tg.b || tg.a==tg.c ||tg.c==tg.b )
            {
                cout<<"Tam giac vuong can";
            }
            cout<<"Tam giac vuong";
        }
        else if(tg.a==tg.b || tg.a==tg.c ||tg.c==tg.b )
        {
            cout<<"Tam giac can";
        }
        else
        {
            cout<<"Tam giac thuong";
        }
    }
}
int main()
{
    diem d;
    nhapdiem(d);
    xuatdiem(d);
    dangcuatamgiac(d);
    return 0;
}
