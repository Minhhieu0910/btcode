#include <iostream>
// Thêm xóa
using namespace std;
#define Max 100
void capphat(int **&a,int row,int col)
{
     a=new int* [row];
     for(int i=0;i<row;i++)
     {
         a[i]=new int [col];
     }
}
void nhapmatran(int **a,int row,int col)
{
    cout<<"Nhap vao mang 2 chieu: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]= "<<endl;
            cin>>a[i][j];
        }
    }
}
void xuatmatran(int **a,int row,int col)
{
    cout<<"Xuat ma tran: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void thuhoi(int ***a,int row)
{
    for(int i=0;i<row;i++)
    {
        delete (*a)[i];
    }
    delete [](*a);
}
void themdong(int **&a,int &row,int col)
{
      a = (int**)realloc(a, row * sizeof(int));
        a[row - 1] = new int[col];
    int vt;
    cout<<"nhap vao vi tri cua dong can them: "<<endl;
    cin>>vt;
    for(int i=row;i>vt;i--)
    {
        for(int j=0;j<col;j++)
        {
             a[i][j]=a[i-1][j];cout<<vt;
        }
    }
      row++;
     cout<<"nhap vao cac phan tu can them cua dong "<<vt<<" :"<<endl;
    for(int j=0;j<col;j++)
    {
        cout<<"a["<<vt<<"]["<<j<<"]= "<<endl;
        cin>>a[vt][j];
    }
}
void xoacot(int **&a,int row,int &col)
{
    int vt;
    cout<<"Nhap vao cot can xoa: "<<endl;
    cin>>vt;
    for(int i=0;i<row;i++)
    {
        for(int j=vt;j<col;j++)
        {
            a[i][j]=a[i][j+1];
        }
    }
    col--;
}
int main()
{
    int **a=NULL;
    int row=3;int col=3;
  capphat(a,row,col);
  nhapmatran(a,row,col);
  xuatmatran(a,row,col);
  cout<<"1.them dong: "<<endl;
  cout<<"2.xoa cot: "<<endl;
   int chon;
  cout<<"Nhap vao lua chon cua ban: "<<endl;
cin>>chon;
  switch(chon)
  {
     case 1:
         {
            themdong(a,row,col);break;
         }
     case 2:
         {
             xoacot(a,row,col);break;
         }
     default:
        break;
  }
  xuatmatran(a,row,col);
  if(a!=NULL)
  {
      thuhoi(&a,row);
  }
}
