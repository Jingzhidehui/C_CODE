#define  _CRT_SECURE_NO_WARNINGS
#undef UNICODE
#undef _UNICODE
#include<windows.h>
#include <graphics.h>//����ͼ�ο�ͷ�ļ�
#include<mmsyscom.h>//������ý���豸�ӿ�ͷ�ļ�
#pragma comment(lib,"Winmm.lib")

//void playBGM()
//{
//    //�����֣����ý���豸�ӿڷ���һ���ַ���
//       mciSendString("open C:\\Users\\86185\\Music\\1.mp3", 0, 0, 0);
//    //��������
//       mciSendString("play C:\\Users\\86185\\Music\\1.mp3", 0, 0, 0);
//    //�ر�����
//     
//}

void change()
{
    //��ȡ���ھ��
    HWND hnd = GetHWnd();
    //���ô��ڱ���
    SetWindowText(hnd, "���Ա���");
    //�������ڣ���ʾ�û�����
    MessageBox(hnd, "��Ϸʧ��", "���ڱ���", MB_ABORTRETRYIGNORE);


}
int main()
{
   /*  ��ʼ����ͼ���ڣ���Ⱥ͸߶�*/
    initgraph(640,480);
    setbkcolor(RGB(203, 221, 244));
    cleardevice();
    change();
   /* COLORREF cf = RGB(100,100,0);
    setbkcolor(cf);
    cleardevice();


    setlinestyle(PS_SOLID, 10);
    setfillcolor(YELLOW);
    setlinecolor(BLUE);
    circle(50, 50, 50);
    fillcircle(50, 150, 50);
    solidcircle(50, 250, 50);

    char arr[10] = "abcd";
    settextcolor(BLUE);
    settextstyle(50, 0, "����");
    setbkmode(TRANSPARENT); 
    outtextxy(50, 100,arr);
    outtextxy(50, 150,"�����ַ���");*/


    setfillcolor(YELLOW);
    fillrectangle(200, 50, 500, 100);
    settextcolor(RGB(155, 0, 15));
    char arr[] = "�����ַ���";
    int width = 300 / 2 - textwidth(arr)/2;
    int height = 50 / 2 - textheight(arr) / 2;
    setbkmode(TRANSPARENT);
    outtextxy(width + 200, height + 50, arr);

  
    while (1)
    {
        ;
    }
    closegraph();//�رջ�ͼ����
    cleardevice();//��ջ�ͼ�豸
    //�������������ɫ
    setfillcolor(GREEN);
    //��һ�����Բ��
    fillcircle(320,150,10);
    setfillcolor(RED);
    //��һ��������
    solidrectangle(150, 180, 250, 280);

    //����ͼƬ����
    IMAGE img;
    //��ͼƬ���浽����ı�����
    loadimage(&img, "C:\\Users\\86185\\Pictures\\Saved Pictures\\25ae123998.jpg");
    //��ͼ
    putimage(0,0,&img);


    //ֱ��ͨ����ɫ���ñ���
    setbkcolor(YELLOW);
    cleardevice();//��ʼ����Ļ

    //playBGM();


 
    return 0;
}

//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//	/*initgraph(640, 480,EW_SHOWCONSOLE);
//	setbkcolor(RGB(203, 221, 244));
//	 cleardevice();
//
//	setfillcolor(YELLOW);
//    fillrectangle(200, 50, 500, 100);
//    settextcolor(RGB(155, 0, 15));
//    char arr[] = "�����ַ���";
//    int width = 300 / 2 - textwidth(arr)/2;
//    int height = 50 / 2 - textheight(arr) / 2;
//    setbkmode(TRANSPARENT);
//    outtextxy(width + 200, height + 50, arr);*/
//
//	while (1)
//	{
//		char key = _getch();
//		printf("%d,%c\n", key, key);
//
//
//		//  EASYXMSG msg = getmessage();
//		//switch (msg.message)
//		//{
//		//case WM_LBUTTONDOWN://������
//		//	if (msg.x > 200 && msg.x < 500 && msg.y>50 && msg.y < 100)
//		//	{
//		//		printf("���������������");
//		//	}
//		//	outtextxy(400, 400, "������");
//		//case WM_RBUTTONDOWN:
//		//	outtextxy(400, 400, "�Ҽ����");
//		//}
//		
//	}
//
//
//	while (1)
//		    {
//		        ;
//		    }
//
//}