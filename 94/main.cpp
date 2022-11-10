#include <iostream>
//Viết chương trình in ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93
using namespace std;

int main()
{
    for(int i=1;i<100;i++)
    {
        if(i%2==1)
        {
            if(i==5 || i==7 || i==93)
            {
               cout<<"";
            }
           else
            {
                cout<<i<<" \t ";

            }
        }
    }

    return 0;
}
