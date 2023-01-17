#include <iostream>
//Thêm, Xóa, Cộng, Trừ
using namespace std;
#define Max 100
void nhapmang(int *a,int n)
{
    cout<<"Nhap vao mang 1 chieu: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= "<<endl;
        cin>>*(a+i);
    }
}
void xuatmang(int *a,int n)
{
    cout<<"Xuat ra mang 1 chieu: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= "<<*(a+i)<<"\t";
    }
    cout<<endl;
}
void phepcongcontro(int *a,int n)
{
    int *p=NULL;
    p=a;
    p++;
    p+=1;
}
void pheptrucontro(int *a,int n)
{
    int *p=NULL;
    p=(a+n-1);
    p--;
}
void themphantu(int *&a,int &n)
{
    n++;
    int vt,gt;
    int *p=NULL;
    cout<<"nhap vao vi tri can them: "<<endl;
    cin>>vt;
    cout<<"gia tri phan tu them bang: "<<endl;
    cin>>gt;
    a = (int*)realloc(a, n * sizeof(int));
    for(int i=n;i>vt;i--)
    {
        a[i]=a[i-1];
    }
    a[vt]=gt;

}
void xoaphantu(int *&a,int &n)
{
    int vt,gt;
    int *p=NULL;
    cout<<"nhap vao vi tri can xoa: "<<endl;
    cin>>vt;
    a = (int*)realloc(a, --n * sizeof(int));
    for(int i=vt;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    //n--;
}
int main()
{
    int *a=NULL;
    int n,chon;
    cout<<"Nhap vao n: "<<endl;
    cin>>n;
    a= new int[n];
    nhapmang(a,n);
    xuatmang(a,n);
    cout<<"1.phep cong con tro: "<<endl;
    cout<<"2.phep cong con tro: "<<endl;
    cout<<"3.them phan tu: "<<endl;
    cout<<"4.xoa pha tu: "<<endl;
    cout<<"LUA CHON PHEP TOAN BAN MUON THUC HIEN: "<<endl;
    cin>>chon;
    switch(chon)
    {
        case 1:
            phepcongcontro(a,n);break;
        case 2:
            pheptrucontro(a,n);break;
        case 3:
             themphantu(a,n);break;
        case 4:
            xoaphantu(a,n);break;
        default:
            break;
    }
    if(a!=NULL)
    {
        delete[] a;
    }
    xuatmang(a,n);
    return 0;
}
