#define  _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//
//	int* ptr = NULL;
//	ptr = (int*)malloc(num*sizeof(int));
//	if (ptr == NULL)//�ж�ptrָ���Ƿ�Ϊ�գ�Ϊ���򿪱�ʧ�ܣ���ʱ��ӡ������Ϣ
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i) = i;
//		}
//	}
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//	printf("\n");
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;
//		for (i = num; i < 10; i++)
//		{
//			*(ptr + i) = i;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//
//	free(ptr);
//	return 0;
//
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void Test(void) 
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf("%s",str);
//	}
//}
//
//int main()
//{
//	Test();
//
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* p = malloc(sizeof(struct S));
//	p->n = 100; 
//	p->arr = (int*)malloc(p->n * sizeof(int));
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		p->arr[i] = i;
//	}
//	//�ͷſռ�
//	free(p->arr);
//	p->arr = NULL;
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//void isyear(int i) 
//{
//	if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) 
//	{
//		printf("��");
//	}
//	else 
//	{
//		printf("����");
//	}
//
//}
//
//int main() {
//	int year = 0;
//	printf("�������");
//	scanf("%d", &year);
//	isyear(year);
//	return 0;
//}

//#include<stdio.h>
//void  change(int* a, int* b)
//{
//	int temp = 0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	change(&x, &y);
//	printf("%d %d", x, y);
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i;
//	int j;
//	for (i = 0; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-4d", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//void Print(int n)
//{
//	if (n < 10)
//	{
//		printf("%d ", n);
//
//	}
//	else
//	{
//		Print(n / 10);
//		printf("%d ", n % 10);
//	}
//
//}
//int main()
//{
//	int i;
//	scanf("%d",&i);
//	Print(i);
//
//	return 0;
//}

//#include <stdio.h>
//int factorial(int n)
//{
//    if (n <= 1)
//        return 1;
//    else
//        return n * factorial(n - 1);
//}
//int main()
//{
//    int n = 1;
//    scanf("%d", &n);
//    printf("�׳�Ϊ��%d", factorial(n));
//    return 0;
//}
//#include <stdio.h>
//void reverse_string(char* p)
//{
//	int n = 0;
//	char temp;
//	char* q;
//	q = p;
//	while (*p != 0)
//	{
//		n++;
//		p++;
//	}
//	if (n > 1)
//	{
//		temp = q[0];
//		q[0] = q[n - 1];
//		q[n - 1] = '\0';
//		reverse_string(q + 1);
//		q[n - 1] = temp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("ԭ�ַ����ǣ�%s\n", arr);
//	reverse_string(arr);
//	printf("�������ַ����ǣ�%s\n",arr);
//	return 0;
//}

//#include<stdio.h>
//
//int DigitSum(int n)
//{
//	if (n<10)
//	{
//		return n;
//	}
//	else
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//
//int main()
//{
//	int i = 1729;
//	printf("%d", DigitSum(i));
//
//	return 0;
//}

//#include<stdio.h>
//
//int pow(int n,int k)
//{
//	if (k > 0)
//	{
//		return n * pow(n, k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d", pow(n, k));
//
//	return 0;
//}

//#include<stdio.h>
//int fib(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 0;
//    while (n > 2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return b;
//}
//int main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    ret = fib(n);
//    printf("%d", ret);
//    return 0;
//}
//#include <stdio.h>
//int factorial(int n)
//{
//    if (n <= 1)
//        return 1;
//    else
//        return n * factorial(n - 1);
//}
//int main()
//{
//  
//    int n = 1;
//    scanf("%d", &n);
//    printf("�׳�Ϊ��%d", factorial(n));
//    return 0;
//}
//FILE

