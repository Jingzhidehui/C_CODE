#pragma once
#include<stdio.h>
typedef int SLTDataType;
struct SListNode//单链表
{
	SLTDataType data;//数据域，存储需要的数据
	struct SListNode* next;//指针域，存储下一个节点的指针
};
typedef struct SListNode SLTNode;
