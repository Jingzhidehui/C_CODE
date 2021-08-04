#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#define MAX_SIZE 10

typedef int SQDataType;

//静态顺序表给少了不够用，给多了会浪费时间
//使用动态顺序表
typedef struct SeqList
{
	SQDataType* a;
	int size;  //有效数据的个数
	int capacity;//容量
}SL;

//增删查改等接口函数

//初始化
void SeqListInit(SL* ps);

//尾插
void SeqListPushBack(SL* ps, SQDataType x);

//头插
void SeqListPushFront(SL* ps, SQDataType x);

//尾删
void SeqListPopBack(SL* ps);

//头删
void SeqListPopFront(SL* ps);

//打印
void SeqListPrint(SL* ps);

//任意位置插入
void SeqListInsert(SL* ps, int pos, SQDataType x);

//任意位置删除
void SeqListErase(SL* ps, int pos);

//销毁空间
void SeqListDestory(SL* ps);

//查找
int SeqListFind(SL* ps, SQDataType x);

//修改
void SeqListModity(SL* ps, int pos, SQDataType x);

//冒泡排序
void SeqListBubleSort(SL* ps);

//清空顺序表
void clear(SL* ps);