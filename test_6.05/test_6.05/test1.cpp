#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    int a, b, c, d, e;
//    while (~scanf("%d %d %d %d %d", &a, &b, &c, &d, &e))
//    {
//        printf("%.2lf\n", (a + b + c + d + e) / 5.0);
//    }
//
//    return 0;
//}

//void main()
//{
//    int a;
//    int b;
//    int c;
//    printf("����������������");
//    int x = scanf("%d%d%d", &a, &b, &c);
//    printf("%d\n",  x);
//}
//#include <stdio.h>
//int main()
//{
//    int n, sum, m;
//    while (scanf("%d", &n) != EOF)  //����while(~scanf("%d",&n))
//    {
//        sum = 0;
//        while (n--)
//        {
//            scanf("%d", &m);
//            sum += m;
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	char* str4;
//	strcpy(str2, str1);
//	str4=strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\nstr4: %s\n", str1, str2, str3,str4);
//	return 0;
//}

//#include <stdio.h>
//void Swap2(int* px, int* py) {
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap2(&num1, &num2);
//	printf("num1 = %d \nnum2 = %d\n", num1, num2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}

//
//#include <stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int num = fib(1000000);
//	printf("%d\n", num);
//	return 0;
//}


//
//#include<stdio.h>
//#include"Add.h"
//#include"Sub.h"
//#include"Mul.h"
//#include"Div.h"
//
//int main()
//{
//	int a = 10;
//	int b = 5;
//	printf("%d\n", Add(a, b));
//	printf("%d\n", Sub(a, b));
//	printf("%d\n", Mul(a, b));
//	printf("%d\n", Div(a, b));
//
//}

//#include<stdio.h>
//int main()
//{
//    int arr[100] = { 0 };
//    int n = 0;
//    int x = 0;
//    int count = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", arr[i]);
//    }
//    scanf("%d", &x);
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] == x)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//  
//    printf("%d\n",strlen("c\m"));
//    return 0;
//}

//int choose(int x, int y)
//{
//	if (x - y < 0)
//		return y;
//	else
//		return x;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	printf("������:");
//	scanf("%d%d", &a, &b);
//	printf("%d\n", choose(a, b));
//
//	return 0;
//}



//#include<stdio.h>
//
//int fun(int x, int y,int z)
//{
//    if (z == 1)
//    {
//        printf("��һ�ε��ó��˺�����û�����٣���ʱm��i��ֵΪ%d %d\n", m, i);
//    }
//    static int m=0  , i=2 ;
//    if (z == 1)
//   
//    i += m + 1;
//    i + 1;
//    m = i + x + y;
//    return m;
//}
//int main() 
//{
//    int j = 1, n = 1, k;
//    int x = 0;
//    k = fun(j, n,x); printf("%d\n", k);
//    x++;
//    k = fun(j, n,x); printf("%d\n", k);
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>//system������Ҫ�õ���ͷ�ļ�
#include <string.h>//strcmp������Ҫ�õ���ͷ�ļ�



int main()
{
    char input[20] = { 0 };//�洢����
    system("shutdown -s -t 60");//�ػ�ָ���˼��60���ػ�������ʱ�������������


again:
    printf("����-����Ҵ���-�رչػ�ָ��\n");
    scanf("%s", input);
    if (strcmp(input, "����Ҵ���") == 0)
    {
        system("shutdown -a");//ֹͣ�ػ�
    }
    else
    {
        goto again;//�ظ�����
    }
    return 0;
}
��������������������������������
��Ȩ����������ΪCSDN������POH_����ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https ://blog.csdn.net/weixin_51675068/article/details/117606099