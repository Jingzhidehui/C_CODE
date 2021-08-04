#define  _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

//初始化
void QueueInit(Queue* pq)
{
	assert(pq);

	pq->head = NULL;
	pq->tail = NULL;
}

//销毁
void QueueDestory(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
}

//队尾入
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}

}

//队头出
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	//如果只有一个节点，释放后就没有节点了
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;//由于没有节点，头指针和尾指针都为空
	}
	else
	{
		//保存下一个节点
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;//头指针指向下一个节点
	}
	
}

//取队头的数据
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->head->data;
}
//取队尾的数据
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->tail->data;
}
//个数
int QueueSize(Queue* pq)
{
	assert(pq);
	int size = 0;
	QNode* cur = pq->head;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}

//判空
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}