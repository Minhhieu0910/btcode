#include <iostream>
//Viết hàm thêm 1 node vào đầu danh sách liên kết đơn
using namespace std;
void addHead(LIST &l, NODE* new_element)
{
    if(l.pHead == NULL)
    {
        l.pHead = new_element;
        l.pTail = l.pHead;
    }
    else
    {
        new_element->pNext = l.pHead;
        l.pHead = new_element;
    }
}
