#include <iostream>
//Thêm một node vào cuối danh sách
using namespace std;

void AddTail(LIST &l,NODE* new_ele)
{
    if(l.pTail==NULL)
        l.pHead=l.pTail=new_ele;
    else
    {
        l.pTail->pNext=new_ele;
        l.pTail=new_ele;
    }
}
