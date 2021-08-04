#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

#define MAX_NAME 10//名字的大小
#define MAX_SEX 5//性别大小
#define MAX_TELE 15//电话大小
#define MAX_ADDR 30//地址大小
#define DEFAULT_SZ 3 //通讯录默认的大小

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE,
	CLEAR
};
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo* data;//存放信息
	int size;//记录当前已经有的元素个数
	int capacity;//当前通讯录的最大容量
};

//初始化通讯录
void InitContact(struct Contact* ps);

//增加通讯录内容
void AddContact(struct Contact* ps);

//打印通讯录信息
void ShowContact(const struct Contact* ps);

//删除通讯录信息
void DelContact(struct Contact* ps);

//查找通讯录信息
void SearchContact(const struct Contact* ps);

//修改指定联系人
void ModifyContact(struct Contact* ps);

//按姓名排序
void SortContact(struct Contact* ps);

//释放动态开辟的内存
void DestroyContact(struct Contact* ps);

//保存通讯录
void SaveContact(struct Contact* ps);

//加载文件中的信息到通讯录
void LoadContact(struct Contact* ps);

//清空通讯录
void ClearContact(struct Contact* ps);