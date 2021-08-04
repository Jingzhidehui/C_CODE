#define  _CRT_SECURE_NO_WARNINGS
#include"SList.h"


//打印
void SListPrint(SLTNode** pphead)
{
	SLTNode* cur = *pphead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");

}
//创建一个新节点
SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}
//尾插
void SListPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	//如果一开始为空，那么直接就是新开辟的节点
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		//找到尾结点的指针
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//原来的尾链接存新链接的地址
		tail->next = newnode;
	}
}
void SListPushBack1(SLTNode* pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	//如果一开始为空，那么直接就是新开辟的节点
	if (pphead == NULL)
	{
		pphead = newnode;
	}
	else
	{
		SLTNode* tail = pphead;
		//找到尾结点的指针
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//原来的尾链接存新链接的地址
		tail->next = newnode;
	}
}

void fun(int* x)
{
	*x = 10;
}
int main()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack1(plist, 2);
	SListPushBack1(plist, 3);
	SListPrint(&plist);
	
	return 0;
}