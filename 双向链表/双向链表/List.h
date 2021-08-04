#pragma once
#include<stdio.h>
#include<assert.h>
typedef int LTDataType;



//��ͷ˫��ѭ������
//���ŵ�����������λ�ò�����Ҷ���O(1)
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}ListNode;

//��ʼ��
ListNode* ListInit();
//����
void ListDestory(ListNode* phead);

//��ӡ
void ListPrint(ListNode* phead);

//β��
void ListPushBack(ListNode* phead,LTDataType x);

//ͷ��
void ListPushFront(ListNode* phead, LTDataType x);

//ͷɾ
void ListPopFront(ListNode* phead);

//βɾ
void ListPopBack(ListNode* phead);

//����
ListNode* ListFind(ListNode* phead, LTDataType x);

//posλ��֮ǰ����x
void ListInsert(ListNode* pos, LTDataType x);

//ɾ��posλ�õ�ֵ
void ListErase(ListNode* pos);