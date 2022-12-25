#include <iostream>
//Tìm số nguyên tố lớn nhất
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
int nguyento(int a[][Max],int row,int col)
{
    int x=0,y=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            int dem=0;
            for(int k=1;k<=a[i][j];k++)
            {
                if(a[i][j]%k==0)
                {
                    dem++;
                }
            }
            if(dem==2)
            {
                if(a[i][j]>x)
                x=a[i][j];
                y++;

            }
        }
    }
    if(y>0)
    {
        return x;
    }
    return 0;
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

    if(nguyento(a,row,col)!=0)
    {
        cout<<"so nguyen to lon nhat trong ma tran la: "<<nguyento(a,row,col);
    }
    else
    {
        cout<<"khong co so nguyen to trong ma tran";
    }
    return 0;
}
