#define  _CRT_SECURE_NO_WARNINGS
//单向链表缺陷：尾删、在pos位置插入删除的时间复杂度高

#include"List.h"


void test()
{
	ListNode* plist = NULL;
	plist=ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushFront(plist, 2);
	ListPrint(plist);
	ListPopBack(plist);
	ListPrint(plist);
}

int main()
{
	test();
	return 0;
}