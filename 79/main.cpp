#include <iostream>
// Hãy đếm số lượng chữ số của số nguyên dương n
using namespace std;

int main()
{
    int n,dem=0;
    do
    {
       cout<<"nhap so nguyen duong n ="<<endl;
       cin>>n;
       if(n<=0)
       {
           cout<<"so nguyen duong phai lon hon khong, vui long nhap lai!"<<endl;
       }
    }while(n<=0);
    while(n>0)
    {
        n=n/10;
        dem++;
    }
     cout<< "so luong chu so cua so nguyen duong n ="<<dem;
    return 0;
}
