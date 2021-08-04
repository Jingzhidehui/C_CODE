#define  _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void InitContact(struct Contact* ps)
{
	ps ->data =(struct PeoInfo*) malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		printf("�ռ俪��ʧ��");
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//���ļ��д�ŵ���Ϣ���ص�ͨѶ¼��
	LoadContact(ps);
}
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->data, (ps->capacity + 5) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 5;
		}
	}
}
void LoadContact(struct Contact* ps)
{
	struct PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.txt", "rb");
	if (pfRead == NULL)
	{
		printf("�ļ�������:%s\n", strerror(errno));
		return;
	}
	//��ȡ�ļ�
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
}


void AddContact(struct Contact* ps)
{
	//��⵱ǰͨѶ¼���������������������
	CheckCapacity(ps);
	printf("����������->");
	scanf("%s", ps->data[ps->size].name);
	printf("����������->");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�->");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰->");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ->");
	scanf("%s", ps->data[ps->size].addr);
	
	ps->size++;
	printf("��ӳɹ�\n");
	
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");

	}
	else
	{
		int i = 0;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		{
			for (i = 0; i < ps->size; i++)//��ӡÿ��ͨѶ¼Ԫ��
			{
				printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n", 
					ps->data[i].name, ps->data[i].age, ps->data[i].sex, 
					ps->data[i].tele, ps->data[i].addr);
			}
		}
	}
}
//������ϵ��λ��
int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	//����Ҫɾ���˵�λ��
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;//�ҵ������±�
		}
	}
	return -1;//�Ҳ�������-1
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:->");
	scanf("%s", name);
	//����Ҫɾ���˵�λ��
	int pos=FindByName(ps, name);//�ҵ������������ڵ��±꣬�Ҳ�������-1
	
	if (pos==-1)
	{
		printf("��ϵ�˲�����\n");
	}
	else
	{
		//ɾ��
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}

}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:->");
	scanf("%s", name);
	int pos = FindByName(ps, name);//�ҵ������������ڵ��±꣬�Ҳ�������-1
	if (pos == -1)
	{
		printf("��ϵ�˲�����\n");
	}
	else
	{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");		
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",
		 ps->data[pos].name, ps->data[pos].age, ps->data[pos].sex,
		 ps->data[pos].tele, ps->data[pos].addr);
			
	}		
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵�����:->");
	scanf("%s", name);
	int pos = FindByName(ps, name);//�ҵ������������ڵ��±꣬�Ҳ�������-1
	if (pos == -1)
	{
		printf("��ϵ�˲�����\n");
	}
	else
	{
		printf("����������->");
		scanf("%s", ps->data[pos].name);
		printf("����������->");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�->");
		scanf("%s", ps->data[pos].sex);
		printf("������绰->");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ->");
		scanf("%s", ps->data[pos].addr);

		printf("�޸����\n");
	}
}

void SortContact(struct Contact* ps)
{
	for (int i = 0; i < ps->size - 1; ++i)
	{
		for (int j = 0; j < ps->size - i - 1; ++j)
		{
			if (strcmp(ps->data[j].name, ps->data[j + 1].name) > 0)
			{
				struct PeoInfo tmp = ps->data[j];
				ps->data[j] = ps->data[j + 1];
				ps->data[j + 1] = tmp;
			}
		}
	}
	printf("����������ɹ�\n");
}

//�ͷŶ�̬���ٵĿռ�
void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data=NULL;
}


void SaveContact(struct Contact* ps)
{
	FILE* pfWrite = fopen("contact.txt", "wb");
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	//��ͨѶ¼����Ϣд���ļ�
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfWrite);
	}
	printf("����ɹ�\n");
	fclose(pfWrite);
	pfWrite = NULL;
}

void ClearContact(struct Contact* ps)
{
	printf("ȷ��Ҫ���ͨѶ¼��?<Y/N> :>");
	char ch;
	getchar();//��ջ����������\n
	scanf("%c", &ch);
	if (ch == 'Y' || ch == 'y')
	{
		ps->size = 0;
		memset(ps->data, 0, sizeof(ps->data));
		printf("��ճɹ�\n");
	}
	else
	{
		printf("ȡ�����\n");
	}
	
}