#include <iostream>
 //Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c
using namespace std;

int main()
{
    float a,b,c;
    cout<<"nhap a= "<<endl;
    cin>>a;
     cout<<"nhap b= "<<endl;
    cin>>b;
     cout<<"nhap c= "<<endl;
    cin>>c;
  if(a>b)
  {
    if(a>c)
    {
        cout<<"so lon nhat trong ba so "<<a <<b <<c << "la: "<<a;
    }
    else if(a<c)
    {
        cout<<"so lon nhat trong ba so "<<a <<b <<c << "la: "<<c;
    }
    else if(a=c)
    {
        cout<<" trong ba so "<<a <<b <<c << " co 2 so bang nhau va cung bang "<<a;
    }
  }
  else if(b>a)
  {
      if(b>c)
      {
         cout<<"so lon nhat trong ba so "<<a <<b <<c << "la: "<<b;
      }
      else if(c>b)
      {
          cout<<"so lon nhat trong ba so "<<a <<b <<c << "la: "<<c;
      }
      else if(b=c)
      {
          cout<<" trong ba so "<<a <<b <<c << " co 2 so bang nhau va cung bang "<<b;
      }
  }
  else if(a=b)
  {
      if(a<c)
      {
         cout<<"so lon nhat trong ba so "<<a <<b <<c << "la: "<<c;
      }
      else if(a>c)
      {
           cout<<" trong ba so "<<a <<b <<c << "co 2 so bang nhau va cung bang "<<b;
      }
      else if(a=c)
      {
          cout<<"3 so dau bang nhau va bang "<<a;
      }
  }

    return 0;
}
