#include <iostream>
//Hãy liệt kê các giá trị xuất hiện trong dãy quá 1 lần. Lưu ý: mỗi giá trị liệt kê 1 lần
using namespace std;
void nhap(int a[],int n)
{
    for(int i=0;i<n; i++)
    {
        cout<<"A["<<i<<"]= "<<endl;
        cin>>a[i];
    }
}
void xuat(int a[],int n)
{
    cout<<"\n cac phan tu co trong mang: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}
int sotrung(int a[],int vitri)
{
        for(int i=vitri -1 ;i>=0;i--)
        {
           if(a[vitri]==a[i])
           {
               return 1; //bị trùng
           }
        }
        return 0;  //không bị trùng
}
int solantrung(int a[],int n,int vitri)
{
    int dem=0;
    for(int i=vitri +1 ;i<n;i++)
    {
        if(a[i]==a[vitri])
        {
           dem++;
        }
    }
    return dem;
}
void giatritrung(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(sotrung(a,i)==0)
        {
            if(solantrung(a,n,i)>=1)
            {
                cout<<a[i]<<"\t";
            }
        }
    }
}
int main()
{
    int a[100];
    int n;
    cout<<"nhap N:"<<endl;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    giatritrung(a,n);
}
