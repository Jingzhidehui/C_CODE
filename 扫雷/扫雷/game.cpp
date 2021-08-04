#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"


void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//��ӡ�к�
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		//ͨ�������������
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//��һ�β����Ժ����²���
void NewSetMine(char board[ROWS][COLS], int row, int col,int x,int y)
{
	int count = 1;
	while (count)
	{
		int a = rand() % row + 1;
		int b = rand() % col + 1;
		if (board[a][b] == ' '&&a!=x&&b!=y)
		{
			board[a][b] = '1';
			count--;
		}
	}
}


//��ȡ�׸���
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

//չ����Χ����
void OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	//�����Χû����
	if (get_mine_count(mine, x, y) == 0)
	{
		show[x][y] = ' ';//�Ƚ���Χ��8������ȫ��ɿո��ٽ���ÿ�����ӵ��жϣ��õݹ�չ��
		if ((x - 1) > 0 && (y - 1) > 0 && (show[x - 1][y - 1] == '*'))
			OpenMine(mine, show, x - 1, y - 1);
		if ((x - 1) > 0 && (y) > 0 && (show[x - 1][y] == '*'))
			OpenMine(mine, show, x - 1, y);
		if ((x - 1) > 0 && (y + 1) > 0 && (show[x - 1][y + 1] == '*'))
			OpenMine(mine, show, x - 1, y + 1);
		if ((x) > 0 && (y - 1) > 0 && (show[x][y - 1] == '*'))
			OpenMine(mine, show, x, y - 1);
		if ((x) > 0 && (y + 1) > 0 && (show[x][y + 1] == '*'))
			OpenMine(mine, show, x, y + 1);
		if ((x + 1) > 0 && (y - 1) > 0 && (show[x + 1][y - 1] == '*'))
			OpenMine(mine, show, x + 1, y - 1);
		if ((x + 1) > 0 && (y) > 0 && (show[x + 1][y] == '*'))
			OpenMine(mine, show, x + 1, y);
		if ((x + 1) > 0 && (y + 1) > 0 && (show[x + 1][y + 1] == '*'))
			OpenMine(mine, show, x + 1, y + 1);
	}
	else //�����Χ����������ʾ��Χ�׵ĸ�����
	{
		show[x][y] = get_mine_count(mine, x, y) + '0';
	}
}
//�ж��Ƿ�ʤ��
int Win(char show[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0, count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count;
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int flag = 0;//�����һ��ɨ�׾����ף�flag��Ϊ1�����׻�λ��
	while (1)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//��һ�β���
			if ((mine[x][y] == '1')&&(flag==0))
			{
				flag = 1;
				mine[x][y] = '0';
				NewSetMine(mine, row, col, x, y);//���׷ŵ���ĵط�
				OpenMine(mine, show, x, y);
				system("cls");
				DisplayBoard(show, row, col);
			}
			//��һ���Ժ����
			else if ((mine[x][y] == '1')&&(flag==1))
			{
				printf("����ʧ��\n");
				printf("�׵ķֲ�������£�\n");
				DisplayBoard(mine, row, col);
				break;
			}
			//������
			else
			{
				flag = 1;
				//����x��y��Χ�����ײ�չ��
				OpenMine(mine, show, x, y);
				system("cls");
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
		if (Win(show, ROW, COL) == EASY_COUNT)//�жϴ�ʱ����ʣ���*��Ŀ�����������������������׳ɹ���
		{
			printf("��ϲ�����׳ɹ�\n");
			printf("�׵ķֲ�������£�\n");
			DisplayBoard(mine, row, col);
			break;
		}


	}


}



