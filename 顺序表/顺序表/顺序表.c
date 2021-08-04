#define  _CRT_SECURE_NO_WARNINGS
//线性表是n个具有相同特性的数据元素的有限序列。
//线性表在逻辑上是线性结构，在物理上储存时，通常以数组和链式结构的形式存储

//顺序表是用一段物理地址连续的存储单元依次存储数据元素的线性结构图，一般采用数组

//顺序表一般分为：静态顺序表：使用定长数组存储
//动态顺序表：使用动态开辟的数组存储

#include"SeqList.h"



void menu()
{
	printf("*******************************************\n");
	printf("**1.尾插数据                   2.头插数据**\n");
	printf("**3.尾删数据                   4.头删数据**\n");
	printf("**5.任意位置插入数据   6.任意位置删除数据**\n");
	printf("**7.查找数据                   8.排序数据**\n");
	printf("**9.修改数据                   10.清空数据**\n");
	printf("**11.显示数据                      -1.退出**\n");
	printf("*******************************************\n");
	printf("请输入选项:>\n");
	
}
int main()
{
	SL s;//创建一个顺序表变量
	SeqListInit(&s);//初始化
	int x=0;
	int option=0;

	int n = 0;
	int pos=0;
	int ret=0;
	while (1)
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
			case 1:
				printf("请输入要插入的个数:\n");
				scanf("%d", &n);
				printf("请输入要插入的数据:\n");
				for (int i = 0; i < n; i++)
				{
					scanf("%d", &x);
					SeqListPushBack(&s, x);
				}
	
				break;
			case 2:
				printf("请输入要插入的数据:\n");
				scanf("%d", &x);
				SeqListPushFront(&s, x);

				break;
			case 3:
				SeqListPopBack(&s);

				break;
			case 4:
				SeqListPopFront(&s);

				break;
			case 5:
				printf("请输入要插入的下标位置:\n");
				scanf("%d", &pos);
				printf("请输入要插入的数据:\n");
				scanf("%d", &x);
				SeqListInsert(&s, pos, x);
	
				break;
			case 6:
				printf("请输入要插入的下标位置:\n");
				scanf("%d", &pos);
				SeqListErase(&s, pos);
				break;
			case 7:
				printf("请输入要查找的数据:\n");
				scanf("%d", &x);
				ret=SeqListFind(&s, x);
				printf("下标位置是%d\n", ret);
	
				break;
			case 8:
				SeqListBubleSort(&s);

				break;
			case 9:
				printf("请输入要修改的下标位置:\n");
				scanf("%d", &pos);
				printf("请输入修改后的值:\n");
				scanf("%d", &x);
				SeqListModity(&s, pos, x);

				break;
			case 10:
				clear(&s);

				break;
			case 11:
				SeqListPrint(&s);

				break;
			case -1:
				exit(-1);
				break;
			default:
				printf("选择错误，请重新选择");

				break;

		}
	}

	SeqListDestory(&s);


	return 0;
}