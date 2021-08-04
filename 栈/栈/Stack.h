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

//初始化
void StackInit(ST* ps);

//销毁
void StackDestory(ST* ps);

//入栈
void StackPush(ST* ps, STDataType x);

//出栈
void StackPop(ST* ps);
//取栈顶的数据
STDataType StackTop(ST* ps);
//求数据的个数
int StackSize(ST* ps);
//判断是否为空
bool StackEmpty(ST* ps);