#include <iostream>
//Sắp xếp chẵn tăng, lẻ giảm
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
void chantanglegiam(int a[][Max],int row,int col)
{
    int b[Max],c[Max];
    int h=0,k=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]%2==0)
            {
                b[h++]=a[i][j];
            }
            else
            {
                c[k++]=a[i][j];
            }
        }
    }
    for(int x=0;x<h-1;x++)
    {
        for(int y=x+1;y<h;y++)
        {
            if(b[x]>b[y])
            {
                int z=b[y];
                b[y]=b[x];
                b[x]=z;
            }
        }

    }
    for(int x=0;x<k-1;x++)
    {
        for(int y=x+1;y<k;y++)
        {
            if(c[x]<c[y])
            {
                int z=c[y];
                c[y]=c[x];
                c[x]=z;
            }
        }
    }
    h=0;k=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]%2==0)
            {
                a[i][j]=b[h++];
            }
            else
            {
                a[i][j]=c[k++];
            }
        }
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
    chantanglegiam(a,row,col);
    xuatmatran(a,row,col);
    return 0;
}
