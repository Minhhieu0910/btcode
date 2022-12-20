#include <iostream>
// Hãy biên đổi ma trận số thực bằng cách thay các giá trị bằng giá trị nguyên gần nó nhất
using namespace std;
#define Max 100
void nhapmatran(float a[][Max],int row, int col)
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
void xuatmatran(float a[][Max],int row,int col)
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
void biendoi(float a[][Max],int c,int d)
{
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<c;j++)
        {
             int x=0;
           float y=0;
          x=(a[i][j])/1;
         y=abs((a[i][j]))-abs(x);
        if(y>=0.5)
        {
            if(x>0)
            {
                 (a[i][j])=x+1;
            }
            else
            {
                (a[i][j])=x-1;
            }
        }

         else
        {
                 (a[i][j])=x;

        }
        }
    }
}
int main()
{
    float a[Max][Max];
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
    biendoi(a,col,row);
     xuatmatran(a,row,col);
    return 0;
}
