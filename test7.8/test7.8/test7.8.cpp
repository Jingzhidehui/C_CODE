#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i;
//	int j = 0;
//	int arr[10] = { 0 };
//
//	printf("请依次输入1-10只老鼠的存货情况，活着输入0，死了输入1:\n");
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
//	printf("有毒的是第%d瓶", j);
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
//	int ret = 1;//用于存放阶乘的值
//	scanf("%d", &n);
//    
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;//将1-n的阶乘与sum相加
//	}
//	printf("%d",sum);
//
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;//左边元素下标
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//右边元素下标
//	int key = 11;//要找的元素
//	int mid = 0;//中间元素下标
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
//		printf("找到了,下标是%d\n", mid);
//	}
//	else
//	{
//		printf("找不到\n");
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
//		printf("请输入密码:");
//		scanf("%s", password);
//		if (strcmp(password, arr1) == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (i == 3)
//		printf("输入次数用完\n");
//	else
//		printf("登陆成功\n");
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.开始****************\n");
//	printf("*********** 0.退出****************\n");
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
//		printf("请输入猜的数字>:");
//		scanf("%d", &input);
//		if (input > num)
//		{
//	
//			printf("猜大了\n");
//			count++;
//
//		}
//		else if (input < num)
//		{
//			
//			printf("猜小了\n");
//			count++;
//	
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			system("pause");
//			system("cls");
//			break;
//		}
//		if (count == 5)
//		{
//			printf("猜测次数用完，游戏失败\n");
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
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误,请重新输入!\n");
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
//#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
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
//初始化
typedef int QDataType;
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
    if ((pq == NULL) || (pq->head == NULL))
    {
        ;
    }

    //如果只有一个节点，释放后就没有节点了
    else if (pq->head->next == NULL)
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
    if (pq && pq->head)
    {
        return pq->head->data;
    }
    else {
        return NULL;
    }

}
//取队尾的数据
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
    //入数据，往不为空的队列入
    //出数据，把不为空的队列数据导入为空，直到只剩最后一个
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
    //此时q1，q2谁是空未知，将空的那个交给emptQ
    Queue* emptyQ = &obj->q1;
    Queue* nonemptyQ = &obj->q2;
    if (!(emptyQ = &obj->q1))
    {
        emptyQ = &obj->q2;
        nonemptyQ = &obj->q1;
    }
    //导入数据
    while (QueueSize(nonemptyQ) > 1)
    {
        QueuePush(emptyQ, QueueFront(nonemptyQ));
        QueuePop(nonemptyQ);
    }
    int top = QueueFront(nonemptyQ);
    //删除最后剩下的数据
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
//队头出
void QueuePop(Queue* pq)
{
    if ((pq == NULL) || (pq->head == NULL))
    {
        ;
    }

    //如果只有一个节点，释放后就没有节点了
    else if (pq->head->next == NULL)
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