#define  _CRT_SECURE_NO_WARNINGS
#include"Stack.h"


//��ʼ��
void StackInit(ST* ps)
{
	assert(ps);
	ps->a = (STDataType*)malloc(sizeof(STDataType*) * 4);
	if (ps->a == NULL)
	{
		exit(-1);
	}
	ps->capacity = 4;
	//top��ʼΪ0��topָ��ջ��Ԫ�ص���һ��Ԫ�أ�top��ʶΪ-1��topָ��ջ����Ԫ��
	ps->top = 0;
}

//����
void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}

//��ջ
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

//��ջ
void StackPop(ST* ps)
{
	assert(ps);
	ps->top--;
}
//ȡջ��������
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top>0);
	return ps->a[ps->top - 1];
}
//�����ݵĸ���
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
//�ж��Ƿ�Ϊ��
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}