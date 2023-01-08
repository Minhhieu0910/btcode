#include <iostream>
//Tính đạo hàm cấp 1 của đa thức
using namespace std;
#define Max 100
struct dathuc
{
    float heso[Max];
    int somu;
};
struct daoham
{
    float heso[Max];
    int somu[Max];
};
void nhapdathuc(dathuc &dt)
{
    do
    {
      cout<<"nhap vao so mu cua da thuc: "<<endl;
      cin>>dt.somu;
      if(dt.somu <1)
      {
          cout<<"so mu phai >=1, vui long nhap lai !"<<endl;
      }
    }while(dt.somu <1);
    for(int i=0;i<=dt.somu;i++)
    {
        float temp;
        cout<<"nhap vao he so dung truoc x^"<<i<<":  ";
        cin>> temp;
        dt.heso[i]=temp;
    }
}
void xuatdathuc(dathuc dt)
{
    for(int i=0;i<=dt.somu;i++)
    {
        if(i==dt.somu)
        {
            cout<<dt.heso[i]<<".X^"<<i;
        }
        else
        {
            cout<<dt.heso[i]<<".X^"<<i<<"  +  ";
        }
    }
    cout<<endl;
}
void daohamcap1(dathuc dt)
{
    cout<<"dao ham cap 1 ta duoc:"<<endl;
    daoham dh;
    for(int i=1;i<=dt.somu;i++)
    {
            dh.heso[i]=dt.heso[i]*i;
            dh.somu[i]=i-1;
    }
}
void xuatdaohamcap1(dathuc dt)
{
    daoham dh;
    cout<<"0 + ";
    for(int i=1;i<=dt.somu;i++)
    {
        if(i==dt.somu)
        {
            cout<<dh.heso[i]<<".X^"<<dh.somu[i];
        }
        else
        {
            cout<<dh.heso[i]<<".X^"<<dh.somu[i]<<"  +  ";
        }
    }
}
int main()
{
    dathuc dt;
    daoham dh;
    nhapdathuc(dt);
    xuatdathuc(dt);
    daohamcap1(dt);
    xuatdaohamcap1(dt);
    return 0;
}
