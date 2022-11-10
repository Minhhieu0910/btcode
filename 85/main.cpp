#include <iostream>
//Nhập vào tháng của 1 năm. Cho biết tháng thuộc quý mấy trong năm
using namespace std;

int main()
{
    int n;
    do
    {
    cout<<"nhap vao thang bat ky trong nam"<<endl;
    cin>>n;
    if(n<=0 || n>12)
    {
        cout<<"nhap thang bi SAI, vui long nhap lai"<<endl;
    }
    }while(n<=0 || n>12);
     switch(n)
     {
     case 1: case 2: case 3:
        {
            cout<<"thang "<<n<<" thuoc quy 1";
            break;
        }
        case 4: case 5: case 6:
        {
            cout<<"thang "<<n<<" thuoc quy 2";
            break;
        }
        case 7: case 8: case 9:
        {
            cout<<"thang "<<n<<" thuoc quy 3";
            break;
        }
        case 10: case 11: case 12:
        {
            cout<<"thang "<<n<<" thuoc quy 4";
            break;
        }
     }
    return 0;
}
