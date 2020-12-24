#include <stdio.h>

typedef struct tagFood
{
	char name[100];
	int calories;
} Food;

void add_calories(Food info[], int count);
void print_calories(const Food *info, int count); //�� �Լ��� �Ű������� ������ ǥ����
int add_calories1(const Food* info, int count);

void main() 
{
	Food info[10] = { 0 };
	int i = 0, count = 0;
	char an;

	while (1) 
	{
		printf("���������� �����Ͻðڽ��ϱ�?(y/n)");
		scanf_s("%c", &an, sizeof(char));
		getchar();			//'\n' ����
		if (an == 'n')
			break;

		printf("�����̸�: ");
		gets_s(info[i].name, sizeof(info[i].name));

		printf("Į�θ�: ");
		scanf_s("%d", &info[i].calories);
		getchar();

		i++;
		count++;
	}
	add_calories(info, count);

	//����1 : �Է��� ��� ������ ������ ���� ����ϼ���.(��, ���޵� count�� Ȱ���Ͽ� �ݺ����� �����ϼ���)
	//        �ε��� ���ĸ�  Į�θ�
	//        ------------------
	//         1     ���̴�    10
	//         2     �ݶ�       5
	//           ...
	print_calories(info, count);

	//����3 : add_calories �Լ��� �����Ͽ�, Į�θ� ���� ��ȯ�ϴ� �Լ��� �����ϼ���.
	int retval = add_calories1(info, count);
	printf("�� Į�θ��� %d�Դϴ�.\n", retval);
}

void print_calories(const Food* info, int count)
{
	printf("%s\t%s\t%s\n", "�ε���", "���ĸ�", "Į�θ�");
	printf("-----------------------------------\n");
	for (int i = 0; i < count; i++)
	{
		printf("%d\t", i + 1);
		printf("%s\t", info[i].name);
		printf("%d\n", info[i].calories);
	}
}



//����2:�迭�� ����� Į�θ��� ���� �����ϱ� ���� �ڵ带 �߰��ϼ���.
void add_calories(Food info[], int count) 
{
	int i, sum = 0;
	for (i = 0; i < count; i++)
		sum  = sum + info[i].calories;  
	printf("�� Į�θ��� %d�Դϴ�\n", sum);
}


int add_calories1(const Food* info, int count)
{
	int i, sum = 0;
	for (i = 0; i < count; i++)
		sum = sum + info[i].calories;

	return sum;
}
