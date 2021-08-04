#define  _CRT_SECURE_NO_WARNINGS
#undef UNICODE
#undef _UNICODE
#include<windows.h>
#include <graphics.h>//包含图形库头文件
#include<mmsyscom.h>//包含多媒体设备接口头文件
#pragma comment(lib,"Winmm.lib")

//void playBGM()
//{
//    //打开音乐，向多媒体设备接口发送一个字符串
//       mciSendString("open C:\\Users\\86185\\Music\\1.mp3", 0, 0, 0);
//    //播放音乐
//       mciSendString("play C:\\Users\\86185\\Music\\1.mp3", 0, 0, 0);
//    //关闭音乐
//     
//}

void change()
{
    //获取窗口句柄
    HWND hnd = GetHWnd();
    //设置窗口标题
    SetWindowText(hnd, "测试标题");
    //弹出窗口，提示用户操作
    MessageBox(hnd, "游戏失败", "窗口标题", MB_ABORTRETRYIGNORE);


}
int main()
{
   /*  初始化绘图窗口，宽度和高度*/
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
    settextstyle(50, 0, "宋体");
    setbkmode(TRANSPARENT); 
    outtextxy(50, 100,arr);
    outtextxy(50, 150,"测试字符串");*/


    setfillcolor(YELLOW);
    fillrectangle(200, 50, 500, 100);
    settextcolor(RGB(155, 0, 15));
    char arr[] = "测试字符串";
    int width = 300 / 2 - textwidth(arr)/2;
    int height = 50 / 2 - textheight(arr) / 2;
    setbkmode(TRANSPARENT);
    outtextxy(width + 200, height + 50, arr);

  
    while (1)
    {
        ;
    }
    closegraph();//关闭绘图窗口
    cleardevice();//清空绘图设备
    //画东西，填充颜色
    setfillcolor(GREEN);
    //画一个填充圆形
    fillcircle(320,150,10);
    setfillcolor(RED);
    //画一个长方形
    solidrectangle(150, 180, 250, 280);

    //定义图片变量
    IMAGE img;
    //把图片保存到定义的变量中
    loadimage(&img, "C:\\Users\\86185\\Pictures\\Saved Pictures\\25ae123998.jpg");
    //画图
    putimage(0,0,&img);


    //直接通过颜色设置背景
    setbkcolor(YELLOW);
    cleardevice();//初始化屏幕

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
//    char arr[] = "测试字符串";
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
//		//case WM_LBUTTONDOWN://左键点击
//		//	if (msg.x > 200 && msg.x < 500 && msg.y>50 && msg.y < 100)
//		//	{
//		//		printf("左键点击了这块区域");
//		//	}
//		//	outtextxy(400, 400, "左键点击");
//		//case WM_RBUTTONDOWN:
//		//	outtextxy(400, 400, "右键点击");
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