#include <iostream>
//Tính tích 2 đa thức
using namespace std;
#define Max 100
struct dathuc
{
    float  heso[Max];
    int somu;
};
struct tinhtich2dathuc
{
    float heso[Max];
    int somu[Max];
    float kq[Max];
};
void nhapdathuc(dathuc &dt)
{
    do
    {
        cout<<"nhap vao so mu cua da thuc: "<<endl;
        cin>>dt.somu;
        if(dt.somu<1)
        {
           cout<<"so mu phai lon hon hoac bang 1 !"<<endl;
        }
    }while(dt.somu<1);

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
             cout<<dt.heso[i]<<".X^"<<i<<"   +   ";
        }
    }
    cout<<endl;
}
void tinhtich(dathuc a, dathuc b)
{
    tinhtich2dathuc c;
    int x=a.somu;
    int y=b.somu;
    int z=0;
    int h=0;
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
             c.heso[h]=a.heso[i]* b.heso[j];
             c.somu[h]=i+j;
             h++;
        }
    }
     for(int g=0;g<=x+y;g++)
    {
        c.kq[g]=0;
        for(int k=0;k<h;k++)
        {
            if(c.somu[k]==g)
            {
                c.kq[g]= c.kq[g] + c.heso[k];

            }

        }
        if(g==x+y)
        {
            cout<<c.kq[g]<<".X^"<<g;
        }
        else
        {
            cout<<c.kq[g]<<".X^"<<g<<"  +  ";
        }

    }
}
int main()
{
    dathuc dt1;
    dathuc dt2;
    nhapdathuc(dt1);
    xuatdathuc(dt1);
    nhapdathuc(dt2);
    xuatdathuc(dt2);
    tinhtich(dt1,dt2);
    return 0;
}
