#define  _CRT_SECURE_NO_WARNINGS
//��������ȱ�ݣ�βɾ����posλ�ò���ɾ����ʱ�临�Ӷȸ�

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