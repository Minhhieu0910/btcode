#include <iostream>
//Liệt kê các cột nhiều chữ số nhất trong ma trận các số nguyên
using namespace std;
#define Max 100
void nhapmatran(int a[][Max],int row, int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Nhap gia tri cac phan tu trong ma tran:"<<endl;
            cout<<"a["<<i<<"]["<<j<<"]= "<<endl;
            cin>>a[i][j];
        }
    }
}
void xuatmatran(int a[][Max],int row,int col)
{
    cout<<"Ta co ma tran nhu sau:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<"\t";
       }
        cout<<endl;
    }
}
void tachso(int n,int row, int dem[])
{
    n=abs(n);
    int x=0;
    while(n>0)
    {
        dem[row]++;
        n=n/10;
    }
}
void cotnhieuchusonhat(int a[][Max],int row,int col)
{
    int dem[Max]={0};
    int y=1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            tachso(a[i][j],i,dem);
        }
    }
    for(int i=0;i<row;i++)
    {
       y= (dem[i]>y)? dem[i] : y;
    }
    if(y>1)
    {
        cout<<"dong chu chu so nhieu nhat trong ma tran cac so nguyen la: ";
         for(int i=0;i<row;i++)
    {
       if(dem[i]==y)
        cout<<i<<"\t";
    }
    }
    else
    {
        cout<<"tat ca cac dong deu co so luong chu so bang nhau !";
    }



}
int main()
{
    int a[Max][Max];
    int row,col;
     do
    {
         cout<<"Nhap vao so cot cua ma tran:"<<endl;
         cin>>col;
         if(col<1 || col >Max)
         {
             cout<<"Nhap so cot bi loi, vui long nhap lai !"<<endl;
         }
    }while(col<1 || col >Max);

    do
    {
        cout<<"Nhap vao so hang cua ma tran:"<<endl;
         cin>>row;
          if(row<1 || row >Max)
         {
             cout<<"Nhap so cot bi loi, vui long nhap lai !"<<endl;
         }
    }while(row<1 || row >Max);

    nhapmatran(a,row,col);
    xuatmatran(a,row,col);
    cotnhieuchusonhat(a,row,col);
    return 0;
}
