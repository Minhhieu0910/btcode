#include <iostream>
//Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì
using namespace std;
void kienhuctamgiac(float a, float b, float c)
{
    if(a==b & a==c)
    {
            cout<<"day la tam giac DEU"<<endl;
    }
   else if(a==b || a==c || c==b  )
    {
        cout<<"day la tam giac CAN"<<endl;
    }
   else if(a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a)
    {
        cout<<" day la tam giac VUONG "<<endl;
    }
    else
    {
        cout<<"day la tam giac thuong"<<endl;

    }
}
int main()
{
    float a,b,c;
    do
    {
        cout<<"nhap vao canh a"<<endl;
        cin>>a;
        cout<<"nhap vao canh b"<<endl;
        cin>>b;
        cout<<"nhap vao canh c"<<endl;
        cin>>c;
        if(a+b<=c || a+c<=b || b+c<=a)
        {
            cout<<"day khong phai la 3 canh cua tam giac, vui long nahp lai!"<<endl;
        }
    } while(a+b<=c || a+c<=b || b+c<=a);

    kienhuctamgiac(a,b,c);


    return 0;
}
