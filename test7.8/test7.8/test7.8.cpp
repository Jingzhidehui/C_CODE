#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i;
//	int j = 0;
//	int arr[10] = { 0 };
//
//	printf("����������1-10ֻ����Ĵ���������������0����������1:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == 1)
//		{
//			j ^= (1 << i);
//		}
//	}
//	printf("�ж����ǵ�%dƿ", j);
//	return 0;
//}
//
//void Fun(char str[])
//{
//	char* p =str;
//	char arr[20];
//	while (*p != '\0')
//	{
//		if (*p == ' ')
//		{
//			strcpy(arr, p + 1);
//			*p = '%';
//			*(p + 1) = '2';
//			*(p + 2) = '0';
//			strcpy(p + 3, arr);
//			p = p + 3;
//		}
//		else
//		{
//			p++;
//		}
//	}
//}
//int main()
//{
//	char arr[] = "abc defgx yz";
//	Fun(arr);
//	printf("%s",arr);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i,n;
//	int j;
//	int sum = 0;
//	int ret = 1;//���ڴ�Ž׳˵�ֵ
//	scanf("%d", &n);
//    
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;//��1-n�Ľ׳���sum���
//	}
//	printf("%d",sum);
//
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;//���Ԫ���±�
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//�ұ�Ԫ���±�
//	int key = 11;//Ҫ�ҵ�Ԫ��
//	int mid = 0;//�м�Ԫ���±�
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//	{
//		printf("�ҵ���,�±���%d\n", mid);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//if (strcmp(password, arr1) == 0)
//	return 0;
//}


//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char password[10] = "";
//	char arr1[] = "123456";
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; ++i)
//	{
//		printf("����������:");
//		scanf("%s", password);
//		if (strcmp(password, arr1) == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (i == 3)
//		printf("�����������\n");
//	else
//		printf("��½�ɹ�\n");
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.��ʼ****************\n");
//	printf("*********** 0.�˳�****************\n");
//	printf("**********************************\n");
//}
//
//void game()
//{
//	int num = rand() % 100 + 1;
//	int input = 0;
//	int count=0;
//	while (1)
//	{
//		printf("������µ�����>:");
//		scanf("%d", &input);
//		if (input > num)
//		{
//	
//			printf("�´���\n");
//			count++;
//
//		}
//		else if (input < num)
//		{
//			
//			printf("��С��\n");
//			count++;
//	
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			system("pause");
//			system("cls");
//			break;
//		}
//		if (count == 5)
//		{
//			printf("�²�������꣬��Ϸʧ��\n");
//			system("pause");
//			system("cls");
//			break;
//
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ�����,����������!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int a = 10;
//int main()
//{
//	int a = 5;
//	cout <<::a << endl;
//
//
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	double** a[3][4];
//	double* b[4];
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(b));
//
//
//
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char acHello[] = "hello\0world"; 
//	char acNew[15] = { 0 }; 
//	strcpy(acNew, acHello);
//
//	printf("%d\n", strlen(acNew));
//	printf("%d\n", sizeof(acHello));
//}

//#include<stdio.h>
//#pragma pack(4)/*����ѡ���ʾ4�ֽڶ��� ƽ̨��VS2013�����ԣ�C����*/
//int main(int argc, char* argv[]) 
//{
//	struct tagTest1 
//	{ 
//		short a; 
//		char d; 
//		long b; 
//		long c; 
//	};
//	struct tagTest2 
//	{ 
//		long b;
//		short c;
//		char d; 
//		long a;
//	};
//	struct tagTest3
//	{ 
//		short c;
//		long b; 
//		char d;
//		long a; 
//	};
//	struct tagTest1 stT1; struct tagTest2 stT2; struct tagTest3 stT3;
//   printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3)); 
//   return 0;
//}
//#pragma pack()
//
//#include<stdio.h> 
//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//int main()
//{ 
//	int j = 4; 
//	int m = 1; 
//	int k; 
//	k = fun(j, m);
//	printf("%d\n,", k);
//	k = fun(j, m); 
//	printf("%d\n", k); 
//	return 0;
//}


//#include<stdio.h>
//int fun(unsigned int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 8; i++)
//	{
//		if (n & (1 << i))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//
//	printf("%d", fun(-7));
//}


#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
//��ʼ��
typedef int QDataType;
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
    if ((pq == NULL) || (pq->head == NULL))
    {
        ;
    }

    //���ֻ��һ���ڵ㣬�ͷź��û�нڵ���
    else if (pq->head->next == NULL)
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
    if (pq && pq->head)
    {
        return pq->head->data;
    }
    else {
        return NULL;
    }

}
//ȡ��β������
QDataType QueueBack(Queue* pq)
{
    if (pq && pq->head)
    {
        return pq->tail->data;
    }
    else {
        return NULL;
    }
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


typedef struct {
    Queue q1;
    Queue q2;

} MyStack;

/** Initialize your data structure here. */

MyStack* myStackCreate() {
    MyStack* ps = (MyStack*)malloc(sizeof(MyStack));
    if (ps == NULL)
    {
        exit(-1);
    }
    QueueInit(&ps->q1);
    QueueInit(&ps->q2);
    return ps;

}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
    //�����ݣ�����Ϊ�յĶ�����
    //�����ݣ��Ѳ�Ϊ�յĶ������ݵ���Ϊ�գ�ֱ��ֻʣ���һ��
    if (!QueueEmpty(&obj->q1))
    {
        QueuePush(&obj->q1, x);
    }
    else
    {
        QueuePush(&obj->q2, x);
    }

}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
    //��ʱq1��q2˭�ǿ�δ֪�����յ��Ǹ�����emptQ
    Queue* emptyQ = &obj->q1;
    Queue* nonemptyQ = &obj->q2;
    if (!(emptyQ = &obj->q1))
    {
        emptyQ = &obj->q2;
        nonemptyQ = &obj->q1;
    }
    //��������
    while (QueueSize(nonemptyQ) > 1)
    {
        QueuePush(emptyQ, QueueFront(nonemptyQ));
        QueuePop(nonemptyQ);
    }
    int top = QueueFront(nonemptyQ);
    //ɾ�����ʣ�µ�����
    QueuePop(nonemptyQ);
    return top;

}

/** Get the top element. */
int myStackTop(MyStack* obj) {
    if (!QueueEmpty(&obj->q1))
    {
        return QueueBack(&obj->q1);
    }
    else
    {
        return QueueBack(&obj->q2);
    }

}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
    return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);

}

void myStackFree(MyStack* obj) {
    QueueDestory(&obj->q1);
    QueueDestory(&obj->q2);
    free(obj);
}
int main()
{
    MyStack* st= myStackCreate();
    myStackPush(st, 1);
    myStackPush(st, 2);
    printf("%d  ", myStackTop(st));
    printf("%d  ", myStackPop(st));
    printf("%d  ", myStackPop(st));
    printf("%d  ", myStackEmpty(st));
}
//��ͷ��
void QueuePop(Queue* pq)
{
    if ((pq == NULL) || (pq->head == NULL))
    {
        ;
    }

    //���ֻ��һ���ڵ㣬�ͷź��û�нڵ���
    else if (pq->head->next == NULL)
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