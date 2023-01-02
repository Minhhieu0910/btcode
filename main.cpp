#include <iostream>
//Sắp xếp ptử dương tăng dần theo cột và dòng. Dùng 2 phương pháp: Sử dụng mảng phụ và ko sử dụng mảng phụ
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
void hoanvi(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
/* CACH 1
void sapxepkhongdungmangphu(int a[][Max], int dong, int cot)
{
    int n = dong * cot;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i / cot][i % cot] > 0)
            {
                if(a[i / cot][i % cot] > a[j / cot][j % cot])
                {
                    HoanVi(a[i / cot][i % cot], a[j / cot][j % cot]);
                }
            }
        }
    }
} */
//CACH 2
void sapxepcodungmangphu(int a[][Max],int row,int col)
{
    int n=row*col;
    int h=0;
    int b[Max];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            b[h++]=a[i][j];
        }
    }
    for(h=0;h<n-1;h++)
    {
        for(int k=h+1;k<n;k++)
        {
            if(b[h]>b[k])
           {
            hoanvi(b[h],b[k]);
           }
        }

    }
    h=0;
   for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            a[i][j]=b[h++];
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
    //sapxepkhongdungmangphu(a,row,col);
    sapxepcodungmangphu(a,row,col);
    xuatmatran(a,row,col);
    return 0;
}
