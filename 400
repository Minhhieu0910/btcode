#include <iostream>
//Liệt kê các dòng có nhiều số chẵn nhất
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
void sochan(int a[][Max],int row,int col)
{
    int z=0;
     int   dem[Max]={0};
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]%2==0)
            {
                dem[i]++;
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        if(dem[i]>z)
        {
            z=dem[i];
        }
    }
    if(z==0)
       {
          cout<<"khong co so chan trong ma tran";
       }
    else
    {
        cout<<"nhung dong co so chan nhieu nhat la: ";
    }
    for(int i=0;i<row;i++)
    {
        if(dem[i]==z)
        {
            cout<<i<<"\t";
        }
    }
    cout<<"voi "<<z<<" lan";

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
    sochan(a,row,col);
    return 0;
}
