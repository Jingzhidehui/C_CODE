#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9

#define EASY_COUNT 10 //�򵥰汾 10����
#define ORDINART_COUNT 30 //��ͨ�汾 30����
#define DIFFICULT_COUNT 60 //���Ѱ汾60����

#define ROWS ROW+2
#define COLS COL+2

//��ʼ��
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//������
void SetMine(char board[ROWS][COLS], int row, int col);
//ɨ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);