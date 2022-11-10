#include <iostream>
//Hãy sử dụng vòng lặp for để xuất tất cả các ký tự từ A đến Z
using namespace std;

int main()
{
  /*  for(char i= 'A';i<='Z';i++)
    {
        cout<<i<<" \t ";
    }
    */
   char i='A';
    while(i<='Z')
    {
        cout<<i<<" \t ";
        i++;
    }
    return 0;
}
