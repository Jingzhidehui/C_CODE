#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include <conio.h>
#include"game.h"
#include"game.c.cpp"


//测试三子棋游戏



//游戏的实现
void game()
{
	char ret = 0;
	//设置棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		
		//电脑下棋
		ComputerMove(board, ROW, COL);
		system("cls");
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
		printf("按任意键清屏\n");
		_getch();
		system("cls");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
		printf("按任意键清屏\n");
		_getch();
		system("cls");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
		printf("按任意键清屏\n");
		_getch();
		system("cls");
	}
}




void menu()
{
	printf("**************************\n");
	printf("******1.开始    0.退出****\n");
	printf("**************************\n");

}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏/n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;

		}
	} while (input);

}



int main()
{
	
	test();

     return 0;

}