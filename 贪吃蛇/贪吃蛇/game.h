#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"Winmm.lib")

#define length 100  //�߳���

//1.���ݷ������������ݳ�Ա����
//�������ԣ������ԣ�ʳ������

//��������
typedef struct pointXY
{
	int x;
	int y;
}MYPOINT;

//������
struct Snake
{
	int num;//�ߵĽ���
	MYPOINT xy[length]; //�������100��
	char postion;//�ߵķ���
};
//ʳ�������
struct Food
{
	MYPOINT fdxy;
	int eatgrade=0;//��ʳ��ķ���
	int flag=0;//ʳ���Ƿ���ڣ�0��ʾ���ڣ�1��ʾ������
};
//����
enum movePostion{right=77,left=75,down=80,up=72};

//������
static HWND hwnd = NULL;

//2.���̷�������������
//��ʼ���ߺ�ʳ��
void initSnakeFood(struct Snake*snake, struct Food* food);
//����
void drawSnake(struct Snake* snake);
//�ƶ���
void moveSnake(struct Snake* snake);
//��������
void keyDown(struct Snake* snake);
//��ʼ��ʳ��
void initFood(struct Food*food, struct Snake* snake);
//��ʳ��
void drawFood(struct Food* food);

//��ʳ��
void eatFood(struct Food* food, struct Snake* snake);

//�ж��Ƿ���Ϸ����
int snakeDie(struct Snake* snake);

//�ж���Ϸ�Ƿ�ʤ��
int winGame(struct Snake* snake);

//չʾ����
void showGrade(struct Food* food);

//���ո����ͣ
void pauseMoment();
