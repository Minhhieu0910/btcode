#include <iostream>
//Viết chương trình in bảng cửu chương ra màn hình
using namespace std;

int main()
{
    int n,x;
    cout<<"nhap vao bang cuu chuong muoon ra "<<endl;
    cin>>n;
    for(int i=1;i<=10;i++)
    {
       x=n*i;
        cout<<n<<" * "<<i<<" = "<<x<<endl;;
    }
    return 0;
}
