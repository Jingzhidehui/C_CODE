#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"

int main()
{
	mciSendString(L"open 1.mp3 alias bkmusic", NULL, 0, NULL);//�������ļ�
	mciSendString(L"play bkmusic repeat", NULL, 0, NULL);     //ѭ����������
	srand((unsigned int)time(NULL));//���������
	struct Snake snake;//������
	struct Food food;//����ʳ��

	hwnd = initgraph(640, 480);//��ʼ������
	setbkcolor(WHITE);//���ô���Ϊ��ɫ



	int key = 0;//�������յĵ���ָ��ж��Ƿ������Ϸ

	do
	{
		initSnakeFood(&snake,&food);//��ʼ���ߺ�ʳ��ķ���
		key = 0;
		while (1)
		{
			BeginBatchDraw();////��������ӡ����ֹ����
			cleardevice();//ˢ��
			if (food.flag == 0)
			{
				initFood(&food, &snake);
			}
			drawFood(&food);//��ʳ��
			eatFood(&food, &snake);//�Ƿ��ʳ��
			showGrade(&food);//��ӡʳ��
			drawSnake(&snake);//����
			EndBatchDraw();//��������ӡ
			if (snakeDie(&snake))//�ж��Ƿ��ķ�
			{
				break;
			}
			if (winGame(&snake))//�ж��Ƿ�ʤ��
			{
				break;
			}

			while (_kbhit())//����а�������룬���򲻽���ѭ��
			{
				pauseMoment();//��ͣ
				keyDown(&snake);
			}
			moveSnake(&snake);//�ƶ���
			Sleep(100);
		}
		key=MessageBox(hwnd, L"���ȷ�����¿�ʼ", L"��Ϸ����", MB_OKCANCEL);
		
	} while (key==IDOK);//������ȷ���������¿�ʼ��Ϸ




	closegraph();//�ر�ͼ��ģʽ���ͷ���ͼ��ϵͳ����������ڴ�

	system("pause");
	return 0;
}