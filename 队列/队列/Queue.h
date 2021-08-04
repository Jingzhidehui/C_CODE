#pragma once

#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>

typedef int QDataType;

typedef struct QueueNode;

typedef struct QueueNode
{
	struct QueueNode* next;//ָ����һ���ڵ�
	QDataType data;
}QNode;

typedef struct Queue
{
	QNode* head;//ͷָ�룬ָ���һ���ڵ�
	QNode* tail;//βָ�룬ָ�����һ���ڵ�
}Queue;

//��ʼ��
void QueueInit(Queue* pq);

//����
void QueueDestory(Queue* pq);

//��β��
void QueuePush(Queue* pq, QDataType x);

//��β��
void QueuePop(Queue* pq);

//ȡ��ͷ������
QDataType QueueFront(Queue* pq);
//ȡ��β������
QDataType QueueBack(Queue* pq);

//����
int QueueSize(Queue* pq);

//�п�
bool QueueEmpty(Queue* pq);