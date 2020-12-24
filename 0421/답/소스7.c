//�Ʒ� �ڵ带 �м��ϼ���. 
// scanf -> scanf_s ��
// gets  -> gets_s �� �����ϼ���.

//�м��� �� �Ǵ��� ��ü������ �����Ͻð�
//���� ������ ������ ������ �ּ���.

#include <stdio.h>
#include <string.h>

#define SIZE 20

typedef struct tagMusic
{
	char title[20];
	char singer[20];
	int class;
} Music;


int num[SIZE] = { 0 };

void add_music(Music* list);
void print_music(Music* list);
void search_music(Music* list, int size);
void delete_music(Music* list);

void main() 
{
	Music list[SIZE];
	int n, result = 1;

	printf("======================\n");
	printf(" 1. �߰�(ADD)\n");
	printf(" 2. ���(PRINT)\n");
	printf(" 3. �˻�(SEARCH)\n");
	printf(" 4. ����(DELETE)\n");
	printf(" 5. ����(EXIT)\n");
	printf("======================\n");

	while (result == 1) 
	{
		printf("�޴��� �����Ͻÿ�: ");
		scanf_s("%d", &n);
		getchar();

		switch (n) 
		{
		case 1:			add_music(list);			break;
		case 2:			print_music(list);			break;
		case 3:			search_music(list, SIZE);	break;
		case 4:			delete_music(list);			break;
		case 5:			result = 0;
		}
	}

}

void add_music(Music* list) 
{
	int i;
	do {
		printf("1������ %d������ Ʈ���� �ֽ��ϴ�. �� �� Ʈ���� �����Ͻðڽ��ϱ�?", SIZE);
		scanf_s("%d", &i);
		getchar();

		if (num[i - 1] == 1)
			printf("�̹� ����Ǿ��ִ� Ʈ���Դϴ�. �ٸ� Ʈ����ȣ�� �Է��Ͻÿ�\n");
	} while (num[i - 1] == 1);

	printf("����: ");					gets_s(list[i - 1].title, sizeof(list[i-1].title));
	printf("����: ");					gets_s(list[i - 1].singer, sizeof(list[i-1].singer));
	printf("����(��=0, ����=1, Ŭ����=2, ��=3): ");	scanf_s("%d", &list[i - 1].class);
	getchar();

	num[i - 1] = 1;

	printf("\n");
}

void print_music(Music* list) 
{
	int i;
	do {
		printf("�� �� Ʈ���� ���������� ����Ͻðڽ��ϱ�? ");

		scanf_s("%d", &i);

		if (num[i - 1] == 0)

			printf("�ش� Ʈ���� ����� ���������� �����ϴ�. �ٸ� Ʈ����ȣ�� �Է��Ͻÿ�\n");

	} while (num[i - 1] == 0);

	printf("����: %s\n", list[i - 1].title);

	printf("����: %s\n", list[i - 1].singer);

	switch (list[i - 1].class) {

	case 0: printf("����: ��\n"); break;

	case 1: printf("����: ����\n"); break;

	case 2: printf("����: Ŭ����\n"); break;

	case 3: printf("����: ��\n"); break;

	}

	printf("\n");

}




void search_music(Music* list, int size) {

	char searchName[20];



	printf("�˻��ϰ��� �ϴ� �뷡 ������ �Է��Ͻÿ�: ");

	gets_s(searchName, sizeof(searchName));



	for (int i = 0; i < size; i++) {

		if (strcmp(searchName, list[i].title) == 0) {

			printf("����: %s\n", list[i].title);

			printf("����: %s\n", list[i].singer);

			switch (list[i].class) {

			case 0: printf("����: ��\n"); break;

			case 1: printf("����: ����\n"); break;

			case 2: printf("����: Ŭ����\n"); break;

			case 3: printf("����: ��\n"); break;

			}

		}

		else {

			printf("ã���ô� �뷡�� �����ϴ�\n");

			break;

		}

	}

	printf("\n");

}




void delete_music(Music* list) {

	int i;
	do {

		printf("�� �� Ʈ���� ���������� �����Ͻðڽ��ϱ�? ");

		scanf_s("%d", &i);

		if (num[i - 1] == 0)

			printf("�ش� Ʈ���� ����� ���������� �����ϴ�. �ٸ� Ʈ����ȣ�� �Է��Ͻÿ�\n");

	} while (num[i - 1] == 0);



	num[i - 1] = 0;

	printf("%d�� Ʈ���� ���������� �����Ǿ����ϴ�\n", i - 1);

	printf("\n");

}
