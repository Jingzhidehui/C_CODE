#define  _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void menu()
{
	printf("**************************************************\n");
	printf("****1.添加联系人        2.删除联系人**************\n");
	printf("****3.查找联系人        4.修改联系人*************\n");
	printf("****5.展示所有联系人    6.按姓名排序联系人********\n");
	printf("****7.保存通讯录        8.清空通讯录*************\n");
	printf("**************0.退出通讯录************************\n");
	printf("**************************************************\n");
}


int main()
{
	int input = 0;
	//创建通讯录
	int size = 0;
	struct Contact con;//con是通讯录
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			system("pause");
			system("cls");
			break;
		case DEL:
			DelContact(&con);
			system("pause");
			system("cls");
			break;
		case SEARCH:
			SearchContact(&con);
			system("pause");
			system("cls");
			break;
		case MODIFY:
			ModifyContact(&con);
			system("pause");
			system("cls");
			break;
		case SHOW:
			ShowContact(&con);
			system("pause");
			system("cls");
			break;
		case SORT:
			SortContact(&con);
			system("pause");
			system("cls");
			break;
		case SAVE:
			SaveContact(&con);
			system("pause");
			system("cls");
			break;
		case CLEAR:
			ClearContact(&con);
			system("pause");
			system("cls");
			break;
		case EXIT:
			SaveContact(&con);
			//释放动态开辟的内存
			DestroyContact(&con);
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}