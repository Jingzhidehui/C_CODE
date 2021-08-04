#define  _CRT_SECURE_NO_WARNINGS
#include"List.h"


//创建新节点
ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

//初始化
ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
//销毁
void ListDestory(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;//cur是第一个节点
	while (cur != phead)
	{
		//next指向cur下一个节点，因为cur释放以后就没法通过cur找到下一个节点了
		ListNode* next = cur->next;
		free(cur);
		cur = next;//cur指向cur下一个节点
	}
	free(phead);//释放掉哨兵位节点
	phead = NULL;

}

// 打印
void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;//cur指向第一个节点
	while (cur!=phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;//cur指向下一个节点
	}
	printf("\n");
}

//尾插 
void ListPushBack(ListNode* phead, LTDataType x)
{
	//方法1
	/*assert(phead);*/
	////如果是一个节点的情况，也没问题
	//ListNode* tail = phead->prev;//最后一个节点
	//ListNode* newnode = BuyListNode(x);//创建新的节点
	//tail->next = newnode;//最后一个节点指向新的节点
	//newnode->next = phead;//新的节点指向哨兵节点

	//newnode->prev = tail;//新的节点指向最后一个节点
	//phead->prev = newnode;//哨兵节点指向新的节点

	//方法2
	assert(phead);
	ListInsert(phead, x);
}

//头插
void ListPushFront(ListNode* phead, LTDataType x)
{
	//方法1
	/*assert(phead);*/
	////如果是一个节点的情况，也没问题
	//ListNode* first = phead->next;//第一个节点
	//ListNode* newnode = BuyListNode(x);//创建新的节点

	//phead->next=newnode;//哨兵节点指向新的节点
	//newnode->prev = phead;//新的节点指向哨兵节点

	//newnode->next = first;//新的节点指向第一个节点
	//first->prev = newnode;//第一个节点指向新的节点

	//方法2
	assert(phead);
	ListInsert(phead->next, x);
}

//头删
void ListPopFront(ListNode* phead)
{
	//方法1
	//assert(phead);
	//assert(phead->next!=phead);//如果只剩哨兵节点，直接报错，因为哨兵结点不能删除
	//ListNode* first = phead->next;//第一个节点
	//ListNode* second = first->next;//第二个节点

	//phead->next = second;//哨兵节点指向第二个节点
	//second->prev = phead;//第二个节点指向哨兵节点

	//free(first);
	//first = NULL;

	//方法2
	ListErase(phead->next);
}

//尾删
void ListPopBack(ListNode* phead)
{
	//方法1
	//assert(phead);
	//assert(phead->next != phead);//如果只剩哨兵节点，直接报错，因为哨兵结点不能删除
	//ListNode* tail = phead->prev;//最后一个节点
	//ListNode* prev = tail->prev;//倒数第二个节点

	//prev->next = phead;//倒数第二个节点指向哨兵节点
	//phead->prev = prev;//哨兵节点指向倒数第二个节点


	//方法2
	ListErase(phead->prev);
}

//查找
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;//cur指向第一个节点
	while (cur != phead)//如果cur为哨兵节点，则说明找了一圈没找到
	{
		if (cur->data == x)
		{
			return cur;//找到以后返回指针
		}
		cur = cur->next;//cur指向下一个节点
	}
	return NULL;
}



//pos位置之前插入x
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* prev = pos->prev;//找到pos前一个节点
	ListNode* newnode = BuyListNode(x);//创建新的节点

	prev->next = newnode;//pos前一个节点指向新的节点
	newnode->prev = prev;//新节点指向前一个节点

	newnode->next = pos;//新节点指向pos节点
	pos->prev = newnode;//pos节点指向新的节点
}

//删除pos位置的值
void ListErase(ListNode* pos)
{
	ListNode* prev = pos->prev;//找到pos前一个节点

	prev->next = pos->next;//pos前一个节点指向pos后一个节点
	pos->next->prev = prev;//pos后一个节点指向pos前一个节点

	free(pos);
	pos = NULL;
}
