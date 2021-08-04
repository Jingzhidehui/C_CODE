#define  _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}

#include<stdio.h>
int fun(int* a, int* b)
{
	return *a + *b;
}
int fun1(int a, int b)
{
	return a + b;
}
int main()
{
	int n = 1, m = 2;

	printf("%d", fun(&n, &m));
}
