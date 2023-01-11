#include <iostream>
//Xuất tam giác theo định dạng ((x1, y1); (x2, y2); (x3, y3))
using namespace std;
#define Max 100
struct diem
{
    float x[Max],y[Max];
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
    cout<<")";
}
int main()
{

    diem d;
    nhapdiem(d);
    xuatdiem(d);
    return 0;
}
