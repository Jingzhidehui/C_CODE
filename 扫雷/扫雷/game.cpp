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
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//打印行号
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
		//通过随机数来布雷
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//第一次踩雷以后重新布雷
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


//获取雷个数
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

//展开周围的雷
void OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	//如果周围没有雷
	if (get_mine_count(mine, x, y) == 0)
	{
		show[x][y] = ' ';//先将周围的8个格子全变成空格，再进行每个格子的判断，用递归展开
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
	else //如果周围的有雷则显示周围雷的个数。
	{
		show[x][y] = get_mine_count(mine, x, y) + '0';
	}
}
//判断是否胜利
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
	int flag = 0;//如果第一次扫雷就是雷，flag变为1并将雷换位置
	while (1)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//第一次踩雷
			if ((mine[x][y] == '1')&&(flag==0))
			{
				flag = 1;
				mine[x][y] = '0';
				NewSetMine(mine, row, col, x, y);//将雷放到别的地方
				OpenMine(mine, show, x, y);
				system("cls");
				DisplayBoard(show, row, col);
			}
			//第一次以后踩雷
			else if ((mine[x][y] == '1')&&(flag==1))
			{
				printf("排雷失败\n");
				printf("雷的分布情况如下：\n");
				DisplayBoard(mine, row, col);
				break;
			}
			//不是雷
			else
			{
				flag = 1;
				//计算x，y周围几个雷并展开
				OpenMine(mine, show, x, y);
				system("cls");
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
		if (Win(show, ROW, COL) == EASY_COUNT)//判断此时棋盘剩余的*数目，如果等于雷数，则玩家排雷成功。
		{
			printf("恭喜你排雷成功\n");
			printf("雷的分布情况如下：\n");
			DisplayBoard(mine, row, col);
			break;
		}


	}


}



