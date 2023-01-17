#include <iostream>
//Con trỏ vô kiểu
using namespace std;

int main()
{
    int a=13;
    float b=5.43;
    char c='A';
    void *p;
    p=&a;
    cout<<*((int*)p)<<endl;
    p=&b;
    cout<<*((float*)p)<<endl;
    p=&c;
    cout<<*((char*)p)<<endl;
    return 0;
}
