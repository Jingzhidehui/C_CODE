#define  _CRT_SECURE_NO_WARNINGS
#include"List.h"


//�����½ڵ�
ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

//��ʼ��
ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
//����
void ListDestory(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;//cur�ǵ�һ���ڵ�
	while (cur != phead)
	{
		//nextָ��cur��һ���ڵ㣬��Ϊcur�ͷ��Ժ��û��ͨ��cur�ҵ���һ���ڵ���
		ListNode* next = cur->next;
		free(cur);
		cur = next;//curָ��cur��һ���ڵ�
	}
	free(phead);//�ͷŵ��ڱ�λ�ڵ�
	phead = NULL;

}

// ��ӡ
void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;//curָ���һ���ڵ�
	while (cur!=phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;//curָ����һ���ڵ�
	}
	printf("\n");
}

//β�� 
void ListPushBack(ListNode* phead, LTDataType x)
{
	//����1
	/*assert(phead);*/
	////�����һ���ڵ�������Ҳû����
	//ListNode* tail = phead->prev;//���һ���ڵ�
	//ListNode* newnode = BuyListNode(x);//�����µĽڵ�
	//tail->next = newnode;//���һ���ڵ�ָ���µĽڵ�
	//newnode->next = phead;//�µĽڵ�ָ���ڱ��ڵ�

	//newnode->prev = tail;//�µĽڵ�ָ�����һ���ڵ�
	//phead->prev = newnode;//�ڱ��ڵ�ָ���µĽڵ�

	//����2
	assert(phead);
	ListInsert(phead, x);
}

//ͷ��
void ListPushFront(ListNode* phead, LTDataType x)
{
	//����1
	/*assert(phead);*/
	////�����һ���ڵ�������Ҳû����
	//ListNode* first = phead->next;//��һ���ڵ�
	//ListNode* newnode = BuyListNode(x);//�����µĽڵ�

	//phead->next=newnode;//�ڱ��ڵ�ָ���µĽڵ�
	//newnode->prev = phead;//�µĽڵ�ָ���ڱ��ڵ�

	//newnode->next = first;//�µĽڵ�ָ���һ���ڵ�
	//first->prev = newnode;//��һ���ڵ�ָ���µĽڵ�

	//����2
	assert(phead);
	ListInsert(phead->next, x);
}

//ͷɾ
void ListPopFront(ListNode* phead)
{
	//����1
	//assert(phead);
	//assert(phead->next!=phead);//���ֻʣ�ڱ��ڵ㣬ֱ�ӱ�����Ϊ�ڱ���㲻��ɾ��
	//ListNode* first = phead->next;//��һ���ڵ�
	//ListNode* second = first->next;//�ڶ����ڵ�

	//phead->next = second;//�ڱ��ڵ�ָ��ڶ����ڵ�
	//second->prev = phead;//�ڶ����ڵ�ָ���ڱ��ڵ�

	//free(first);
	//first = NULL;

	//����2
	ListErase(phead->next);
}

//βɾ
void ListPopBack(ListNode* phead)
{
	//����1
	//assert(phead);
	//assert(phead->next != phead);//���ֻʣ�ڱ��ڵ㣬ֱ�ӱ�����Ϊ�ڱ���㲻��ɾ��
	//ListNode* tail = phead->prev;//���һ���ڵ�
	//ListNode* prev = tail->prev;//�����ڶ����ڵ�

	//prev->next = phead;//�����ڶ����ڵ�ָ���ڱ��ڵ�
	//phead->prev = prev;//�ڱ��ڵ�ָ�����ڶ����ڵ�


	//����2
	ListErase(phead->prev);
}

//����
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;//curָ���һ���ڵ�
	while (cur != phead)//���curΪ�ڱ��ڵ㣬��˵������һȦû�ҵ�
	{
		if (cur->data == x)
		{
			return cur;//�ҵ��Ժ󷵻�ָ��
		}
		cur = cur->next;//curָ����һ���ڵ�
	}
	return NULL;
}



//posλ��֮ǰ����x
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* prev = pos->prev;//�ҵ�posǰһ���ڵ�
	ListNode* newnode = BuyListNode(x);//�����µĽڵ�

	prev->next = newnode;//posǰһ���ڵ�ָ���µĽڵ�
	newnode->prev = prev;//�½ڵ�ָ��ǰһ���ڵ�

	newnode->next = pos;//�½ڵ�ָ��pos�ڵ�
	pos->prev = newnode;//pos�ڵ�ָ���µĽڵ�
}

//ɾ��posλ�õ�ֵ
void ListErase(ListNode* pos)
{
	ListNode* prev = pos->prev;//�ҵ�posǰһ���ڵ�

	prev->next = pos->next;//posǰһ���ڵ�ָ��pos��һ���ڵ�
	pos->next->prev = prev;//pos��һ���ڵ�ָ��posǰһ���ڵ�

	free(pos);
	pos = NULL;
}
