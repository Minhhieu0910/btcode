#include <iostream>
//Tìm 1 đỉnh trong tam giác có tung độ nhỏ nhất
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
    cout<<")"<<endl;
}
void tungdo(diem d)
{
    int h=1;
    for(int i=1;i<3;i++)
    {
     for(int j=i;j<=3;j++)
     {
         if(d.y[i]>d.y[j])

             h=j;
         }
     }
    cout<<"diem co tung do nho nhat la diem : "<<h<<"  voitoa do ("<<d.x[h]<<","<<d.y[h]<<")";
}
int main()
{

    diem d;
    nhapdiem(d);
    xuatdiem(d);
    tungdo(d);
    return 0;
}
