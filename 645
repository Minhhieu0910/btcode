#include <iostream>
// Viết hàm đệ quy tính số hạng thứ n của dãy Fibo
using namespace std;
long Fibo(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return Fibo(n - 1) + Fibo(n - 2);
}
int main()
{
    int n;
    cout<<"Nhap n: "<<endl;
    cin>>n;

    long kq = Fibo(n);
    cout<<kq;
    return 0;
}
