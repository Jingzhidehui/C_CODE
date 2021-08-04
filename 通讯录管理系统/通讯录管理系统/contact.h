#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

#define MAX_NAME 10//���ֵĴ�С
#define MAX_SEX 5//�Ա��С
#define MAX_TELE 15//�绰��С
#define MAX_ADDR 30//��ַ��С
#define DEFAULT_SZ 3 //ͨѶ¼Ĭ�ϵĴ�С

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

//ͨѶ¼����
struct Contact
{
	struct PeoInfo* data;//�����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
};

//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);

//����ͨѶ¼����
void AddContact(struct Contact* ps);

//��ӡͨѶ¼��Ϣ
void ShowContact(const struct Contact* ps);

//ɾ��ͨѶ¼��Ϣ
void DelContact(struct Contact* ps);

//����ͨѶ¼��Ϣ
void SearchContact(const struct Contact* ps);

//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps);

//����������
void SortContact(struct Contact* ps);

//�ͷŶ�̬���ٵ��ڴ�
void DestroyContact(struct Contact* ps);

//����ͨѶ¼
void SaveContact(struct Contact* ps);

//�����ļ��е���Ϣ��ͨѶ¼
void LoadContact(struct Contact* ps);

//���ͨѶ¼
void ClearContact(struct Contact* ps);