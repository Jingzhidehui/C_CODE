#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src) //��src�ַ���������dest�ַ�����
//{
//	char* ret = dest;
//	//assert(dest && src);//Ҫ����assert������ͷ�ļ�#include<assert.h>
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
//#include <stdlib.h>//system������Ҫ�õ���ͷ�ļ�
//#include <string.h>//strcmp������Ҫ�õ���ͷ�ļ�
//
//
//
//int main()
//{
//    char input[20] = { 0 };//�洢����
//    system("shutdown -s -t 60");//�ػ�ָ���˼��60���ػ�������ʱ�������������
//
//
//again:
//    printf("����-����Ҵ���-�رչػ�ָ��\n");
//    scanf("%s", input);
//    if (strcmp(input, "����Ҵ���") == 0)
//    {
//        system("shutdown -a");//ֹͣ�ػ�
//    }
//    else
//    {
//        goto again;//�ظ�����
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
//	��������Ϸ�߼�
//1.���������	
//	int ret = rand() % 100 + 1;
//	printf("�������%d\n", ret);
//		2.������
//	while (1)
//	{
//		
//		printf("�������:>");
//		scanf("%d  ", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//			printf("�����������%d\n", guess);
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//			printf("�����������%d\n", guess);
//		}
//		else
//		{
//			printf("�¶���\n");
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
