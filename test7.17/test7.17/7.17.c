#define  _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("**************************\n");
//	printf("**** 1. add    2. sub ****\n");
//	printf("**** 3. mul    4. div ****\n");
//	printf("****     0. exit      ****\n");
//	printf("**************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		int (*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数>:");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//void print(char* str)
//{
//	printf("调用函数print并打印传进来的字符串:%s", str);
//}
//void test(void (*p)(char*)) 
//{
//	printf("调用函数test\n");
//	(*p)("hello world");
//}
//
//int main() {
//	test(print);
//	return 0;
//}

#include <stdio.h>
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW
	return 0;
}
