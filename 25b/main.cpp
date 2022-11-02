#include <iostream>
//Tìm chữ số lớn nhất của số nguyên dương n
using namespace std;

int main()
{
     int n,max=0,i;
    int dem=0;
    cout<<"nhap so nguyen duong n "<<endl;
    cin>>n;
    while(n>0)
    {
         i= n%10;
        if(i>=max)
        {
            max=i;
        }
        n= n / 10;
    }
    cout<<"chu so lon nhat cua so nguyen duong n la: "<<max;

    return 0;
}
