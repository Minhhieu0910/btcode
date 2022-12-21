#include <iostream>
//Kiểm tra ma trận có tồn tại số hoàn thiện hay không
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
int sohoanthien(int a[][Max],int row, int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            int x=0;
            for(int k=1;k<(a[i][j]);k++)
            {
                if((a[i][j])%k==0)
                {
                    x=x+k;
                }
            }
            if(x==(a[i][j]) & (a[i][j])!=1 & (a[i][j])!=0)
            {
                return 1;
            }
        }
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
    int y = sohoanthien(a,row,col);
    if(y ==1)
    {
        cout<<"ma tran co so hoan thien";
    }
    else
    {
        cout<<"ma tran KHong co so hoan thien";
    }

    return 0;
}
