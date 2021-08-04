#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"

int main()
{
	mciSendString(L"open 1.mp3 alias bkmusic", NULL, 0, NULL);//打开音乐文件
	mciSendString(L"play bkmusic repeat", NULL, 0, NULL);     //循环播放音乐
	srand((unsigned int)time(NULL));//随机数种子
	struct Snake snake;//创建蛇
	struct Food food;//创建食物

	hwnd = initgraph(640, 480);//初始化窗口
	setbkcolor(WHITE);//设置窗口为白色



	int key = 0;//接收最终的弹窗指令，判断是否继续游戏

	do
	{
		initSnakeFood(&snake,&food);//初始化蛇和食物的分数
		key = 0;
		while (1)
		{
			BeginBatchDraw();////缓冲区打印，防止闪屏
			cleardevice();//刷新
			if (food.flag == 0)
			{
				initFood(&food, &snake);
			}
			drawFood(&food);//画食物
			eatFood(&food, &snake);//是否吃食物
			showGrade(&food);//打印食物
			drawSnake(&snake);//画蛇
			EndBatchDraw();//缓冲区打印
			if (snakeDie(&snake))//判断是否四方
			{
				break;
			}
			if (winGame(&snake))//判断是否胜利
			{
				break;
			}

			while (_kbhit())//如果有按键则进入，否则不进入循环
			{
				pauseMoment();//暂停
				keyDown(&snake);
			}
			moveSnake(&snake);//移动蛇
			Sleep(100);
		}
		key=MessageBox(hwnd, L"点击确定重新开始", L"游戏结束", MB_OKCANCEL);
		
	} while (key==IDOK);//如果点击确定，则重新开始游戏




	closegraph();//关闭图形模式，释放由图形系统分配的所有内存

	system("pause");
	return 0;
}