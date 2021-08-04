#define  _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////交换函数
//void swap(char* buf1,char* buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++) 
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2; 
//		*buf2 = tmp; 
//		buf1++;
//		buf2++;
//	}
//}
//struct stu
//{
//	char name[20];
//	int age = 0;
//};
//int cmp_int(const void* p1, const void* p2) //qsort中的的比较函数
//{
//	//比较两个整形的值
//	return (*(int*)p1 - *(int*)p2);
//}
//
//int cmp_float(const void* elem1, const void* elem2)
//{
//	//比较两个浮点型的值
//	return	 (*(float*)elem1 - *(float*)elem2);
//}
//int cmp_stu_by_name(const void* elem1, const void* elem2)
//{
//	//比较结构体中的名字，用strcmp函数，要引头文件string.h
//	return  (strcmp(((struct stu*)elem1)->name, ((struct stu*)elem2)->name));
//}
//
//int cmp_stu_by_age(const void* elem1, const void* elem2)
//{
//	//比较结构体中的年龄
//	return  (((struct stu*)elem1)->age - ((struct stu*)elem2)->age);
//}
//
//void bubble_sort(void* base, int num, int width, int (*cmp)(const void* elem1, const void* elem2))
//{
//	int i,j;
//	for (i=0; i < num - 1; i++)//确定排序趟数
//	{
//		for (int j = 0; j < num - 1 - i; j++)//每趟排序进行比较的次数
//		{
//			if (cmp(((char*)base + j * width), ((char*)base + (j + 1) * width)) > 0)
//				//如果cmp函数返回值大于0，则进行交换
//			{
//				swap((char*)base + j * width,(char*)base + (j + 1) * width,width);
//
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 2,4,6,8,1,3,9,5,7,10 };
//	float arr2[5] = { 4.0,5.0,1.0,6.0,8.0 };
//	int sz = sizeof(arr2) / sizeof(*arr2);
//	bubble_sort(arr2, sz, sizeof(*arr2), cmp_float);//如果要排序其他类型数组
//	//把cmp函数换成对应的就行了
//	for (int a = 0; a < sz; a++)
//	{
//		printf("%f ", arr2[a]);
//	}
//	return 0;
//}
