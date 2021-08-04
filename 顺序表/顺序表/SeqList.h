#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#define MAX_SIZE 10

typedef int SQDataType;

//��̬˳�������˲����ã������˻��˷�ʱ��
//ʹ�ö�̬˳���
typedef struct SeqList
{
	SQDataType* a;
	int size;  //��Ч���ݵĸ���
	int capacity;//����
}SL;

//��ɾ��ĵȽӿں���

//��ʼ��
void SeqListInit(SL* ps);

//β��
void SeqListPushBack(SL* ps, SQDataType x);

//ͷ��
void SeqListPushFront(SL* ps, SQDataType x);

//βɾ
void SeqListPopBack(SL* ps);

//ͷɾ
void SeqListPopFront(SL* ps);

//��ӡ
void SeqListPrint(SL* ps);

//����λ�ò���
void SeqListInsert(SL* ps, int pos, SQDataType x);

//����λ��ɾ��
void SeqListErase(SL* ps, int pos);

//���ٿռ�
void SeqListDestory(SL* ps);

//����
int SeqListFind(SL* ps, SQDataType x);

//�޸�
void SeqListModity(SL* ps, int pos, SQDataType x);

//ð������
void SeqListBubleSort(SL* ps);

//���˳���
void clear(SL* ps);