#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

//��ʼ��
void StackInit(ST* ps);

//����
void StackDestory(ST* ps);

//��ջ
void StackPush(ST* ps, STDataType x);

//��ջ
void StackPop(ST* ps);
//ȡջ��������
STDataType StackTop(ST* ps);
//�����ݵĸ���
int StackSize(ST* ps);
//�ж��Ƿ�Ϊ��
bool StackEmpty(ST* ps);