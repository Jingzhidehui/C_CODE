#define  _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void InitContact(struct Contact* ps)
{
	ps ->data =(struct PeoInfo*) malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		printf("空间开辟失败");
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//把文件中存放的信息加载到通讯录中
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
		printf("文件不存在:%s\n", strerror(errno));
		return;
	}
	//读取文件
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
	//检测当前通讯录的容量，如果满了则增容
	CheckCapacity(ps);
	printf("请输入名字->");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄->");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别->");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话->");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址->");
	scanf("%s", ps->data[ps->size].addr);
	
	ps->size++;
	printf("添加成功\n");
	
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");

	}
	else
	{
		int i = 0;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		{
			for (i = 0; i < ps->size; i++)//打印每个通讯录元素
			{
				printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n", 
					ps->data[i].name, ps->data[i].age, ps->data[i].sex, 
					ps->data[i].tele, ps->data[i].addr);
			}
		}
	}
}
//查找联系人位置
int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	//查找要删除人的位置
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;//找到返回下标
		}
	}
	return -1;//找不到返回-1
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字:->");
	scanf("%s", name);
	//查找要删除人的位置
	int pos=FindByName(ps, name);//找到返回名字所在的下标，找不到返回-1
	
	if (pos==-1)
	{
		printf("联系人不存在\n");
	}
	else
	{
		//删除
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}

}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字:->");
	scanf("%s", name);
	int pos = FindByName(ps, name);//找到返回名字所在的下标，找不到返回-1
	if (pos == -1)
	{
		printf("联系人不存在\n");
	}
	else
	{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");		
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",
		 ps->data[pos].name, ps->data[pos].age, ps->data[pos].sex,
		 ps->data[pos].tele, ps->data[pos].addr);
			
	}		
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字:->");
	scanf("%s", name);
	int pos = FindByName(ps, name);//找到返回名字所在的下标，找不到返回-1
	if (pos == -1)
	{
		printf("联系人不存在\n");
	}
	else
	{
		printf("请输入名字->");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄->");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别->");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话->");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址->");
		scanf("%s", ps->data[pos].addr);

		printf("修改完成\n");
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
	printf("按姓名排序成功\n");
}

//释放动态开辟的空间
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
	//将通讯录的信息写入文件
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfWrite);
	}
	printf("保存成功\n");
	fclose(pfWrite);
	pfWrite = NULL;
}

void ClearContact(struct Contact* ps)
{
	printf("确定要清空通讯录吗?<Y/N> :>");
	char ch;
	getchar();//清空缓存区里面的\n
	scanf("%c", &ch);
	if (ch == 'Y' || ch == 'y')
	{
		ps->size = 0;
		memset(ps->data, 0, sizeof(ps->data));
		printf("清空成功\n");
	}
	else
	{
		printf("取消清空\n");
	}
	
}