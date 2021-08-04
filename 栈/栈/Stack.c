#define  _CRT_SECURE_NO_WARNINGS
#include"Stack.h"


//初始化
void StackInit(ST* ps)
{
	assert(ps);
	ps->a = (STDataType*)malloc(sizeof(STDataType*) * 4);
	if (ps->a == NULL)
	{
		exit(-1);
	}
	ps->capacity = 4;
	//top初始为0，top指向栈顶元素的下一个元素，top初识为-1，top指向栈顶的元素
	ps->top = 0;
}

//销毁
void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}

//入栈
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = realloc(ps->a, ps->capacity * 2 * sizeof(STDataType*));
		if (tmp == NULL)
		{
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}
	ps->a[ps->top] = x;
	ps->top++;
}

//出栈
void StackPop(ST* ps)
{
	assert(ps);
	ps->top--;
}
//取栈顶的数据
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top>0);
	return ps->a[ps->top - 1];
}
//求数据的个数
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//判断是否为空
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}