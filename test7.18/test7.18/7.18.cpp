#define  _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}


//
//#include <stdio.h> 
//#include <string.h> 
//#include<assert.h>
//
//void* my_memmove(void* dst, const void* src, size_t count)
//{
//	assert(dst);
//	assert(src);
//	void* ret = dst;
//	//目的位置在拷贝的起始位置左边，或者两者不重叠，从前向后拷贝
//	if (dst <= src || (char*)dst >= ((char*)src + count)) //
//	{
//
//		while (count--) 
//		{
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst + 1;
//			src = (char*)src + 1;
//		}
//	}
//	//目的位置在拷贝的起始位置右边，从后向前拷贝
//	else 
//	{
//
//		dst = (char*)dst + count - 1;
//		src = (char*)src + count - 1;
//		while (count--) {
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst - 1;
//			src = (char*)src - 1;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	memmove(arr + 2, arr, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//int my_memcmp1(const void* p1, const void* p2, size_t count)
//{
//    assert(p1);
//    assert(p2);
//    char* dest = (char*)p1;
//    char* src = (char*)p2;
//    while (count && (*dest == *src))
//    {
//        count--;
//        dest++;
//        src++;
//    }
//    if (count == 0)
//        return 0;
//    return *dest - *src;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,8,4,5 };
//	printf("%d", memcmp(arr1, arr2, 9));
//
//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void* my_memset(void* dst, int val, size_t  size)
//{
//	char*ret = (char*)dst;
//	assert(dst);
//	while (size--)
//	{
//		*(char*)dst = (char)val;
//		dst= (char*)dst+1;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[10] = { 0 };
//	my_memset(arr, '1', 10);
//
//
//	return 0;
//
//}

#include<stdio.h>
struct
{
	int a;
	char b;
	float c;
}x,*p1;
struct
{
	int a;
	char b;
	float c;
}a[20], * p;//创建结构体数组和指针
int main()
{
	p1 = &x;

	return 0;
}