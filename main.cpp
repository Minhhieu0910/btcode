#include <iostream>
//Đếm số lượng chẵn nhỏ nhất
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
int sochan(int a[][Max],int row,int col)
{
    int x=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           if(a[i][j]%2==0)
           {
               x=a[i][j];
               return x;
           }

        }
    }
    return 1;
}
int nhonhat(int a[][Max],int row,int col)
{
    int y=sochan(a,row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           if(a[i][j]%2==0)
           {
               if(a[i][j]<y)
               {
                    y=a[i][j];
               }
           }

        }
    }
   return y;
}
void soluong(int a[][Max],int row,int col)
{
    int z=nhonhat(a,row,col);
    if(z==1)
    {
        cout<<"khong co so chan trong ma tran";
    }
    else
    {
         int h=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
               if(a[i][j]==z)
               {
                    h++;
               }
        }
    }
    cout<<"so luong so chan nho nhat trong ma tran la:"<<h;
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
    soluong(a,row,col);
    return 0;
}
