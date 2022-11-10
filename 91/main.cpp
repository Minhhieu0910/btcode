#include <iostream>
//In tất cả các số nguyên dương lẻ nhỏ hơn 100
using namespace std;

int main()
{
    for(int i=1;i<100;i++)
    {
        if(i%2==1)
        {
            cout<<i<<" \t ";
        }
    }

    return 0;
}
