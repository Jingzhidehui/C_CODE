#define  _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void menu()
{
	printf("**************************************************\n");
	printf("****1.�����ϵ��        2.ɾ����ϵ��**************\n");
	printf("****3.������ϵ��        4.�޸���ϵ��*************\n");
	printf("****5.չʾ������ϵ��    6.������������ϵ��********\n");
	printf("****7.����ͨѶ¼        8.���ͨѶ¼*************\n");
	printf("**************0.�˳�ͨѶ¼************************\n");
	printf("**************************************************\n");
}


int main()
{
	int input = 0;
	//����ͨѶ¼
	int size = 0;
	struct Contact con;//con��ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��->");
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
			//�ͷŶ�̬���ٵ��ڴ�
			DestroyContact(&con);
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}