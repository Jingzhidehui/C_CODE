#define  _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//struct S1
//{
//	char c1;
//	int i;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//
//	return 0;
//}

//#include<stdio.h>
//#pragma pack(8)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//#include<stdio.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//
//}s;
//int main()
//{
//	printf("%d\n", (char*)(&s.i) - (char*)(&s));
//
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//struct A 
//{ 
//	int a : 5;     
//	int b : 3; 
//};
//int main()
//{
//	char str[100] = "0134abcd";     
//	struct A d;    
//	memcpy(&d, str, sizeof(A));     
//	printf("%d\n", d.a);
//	printf("%d\n", d.b);
//
//	return 0;
//}

//#include<stdio.h>
//enum Color//��ɫ
//{
//	RED = 1,
//	GREEN, //2
//	BLUE = 4
//};
//
//int main()
//{
//	printf("%d %d %d", RED, GREEN, BLUE);
//
//	return 0;
//}

#include<stdio.h>

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//����1��ʾС��
//	//����0��ʾ���
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//}


#include<stdio.h>
#include<stdio.h>
union U2
{
	short c[11];
	int i;
};

int main()
{
	printf("%d\n", sizeof(union U2));
}
