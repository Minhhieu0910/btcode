#include <iostream>
//Viết chương trình in ra hình chữ nhật có kích thước m x n
using namespace std;

int main()
{
    int m,n;
    cout<<"nhap vao chieu dai cua hcn"<<endl;
    cin>>m;
    cout<<"nhap vao chieu rong cua hcn"<<endl;
    cin>>n;

//Hình chữ nhật đặc

  /*  for(int i=1;i<=n;i++)
    {
      for(int i=1;i<=m;i++)
    {
        cout<<" * ";
    }
    cout<<endl;
    }
*/

// Hình chữ nhật rỗng

    for(int i=1;i<=m;i++)
    {
        cout<<" * ";
    }cout<<endl;

    for(int i=1;i<n-1;i++)
    {
        cout<<" * ";
         for(int i=1;i<= m;i++)
         { cout<<"  ";
             if(i== m)
             {
                 cout<<" * "<<endl;
             }
         }
    }
    for(int i=1;i<=m;i++)
    {
        cout<<" * ";
    }


    return 0;
}
