#define  _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

//��ʼ��
void QueueInit(Queue* pq)
{
	assert(pq);

	pq->head = NULL;
	pq->tail = NULL;
}

//����
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

//��β��
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

//��ͷ��
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	//���ֻ��һ���ڵ㣬�ͷź��û�нڵ���
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;//����û�нڵ㣬ͷָ���βָ�붼Ϊ��
	}
	else
	{
		//������һ���ڵ�
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;//ͷָ��ָ����һ���ڵ�
	}
	
}

//ȡ��ͷ������
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->head->data;
}
//ȡ��β������
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->tail->data;
}
//����
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

//�п�
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}