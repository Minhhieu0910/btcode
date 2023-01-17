#include <iostream>
#include <cmath>
//Hàm tính căn bậc 3 của 1 số thực có thể cài đặt đệ quy theo 2 hàm exp và ln
using namespace std;
    float sqrt3(float x)
{
	if(x == 0)
		return 0;
	if(x < 0)
		return (-sqrt3(-x));
	return (exp((log(x)/3)));
}
int main()
{
    int n;
    cout<<"Nhap vao 1 so thuc bat ky: "<<endl;
    cin>>n;
    float x=sqrt3(n);
    cout<<x;
    return 0;
}
