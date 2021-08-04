#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int max(int* a, int* b)
//{
//	return *a > * b ? *a : *b;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//
//
//	printf("%d\n", max(&a,&b));
//	
//	return 0;
//}
//void sub(int x, int y, int* z)
//{
//	*z = y - x;
//}
//int main()
//{
//	int a, b, c;
//	sub(10, 5, &a);
//	sub(7, a, &b);
//	sub(a, b, &c);
//	printf("%4d\n%4d\n%4d\n", a, b, c);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int ret = 0;
//    int count = 0;
//    scanf("%d %d", &num1, &num2);
//    ret = num1 ^ num2;
//    while (ret != 0)
//    {
//        count++;
//        ret = ret & (ret - 1);
//    }
//    printf("%d\n", count);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    /*int num1 = 0;
//    int num2 = 0;
//    scanf("%d%d", &num1, &num2);
//   
//    num1 = num1 ^ num2;
//    num2 = num1 ^ num2;
//    num1 = num2 ^ num1;
//    printf("½»»»ºó%d %d", num1, num2);*/
//
//    int a = 0;
//    short b = 2;
//    printf("%d", sizeof(a, b = a + b));
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int i, j, n, m, flag = 1;
//    scanf("%d%d", &n, &m);
//    int** a = NULL;
//    int** b = NULL;
//    a = (int**)calloc(sizeof(int*), n);
//    for (int k = 0; k < n; k++)
//    {
//        a[k] = (int*)calloc(sizeof(int), m);
//    }
//
//    b = (int**)calloc(sizeof(int*), n);
//    for (int k = 0; k < n; k++)
//    {
//        b[k] = (int*)calloc(sizeof(int), m);
//    }
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf("%d", &b[i][j]);
//            if (a[i][j] != b[i][j]) flag = 0;
//        }
//    }
//    if (flag)
//        printf("Yes\n");
//    else
//        printf("No\n");
//    free(a);
//    a = NULL;
//    free(b);
//    b = NULL;
//}

//#include<stdio.h>
//int main()
//{
//	int a[10][10];	int b[10][10];
//	int m, n;
//	scanf("%d%d", &m, &n);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j=0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j=0; j < m; j++)
//		{
//			printf("%d ", a[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main(){
//    int i;
//    while (scanf("%d\n", &i) != EOF) {
//        if (i & 1 == 1){
//            printf("Odd\n");
//        }
//        else{
//            printf("Even\n");
//        }
//    }
//    return 0;
//}
#include <stdio.h>

int main()
{
    int m = 0;
    scanf("%d", &m);
    int i = 0;
    for (i = 31; i >= 1; i -= 2)
    {
        printf("%d ", (m >> i) & 1);
    }
    printf("\n");
    for (i = 30; i >= 0; i -= 2)
    {
        printf("%d ", (m >> i) & 1);
    }
    return 0;
}