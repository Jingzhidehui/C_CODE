#pragma once
#include<stdio.h>
#include<assert.h>
typedef int LTDataType;



//带头双向循环链表
//最优的链表，在任意位置插入查找都是O(1)
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}ListNode;

//初始化
ListNode* ListInit();
//销毁
void ListDestory(ListNode* phead);

//打印
void ListPrint(ListNode* phead);

//尾插
void ListPushBack(ListNode* phead,LTDataType x);

//头插
void ListPushFront(ListNode* phead, LTDataType x);

//头删
void ListPopFront(ListNode* phead);

//尾删
void ListPopBack(ListNode* phead);

//查找
ListNode* ListFind(ListNode* phead, LTDataType x);

//pos位置之前插入x
void ListInsert(ListNode* pos, LTDataType x);

//删除pos位置的值
void ListErase(ListNode* pos);