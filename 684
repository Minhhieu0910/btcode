#include <iostream>
//Lấy node đầu tiên trong danh sách ra khỏi danh sách liên kết
using namespace std;

void XoaDau(LIST &l)
{
    if(l.pHead != NULL)
    {
        NODE *p = l.pHead;
        l.pHead = l.pHead ->pNext;
        delete p;
    }
}
