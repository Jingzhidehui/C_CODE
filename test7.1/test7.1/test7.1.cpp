#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src) //将src字符串拷贝到dest字符串中
//{
//	char* ret = dest;
//	//assert(dest && src);//要是用assert必须引头文件#include<assert.h>
//	//assert(arr2 != NULL);assert(arr1 != NULL);
//
//	while (*dest++ = *src++)
//		;
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, NULL);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, m = 0, n = 0;
//	(m = a == b) || (n = c == d);
//	printf("%d\n%d\n", m, n);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>//system函数需要用到的头文件
//#include <string.h>//strcmp函数需要用到的头文件
//
//
//
//int main()
//{
//    char input[20] = { 0 };//存储数据
//    system("shutdown -s -t 60");//关机指令，意思是60秒后关机，具体时间可以随意设置
//
//
//again:
//    printf("喊声-大哥我错了-关闭关机指令\n");
//    scanf("%s", input);
//    if (strcmp(input, "大哥我错了") == 0)
//    {
//        system("shutdown -a");//停止关机
//    }
//    else
//    {
//        goto again;//重复操作
//    }
//    return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void game()
//{
//	int guess = 0;
//	猜数字游戏逻辑
//1.生成随机数	
//	int ret = rand() % 100 + 1;
//	printf("随机数是%d\n", ret);
//		2.猜数字
//	while (1)
//	{
//		
//		printf("请猜数字:>");
//		scanf("%d  ", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//			printf("输入的数字是%d\n", guess);
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//			printf("输入的数字是%d\n", guess);
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	game();
//
//	return 0;
//}

// #include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a,b;
//	while (1)
//	{
//		scanf("%d,%d", &a, &b);
//		printf("a=%d,b=%d\n", a, b);
//		Sleep(1000);
//	}
//	
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int num;
//    scanf("%d", &num);
//    int sum=0;
//    int ret = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        ret = ret * 10 + num;
//        sum += ret;
//    }
//    printf("%d", sum);
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		int temp = i;
//		int n = 1;
//		int sum = 0;
//		while (temp /= 10)
//		{
//			n++;
//		}
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp /= 10;
//		}
//
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//
//	}
//}
//
//#include<stdio.h>
//int f(int a) 
//{ 
//	int b = 0; 
//	static int c = 3;
//	a = (c++,b++);
//	return (a); 
//}int main() 
//{ 
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++)
//	{ 
//		k = f(a++);
//	}
//	printf(" % d\n", k); return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int i, j, k; 
//    for (i = 0; i < 7; i++)
//    {
//        for (j = 0; j < 6 - i; j++)
//        {
//            printf(" ");
//        }
//        for (k = 0; k <= 2 * i; k++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (i = 0; i < 6; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf(" ");
//        }
//        for (k = 0; k < 11 - 2 * i; k++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int money = 20;
//	int drink = money;
//	int sum = 0;
//	int num = 0;
//	while (drink)
//	{
//		num += drink;
//		sum += drink;
//		drink = num/ 2;
//		num = num % 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main() {
//    char a[100], c[100] = { '\0' };
//    gets_s(a);
//    int i;
//    int b = strlen(a);
//    for (i = 0; i < b; i++)
//    {
//        c[i] = a[b - 1 - i];
//    }
//    printf("%s", c);
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>

void Adu(char* arr)
{
	char* left = arr;
	char* right = arr + strlen(arr) - 1;
	while (left < right)
	{
		int tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}

int main()
{
	char arr[101] = { 0 };

	gets_s(arr);
	
		Adu(arr);
		printf("%s\n", arr);
		memset(arr, 0, sizeof(arr) / sizeof(arr[0]));
	
	return 0;
}
