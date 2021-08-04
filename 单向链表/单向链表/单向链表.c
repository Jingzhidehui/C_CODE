#define  _CRT_SECURE_NO_WARNINGS
#include"SList.h"


//��ӡ
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
//����һ���½ڵ�
SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}
//β��
void SListPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	//���һ��ʼΪ�գ���ôֱ�Ӿ����¿��ٵĽڵ�
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		//�ҵ�β����ָ��
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//ԭ����β���Ӵ������ӵĵ�ַ
		tail->next = newnode;
	}
}
void SListPushBack1(SLTNode* pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	//���һ��ʼΪ�գ���ôֱ�Ӿ����¿��ٵĽڵ�
	if (pphead == NULL)
	{
		pphead = newnode;
	}
	else
	{
		SLTNode* tail = pphead;
		//�ҵ�β����ָ��
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//ԭ����β���Ӵ������ӵĵ�ַ
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