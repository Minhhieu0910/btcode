#include <iostream>
//Định nghĩa toán tử cộng (operator +) cho hai đa thức
using namespace std;
#define Max 100
struct dathuc
{
    float heso[Max];
    int somu;
    int x;
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
dathuc operate(dathuc a,dathuc b)
{
    dathuc c;
    if(a.somu >= b.somu)
    {
        c.x=a.somu;
    }
    else
    {
        c.x=b.somu;
    }
    for(int i=0;i<=c.x;i++)
    {
        c.heso[i]=a.heso[i]+b.heso[i];
    }
    return c;
}
dathuc xuatoperate(dathuc a, dathuc b)
{
    dathuc c;
    c=operate(a,b);
    for(int i=0;i<=c.x;i++)
    {
        if(i==c.x)
        {
            cout<<c.heso[i]<<".X^"<<i;
        }
        else
        {
            cout<<c.heso[i]<<".X^"<<i<<"  +  ";
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
    xuatoperate(dt1,dt2);
    return 0;
}
