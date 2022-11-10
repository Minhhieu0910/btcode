#include <iostream>
//Viết chương trình nhập họ tên, điểm toán, điểm văn của 1 học sinh. Tính điểm trung bình và xuất ra kết quả
using namespace std;
void hoten(int a[],float b, float c)
{
    int i;
    cout<<"nhap ho va ten"<<endl;
    cin>>a[i];
}
void danhhieu(int a[],float d)
{
   int i;
    if(d>=8)
    {
        cout<<"dat hsg";
    }
    else if(d>=6.5 & d<8)
    {
        cout<<"dat hs kha";
    }
    else if(d>=5 & d<6.5)
    {
        cout<<"dat hs tb";
    }
    else if(d<5)
    {
        cout<<"dat hs yeu";
    }
}
int main()
{
    int a[100];
    float c,b,d;
    cout<<"nhap diem toan"<<endl;
    cin>>b;
    cout<<"nhap diem van"<<endl;
    cin>>c;
    hoten(a,b,c);
    d = (b+c)/2;
    cout<<"diem trung binh la: "<<d<<endl;
    danhhieu(a,d);

}
