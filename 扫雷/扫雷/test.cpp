#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("***********************\n");
	printf("*****   1.play ********\n");
	printf("*****   0.exit ********\n");
	printf("***********************\n");

}

void game()
{
	//雷的信息存储
	//布置好的雷11*11
	char mine[ROWS][COLS] = { 0 };
	//排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	//扫雷
	FindMine(mine,show, ROW, COL);
	//游戏完成后清屏
	system("pause");
	system("cls");
}
void test()
{
	
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}


	} while (input);
}


int main()
{
	test();

	return 0;

}