
#include <stdio.h>

typedef struct tagEmployee
{
	int id_number;
	char name[20];
	int ph_number;
	int age;
} Employee;

int select_number(const Employee *people, int size, int min, int max);
Employee select_maxage(const Employee *people, int size);
void print_employee(Employee emp);

void main() 
{
	Employee people[5];
	int i, count = 0;

	for (i = 0; i < 5; i++) 
	{
		printf("%d��° ��������\n", i + 1);
		printf("�����ȣ: "); 	scanf_s("%d", &people[i].id_number);
		getchar();

		printf("�̸�: ");		gets_s(people[i].name, sizeof(people[i].name));

		printf("��ȭ��ȣ: ");	scanf_s("%d", &people[i].ph_number);

		printf("����: ");		scanf_s("%d", &people[i].age);
	}
	printf("\n");

	printf("���̰� 20�̻� 30������ ����\n");

	for (i = 0; i < 10; i++) 
	{
		if (people[i].age >= 20 && people[i].age <= 30) 
		{
			puts(people[i].name);
			count++;
		}
	}
	printf("�ش� ���ο�: %d��\n", count);

	//����1 �� ������ �Լ�ȭ ��Ű����.	
	//�������� : �迭, ���尳��, 20�̻�, 30������ ���� �� ��ȯ
	int retval = select_number(people, 5, 20, 30);
	printf("�ش� ���ο�: %d��\n", retval);

	//����2 ���� ���̰� ���� ������ ��ȯ�ϼ���.
	Employee em = select_maxage(people, 5);

	//����3 �ش� ������ ������ ����ϼ���.
	print_employee(em);
}


int select_number(const Employee* people, int size, int min, int max)
{
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		if (people[i].age >= 20 && people[i].age <= 30)
		{
			puts(people[i].name);
			count++;
		}
	}

	return count;
}

Employee select_maxage(const Employee* people, int size)
{
	Employee maxemp = people[0];
	for (int i = 1; i < size; i++)
	{
		if (maxemp.age < people[i].age)
			maxemp = people[i];
	}

	return maxemp;
}

void print_employee(Employee emp)
{
	printf("�����ȣ : %d\n", emp.id_number);
	printf("�̸� : %s\n", emp.name);
	printf("��ȭ��ȣ : %d\n", emp.ph_number);
	printf("���� : %d\n", emp.age);
}