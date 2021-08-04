#define  _CRT_SECURE_NO_WARNINGS

//#define ADD(a,b) a+b
//#include<stdio.h>
//int main()
//{
//	int i = 3, j = 4;
//	int ret = 4*ADD(i, j);
//	printf("%d", ret);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[20];
//	int i = 0;
//	while (n)
//	{
//		arr[i] = n % 6;
//		i++;
//		n /= 6;
//	}
//	for (i--; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//}

//#include <stdio.h> 
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#if 0
//		printf("%d\n", arr[i]);
//#elif 1
//		printf("%d\n", arr[i]);
//#else 
//		printf("%d\n", arr[i]);
//#endif
//	}
//
//		return 0;
//}


//
//#include<stdio.h>
//#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//int main()
//{
//	//struct S s;
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}

//#include<stdio.h>
//void change(int arr1[], int arr2[], int sz)
//{
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//}
//
//int main()
//{
//	int arr1[10] = {1,4,5,7,8,9,6,4 };
//	int arr2[10] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	change(arr1, arr2, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}

#include<stdio.h>
//int main()
//{
//	float a = 0.1;
//	float b = 0.5;
//	printf("%.50f\n", a + b);
//	if ((a - b) == 0.6)
//	{
//		printf("1");
//	}
//}

unsigned long g_ulGlobal = 0; void GlobalInit(unsigned long ulArg) { ulArg = 0x01; return; }void Test() { GlobalInit(g_ulGlobal); printf("%lu", g_ulGlobal); return; }
int main()
{
	Test();
}