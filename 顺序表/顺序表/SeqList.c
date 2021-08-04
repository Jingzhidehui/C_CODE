#define  _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"


//��ʼ��
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//�������ռ�Ϊ��
void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		//���ˣ�����
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * sizeof(SQDataType));
		if (tmp == NULL)
		{
			printf("����ʧ��\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
		}
	}
}
//β��
void SeqListPushBack(SL* ps, SQDataType x)
{
	SeqListCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;

}

//ͷ��
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

//βɾ
void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;


}

//ͷɾ
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

//��ӡ
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}


//����λ�ò���
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

//����λ��ɾ��
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

//���ٿռ�
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a=NULL;
	ps->capacity = ps->size = 0;
}

//����
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

//�޸�
void SeqListModity(SL* ps, int pos, SQDataType x)
{
	assert(pos < ps->size);
	ps->a[pos] = x;

}

//ð������
void SeqListBubleSort(SL* ps)
{
	//ð������ÿ�˱ȽϿ���ȷ��һ�����(��С)������������Ҫsize-1��(���һ���Լ����Լ��Ƚϲ���Ҫ)
	for (int i = 0; i < ps->size - 1; ++i)
	{
		//ÿ������Ҫ�Ƚ�size-i-1��(ǰ��Ƚ����i��������Ҫ�ظ��Ƚϣ����һ���Լ����Լ��Ƚϲ���Ҫ)
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

//���˳���
void clear(SL* ps)
{
	ps->size = 0;
}