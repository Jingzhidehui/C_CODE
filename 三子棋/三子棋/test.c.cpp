#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include <conio.h>
#include"game.h"
#include"game.c.cpp"


//������������Ϸ



//��Ϸ��ʵ��
void game()
{
	char ret = 0;
	//��������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		
		//��������
		ComputerMove(board, ROW, COL);
		system("cls");
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
		printf("�����������\n");
		_getch();
		system("cls");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
		printf("�����������\n");
		_getch();
		system("cls");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
		printf("�����������\n");
		_getch();
		system("cls");
	}
}




void menu()
{
	printf("**************************\n");
	printf("******1.��ʼ    0.�˳�****\n");
	printf("**************************\n");

}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ/n");
			break;
		default:
			printf("�����������������\n");
			break;

		}
	} while (input);

}



int main()
{
	
	test();

     return 0;

}