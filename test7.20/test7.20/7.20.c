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
//	if (ptr == NULL)//判断ptr指针是否为空，为空则开辟失败，此时打印错误信息
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
//	//释放空间
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
//		printf("是");
//	}
//	else 
//	{
//		printf("不是");
//	}
//
//}
//
//int main() {
//	int year = 0;
//	printf("输入年份");
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
//    printf("阶乘为：%d", factorial(n));
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
//	printf("原字符串是：%s\n", arr);
//	reverse_string(arr);
//	printf("逆序后的字符串是：%s\n",arr);
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
//    printf("阶乘为：%d", factorial(n));
//    return 0;
//}
//FILE

//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char str[1024] = { 0 };
//	//创建文件指针
//	FILE* pFile;
//	//以只读的形式打开当前目录下的文件
//	pFile = fopen("test.txt", "w");
//	//打开失败，返回空指针
//	if (pFile == NULL)
//	{
//		//打印错误
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
//   	//创建文件指针
//    FILE* pFile;
//   	//以只读的形式打开当前目录下的文件
//   	pFile = fopen("test.txt", "r");
//   	//打开失败，返回空指针
//   	if (pFile == NULL)
//    	{
//   		//打印错误
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
//    //打开失败，返回空指针
//	if (pFile == NULL)
// 	{
//	  //打印错误
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
//		perror("打开失败：");
//		return 0;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(fp))
//		puts("读取错误");
//	else if (feof(fp))
//		puts("遇到文件末尾");
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
    while (*(s + length))//获取字符串长度
    {
        length++;
    }
    char* arr = (char*)malloc(length);//分配内存空间
    memset(arr, 0, length);//初始化内存空间
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
            char top = arr[i - 1];//取栈顶的元素
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
    //匹配完成以后栈是空的，如果非空则是假
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