//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char str[1024] = { 0 };
//	//�����ļ�ָ��
//	FILE* pFile;
//	//��ֻ������ʽ�򿪵�ǰĿ¼�µ��ļ�
//	pFile = fopen("test.txt", "w");
//	//��ʧ�ܣ����ؿ�ָ��
//	if (pFile == NULL)
//	{
//		//��ӡ����
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		fputs("hello\n", pFile);
//		fputs("world", pFile);
//
//	}
//	
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int a;
//    char b;
//    char arr[10] ;
//   	//�����ļ�ָ��
//    FILE* pFile;
//   	//��ֻ������ʽ�򿪵�ǰĿ¼�µ��ļ�
//   	pFile = fopen("test.txt", "r");
//   	//��ʧ�ܣ����ؿ�ָ��
//   	if (pFile == NULL)
//    	{
//   		//��ӡ����
//    	printf("%s", strerror(errno));
//    }
//   	else
//    {
//        fscanf(pFile,"%d %c %s",&a,&b,arr);
//        printf("%d %c %s", a, b, arr);
//    
//   	}
//
//
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int a=10;
//    char b='a';
//    char arr[10]="abcd";
//    char arr1[100];
//    int d;
//    char c;
//    char arr2[10];
//   
//    sprintf(arr1,"%d %c %s\n", a, b, arr);
// 
//    printf("%s",arr1);
//    sscanf(arr1, "%d %c %s", &d, &c, arr2);
//    printf("%d %c %s", d, c, arr2);
//
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	
//	FILE* pFile;
//
//	pFile = fopen("test.txt", "r");
//    //��ʧ�ܣ����ؿ�ָ��
//	if (pFile == NULL)
// 	{
//	  //��ӡ����
//	 printf("%s", strerror(errno));
//     }
//	else
//	 {
//		printf("%c\n", fgetc(pFile));
//		rewind(pFile);
//		printf("%c\n", fgetc(pFile));
//		printf("%d\n", ftell(pFile));
//		printf("%c\n", fgetc(pFile));
//		printf("%d\n", ftell(pFile));
//		rewind(pFile);
//		printf("%d\n", ftell(pFile));
//		printf("%c\n", fgetc(pFile));
//		printf("%d\n", ftell(pFile));
//		fclose(pFile);
//		pFile = NULL;
//	    
//	}
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main() 
//{
//	int c; 
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) 
//	{
//		perror("��ʧ�ܣ�");
//		return 0;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
//	if (ferror(fp))
//		puts("��ȡ����");
//	else if (feof(fp))
//		puts("�����ļ�ĩβ");
//	fclose(fp);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, i, j;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == 0 || i == n - 1)
//                    printf("* ");
//                else
//                {
//                    if (j == 0 || j == n - 1)
//                        printf("* ");
//                    else
//                        printf("  ");
//                }
//            }
//            printf("\n");
//        }
//        getchar(n);
//    }
//    return 0;
//}

//#include<stdio.h>
//
//void change(int* arr, int i, int j)
//{
//	int temp;
//	temp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = temp;
//}
//void fun(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		while ((left <= right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left <= right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		change(arr, left, right);
//	}
//}
//int main()
//{
//	int arr[] = { 1,8,9,7,6,6,3,4,5,7,8,2 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	fun(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
bool isValid(char* s) {
    int length = 0;
    while (*(s + length))//��ȡ�ַ�������
    {
        length++;
    }
    char* arr = (char*)malloc(length);//�����ڴ�ռ�
    memset(arr, 0, length);//��ʼ���ڴ�ռ�
    int i = 0;
    while (*s != '\0')
    {
        switch (*s)
        {
        case '[':
        case '{':
        case '(':
        {
            arr[i] = *s;
            i++;
            s++;
        }
        break;
        case'}':
        case']':
        case')':
        {
            if (i == 0)
            {
                free(arr);
                arr = NULL;
                return false;
            }
            char top = arr[i - 1];//ȡջ����Ԫ��
            i--;
            if (*s == '}' && top != '{' ||
                *s == ']' && top != '[' ||
                *s == ')' && top != '(')
            {
                free(arr);
                arr = NULL;
                return false;
            }
            else
            {
                s++;
            }
            break;
        }
        default:
            break;
        }
    }
    //ƥ������Ժ�ջ�ǿյģ�����ǿ����Ǽ�
    if (i == 0)
    {
        free(arr);
        arr = NULL;
        return true;
    }
    else
    {
        free(arr);
        arr = NULL;
        return false;
    }
}