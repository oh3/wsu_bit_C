
#include <stdio.h>
#include <string.h>

typedef struct tagEmail
{
	char title[30];
	char toname[20];
	char byname[20];
	char text[100];
	char date[20];
	int primary;

} Email;

void print_email(const Email *x);
void update_email(Email *x, const char *date);
void print_email1(const char *title, const char *date);

void main() 
{
	Email x;

	printf("����: ");
	gets_s(x.title, sizeof(x.title));

	printf("������: ");
	gets_s(x.toname, sizeof(x.toname));

	printf("�߽���: ");
	gets_s(x.byname, sizeof(x.byname));

	printf("����: ");
	gets_s(x.text, sizeof(x.text));

	printf("������¥(yymmdd): ");
	gets_s(x.date, sizeof(x.date));

	printf("�켱����: ");
	scanf_s("%d", &x.primary);

	//����1. Email���� ����� ���� ����� ������¥�� ����ϴ� ����� �Լ��Դϴ�.
	print_email(&x);

	//����2. ������ ���� �� ������¥�� ������ 2��° ���ڷ� ���޵� ������ �����ϼ���.
	update_email(&x, "200421");

	//����3. ����� ���� ��¥ ������ ����ϴ� �Լ��Դϴ�. 
	print_email1(x.title, x.date);
}

void print_email(const Email* x)
{
	printf("���� : %s\n", (*x).title);
	printf("���� : %s\n", (*x).text);
	printf("������¥ : %s\n", (*x).date);
}

void update_email(Email* x, const char* date)
{
	strcpy_s((*x).date, sizeof((*x).date), date);
}

void print_email1(const char* title, const char* date)
{
	printf("���� : %s\n", title);
	printf("��¥ : %s\n", date);
}