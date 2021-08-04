#pragma once

#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>

typedef int QDataType;

typedef struct QueueNode;

typedef struct QueueNode
{
	struct QueueNode* next;//指向下一个节点
	QDataType data;
}QNode;

typedef struct Queue
{
	QNode* head;//头指针，指向第一个节点
	QNode* tail;//尾指针，指向最后一个节点
}Queue;

//初始化
void QueueInit(Queue* pq);

//销毁
void QueueDestory(Queue* pq);

//队尾入
void QueuePush(Queue* pq, QDataType x);

//队尾出
void QueuePop(Queue* pq);

//取队头的数据
QDataType QueueFront(Queue* pq);
//取队尾的数据
QDataType QueueBack(Queue* pq);

//个数
int QueueSize(Queue* pq);

//判空
bool QueueEmpty(Queue* pq);