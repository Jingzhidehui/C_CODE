#define  _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////��������
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
//int cmp_int(const void* p1, const void* p2) //qsort�еĵıȽϺ���
//{
//	//�Ƚ��������ε�ֵ
//	return (*(int*)p1 - *(int*)p2);
//}
//
//int cmp_float(const void* elem1, const void* elem2)
//{
//	//�Ƚ����������͵�ֵ
//	return	 (*(float*)elem1 - *(float*)elem2);
//}
//int cmp_stu_by_name(const void* elem1, const void* elem2)
//{
//	//�ȽϽṹ���е����֣���strcmp������Ҫ��ͷ�ļ�string.h
//	return  (strcmp(((struct stu*)elem1)->name, ((struct stu*)elem2)->name));
//}
//
//int cmp_stu_by_age(const void* elem1, const void* elem2)
//{
//	//�ȽϽṹ���е�����
//	return  (((struct stu*)elem1)->age - ((struct stu*)elem2)->age);
//}
//
//void bubble_sort(void* base, int num, int width, int (*cmp)(const void* elem1, const void* elem2))
//{
//	int i,j;
//	for (i=0; i < num - 1; i++)//ȷ����������
//	{
//		for (int j = 0; j < num - 1 - i; j++)//ÿ��������бȽϵĴ���
//		{
//			if (cmp(((char*)base + j * width), ((char*)base + (j + 1) * width)) > 0)
//				//���cmp��������ֵ����0������н���
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
//	bubble_sort(arr2, sz, sizeof(*arr2), cmp_float);//���Ҫ����������������
//	//��cmp�������ɶ�Ӧ�ľ�����
//	for (int a = 0; a < sz; a++)
//	{
//		printf("%f ", arr2[a]);
//	}
//	return 0;
//}
