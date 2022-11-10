#include <iostream>
//Viết chương trình nhập vào 3 số thực. Hãy in 3 số ấy ra màn hình theo thứ tự tang dần mà chỉ dùng tối đa 1 biến phụ
using namespace std;

int main()
{
    float a,b,c;
    cout<<"nhap a= "<<endl;
    cin>>a;
    cout<<"nhap b= "<<endl;
    cin>>b;
    cout<<"nhap c= "<<endl;
    cin>>c;
    float nho;
    if(a>b)
    {
    nho=a;
    a=b;
    b=nho;
    }

    if(a>c)
    {
       nho=a;
       a=c;
       c=nho;
    }
    if(b>c)
    {
        nho=b;
        b=c;
        c=nho;
    }
    cout<<"thu tu tang dan cua 3 so thuc la: "<<a<<" "<<b<<" "<<c;

}
