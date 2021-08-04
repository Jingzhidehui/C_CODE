#define  _CRT_SECURE_NO_WARNINGS
//���Ա���n��������ͬ���Ե�����Ԫ�ص��������С�
//���Ա����߼��������Խṹ���������ϴ���ʱ��ͨ�����������ʽ�ṹ����ʽ�洢

//˳�������һ�������ַ�����Ĵ洢��Ԫ���δ洢����Ԫ�ص����Խṹͼ��һ���������

//˳���һ���Ϊ����̬˳���ʹ�ö�������洢
//��̬˳���ʹ�ö�̬���ٵ�����洢

#include"SeqList.h"



void menu()
{
	printf("*******************************************\n");
	printf("**1.β������                   2.ͷ������**\n");
	printf("**3.βɾ����                   4.ͷɾ����**\n");
	printf("**5.����λ�ò�������   6.����λ��ɾ������**\n");
	printf("**7.��������                   8.��������**\n");
	printf("**9.�޸�����                   10.�������**\n");
	printf("**11.��ʾ����                      -1.�˳�**\n");
	printf("*******************************************\n");
	printf("������ѡ��:>\n");
	
}
int main()
{
	SL s;//����һ��˳������
	SeqListInit(&s);//��ʼ��
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
				printf("������Ҫ����ĸ���:\n");
				scanf("%d", &n);
				printf("������Ҫ���������:\n");
				for (int i = 0; i < n; i++)
				{
					scanf("%d", &x);
					SeqListPushBack(&s, x);
				}
	
				break;
			case 2:
				printf("������Ҫ���������:\n");
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
				printf("������Ҫ������±�λ��:\n");
				scanf("%d", &pos);
				printf("������Ҫ���������:\n");
				scanf("%d", &x);
				SeqListInsert(&s, pos, x);
	
				break;
			case 6:
				printf("������Ҫ������±�λ��:\n");
				scanf("%d", &pos);
				SeqListErase(&s, pos);
				break;
			case 7:
				printf("������Ҫ���ҵ�����:\n");
				scanf("%d", &x);
				ret=SeqListFind(&s, x);
				printf("�±�λ����%d\n", ret);
	
				break;
			case 8:
				SeqListBubleSort(&s);

				break;
			case 9:
				printf("������Ҫ�޸ĵ��±�λ��:\n");
				scanf("%d", &pos);
				printf("�������޸ĺ��ֵ:\n");
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
				printf("ѡ�����������ѡ��");

				break;

		}
	}

	SeqListDestory(&s);


	return 0;
}