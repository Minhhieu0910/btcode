#include <iostream>
//Kiểm tra hai số thực có cùng dấu hay không
using namespace std;

int main()
{
    float t1,t2;
    do
    {
         cout<<"nhap so thuc 1 = "<<endl;
    cin>>t1;
     cout<<"nhap so thuc 2 = "<<endl;
    cin>>t2;
    if(t1==0 || t2==0)
    {
        cout<<" khong the so sanh voi 0"<<endl;
    }
    }while(t1==0 || t2==0);

    if(t1 / t2 < 0)
    {
        cout<<"hai so thuc nay KHAC dau"<<endl;
    }
    else
    {
         cout<<"hai so thuc nay CUNG dau"<<endl;
    }

    return 0;
}
