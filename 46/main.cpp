#include <iostream>
//In ra cách đọc của một số nguyên dương có hai chữ số
using namespace std;


int main()
{
    int n;
    int i = n / 10;
    int h = n % 10;

       cout<<"nhap vao so tu nhien co 2 chu so can doc: "<<endl;
       cin>>n;
       if(n<10 || n>99)
       {
           cout<<"day KHONG PHAI so tu nhien co 2 chu so, vui long nhap lai !"<<endl;
       }
   else
   {
       switch(i)
{
    case 1:
        {
            cout<<"muoi ";break;
        }
         case 2:
        {
            cout<<" hai muoi ";break;
        }
         case 3:
        {
            cout<<"ba muoi ";break;
        }

         case 4:
        {
            cout<<"bon muoi ";break;
        }

         case 5:
        {
            cout<<"nam muoi ";break;
        }

         case 6:
        {
            cout<<"sau muoi ";break;
        }

         case 7:
        {
            cout<<"bay muoi ";break;
        }

         case 8:
        {
            cout<<"tam muoi ";break;
        }

         case 9:
        {
            cout<<"chin muoi ";break;
        }

}
    switch(h)
    {
        case 1:
        {
            cout<<"mot ";
        }
        break;
         case 2:
        {
            cout<<" hai  ";
        }
        break;
         case 3:
        {
            cout<<"ba  ";
        }
        break;
         case 4:
        {
            cout<<"bon  ";
        }
        break;
         case 5:
        {
            cout<<"nam  ";
        }
        break;
         case 6:
        {
            cout<<"sau "  ;
        }

         case 7:
        {
            cout<<"bay ";
        }

         case 8:
        {
            cout<<"tam ";
        }

         case 9:
        {
            cout<<"chin ";
        }


    }
   }

}
