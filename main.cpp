#include <iostream>
#include<conio.h>
// Hãy khai báo kiểu dữ liệu để biểu diễn khái niệm đa thức 1 biến trong toán học:
// P(x) = a.n.X^n + a.n-1.X^n-1 + … + a.1.X + a.0 và định nghĩa hàm nhập và hàm xuất cho kiểu dữ liệu này
using namespace std;
struct dathuc
{
  int n;
  float a;
};
void nhapdathuc(dathuc &dt)
{
    cout<<"nhap bac da thuc:"<<endl;
    cin>>(dt.n);
    cout<<"nhap he so:"<<endl;
    cin>>(dt.a);
}
void xuatdathuc(dathuc dt)
{
        for(int i=0;i<=dt.n;i++)
    {
        float y=dt.n-i;
        if(y==0)
        {
            cout<<dt.a<<"."<<y<<".X^"<<y;
        }
        else
        {
            cout<<dt.a<<"."<<y<<".X^"<<y<<"   +    ";
        }
    }
}
int main()
{

   dathuc dt;
   nhapdathuc(dt);
   xuatdathuc(dt);
    return 0;
}
