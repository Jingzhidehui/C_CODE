#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row, int col);

//判断输赢,告诉我们四种状态
//返回*玩家赢
//返回#电脑赢
//返回Q平局
//返回 C继续
char IsWin(char board[ROW][COL], int row, int col);