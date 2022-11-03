#include <iostream>
//Tìm vị trí của phần tử lớn nhất trong mảng một chiều
using namespace std;

void nhap(float a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"nhap gia cua phan tu a["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void timkiem(float a[], int n )
{
    float m =a[0];
    int x=0;
    for(int i=0;i<n;i++)
    {
       if(a[i] > m)
       {
           m=a[i];
       }
    }
        for(int i=0;i<n;i++)
        {
             if(a[i]==m)
              {
                  x=i+1;
                cout<<x<<"\t";
              }
        }
}
void xuat(float a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
int main()
{
    float a[100];

    int n;
     do
    {
        cout<<"nhap vao so phan tu cua mang  n = "<<endl;
        cin>>n;
        if(n<0 || n>100)
        {
            cout<<"nhap so phan tu SAI"<<endl;
        }
    }while(n<0 || n>100);
    nhap(a,n);
    cout<<"cac phan tu trong mang la: ";
    xuat(a,n);
    cout<<"\n vi tri cua phan tu lon nhat la:";
    timkiem(a,n);

    return 0;
}
