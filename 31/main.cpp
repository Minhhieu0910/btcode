#include <iostream>
//Kiểm tra các chữ số của số n có tăng dần từ trái sang phải không
using namespace std;

int main()
{
       int n,x,i,t;
       cout<<"nhap so n"<<endl;
       cin>>n;
       x= n%10;
       while(n>0)
       {
           i=n%10;
           if(i<=x)
           {
            x=i;
            t=1;

           }
           else
           {
               t=0;
               break;
           }

           n = n/10;
       }
       if(t==1)
       {
           cout<<"cac chu so cua so n CO tang dan tu trai sang phai"<<endl;
       }
       else
       {
           cout<<"cac chu so cua so n KHONG tang dan tu trai sang phai"<<endl;
       }
       return 0;
}
