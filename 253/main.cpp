#include <iostream>
//Hãy cho biết tất cả các phần tử trong mảng a có nằm trong mảng b không
using namespace std;
void nhapmang(int a[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuatmang(int a[],int n)
{
    cout<<"\n cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}
void chobiet(int a[],int b[],int na,int nb)
{
    int h=0;
    for(int i=0;i<na;i++)
    {
        int dem=0;
        for(int j=0;j<nb;j++)
        {
            if(a[i]==b[j])
            {
                dem++;
            }
        }
        if(dem>0)
        {
            h++;
        }
    }
    if(h==na)
    {
        cout<<"tat ca cac phan tu trong mang a deu co trong mang b";
    }
    else
    {
        cout<<"mang b khong chua tat ca cac phan tu cua mang a";
    }
}
int main()
{
    int a[100];
    int b[100];
    int na,nb;
    cout<<"nhap N1:";
    cin>>na;
    nhapmang(a,na);
    xuatmang(a,na);
    cout<<"nhap N2:";
    cin>>nb;
    nhapmang(b,nb);
    xuatmang(b,nb);
    chobiet(a,b,na,nb);

    return 0;
}
