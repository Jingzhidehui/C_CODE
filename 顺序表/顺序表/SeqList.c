#define  _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"


//初始化
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//如果链表空间为空
void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		//满了，扩容
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * sizeof(SQDataType));
		if (tmp == NULL)
		{
			printf("扩容失败\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
		}
	}
}
//尾插
void SeqListPushBack(SL* ps, SQDataType x)
{
	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;

}

//头插
void SeqListPushFront(SL* ps, SQDataType x)
{
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end>=0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}

//尾删
void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;


}

//头删
void SeqListPopFront(SL* ps)
{
	assert(ps->size > 0);
	int start = 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];

		start++;
	}
	ps->size--;
}

//打印
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}


//任意位置插入
void SeqListInsert(SL* ps, int pos, SQDataType x)
{
	assert(pos<ps->size);
	SeqListCheckCapacity(ps);

	int end = ps->size-1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;

}

//任意位置删除
void SeqListErase(SL* ps, int pos)
{
	assert(ps->size > 0);
	int start = pos+1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];

		start++;
	}
	ps->size--;
}

//销毁空间
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a=NULL;
	ps->capacity = ps->size = 0;
}

//查找
int SeqListFind(SL* ps, SQDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

//修改
void SeqListModity(SL* ps, int pos, SQDataType x)
{
	assert(pos < ps->size);
	ps->a[pos] = x;

}

//冒泡排序
void SeqListBubleSort(SL* ps)
{
	//冒泡排序，每趟比较可以确定一个最大(最小)的数，所以需要size-1趟(最后一次自己跟自己比较不需要)
	for (int i = 0; i < ps->size - 1; ++i)
	{
		//每趟中需要比较size-i-1次(前面比较完的i个数不需要重复比较，最后一次自己跟自己比较不需要)
		for (int j = 0; j < ps->size - i - 1; ++j)
		{
			if (ps->a[j] > ps->a[j + 1])
			{
				SQDataType tmp = ps->a[j];
				ps->a[j] = ps->a[j + 1];
				ps->a[j + 1] = tmp;
			}
		}
	}
}

//清空顺序表
void clear(SL* ps)
{
	ps->size = 0;
}