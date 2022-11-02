#include <iostream>
//Đếm số lượng chữ số lẻ của số nguyên dương n
using namespace std;

int main()
{
    int n;
    int dem=0;
    cout<<"nhap so nguyen duong n "<<endl;
    cin>>n;
      while(n>0)
      {
          if(n%2 !=0)
          {
              dem++;
          }
          n = n / 10;
      }
    cout<<" so luong chu so le cua so nguyen duong n la: "<<dem;
    return 0;
}
