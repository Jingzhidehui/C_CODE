#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9

#define EASY_COUNT 10 //简单版本 10个雷
#define ORDINART_COUNT 30 //普通版本 30个雷
#define DIFFICULT_COUNT 60 //困难版本60个雷

#define ROWS ROW+2
#define COLS COL+2

//初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char board[ROWS][COLS], int row, int col);
//扫雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);