#pragma once
#include<stdio.h>
typedef int SLTDataType;
struct SListNode//������
{
	SLTDataType data;//�����򣬴洢��Ҫ������
	struct SListNode* next;//ָ���򣬴洢��һ���ڵ��ָ��
};
typedef struct SListNode SLTNode;
