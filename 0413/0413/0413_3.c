#include <stdio.h>

//step 1) �Լ��� �������� ���� �ڵ� 

// ����ڷκ��� ������ �ϳ� �Է¹޴� ���
int inputnumber();
// ����ڷκ��� �����ڸ� �ϳ� �Է¹޴� ��� (inputoper)
char inputoper();
// �Էµ� ������ ���� ������ ������� ��� ���
float getresult(int n1, int n2, char oper);
int getresult1(int n1, int n2, char oper, float* result);

//����� ����ϴ� ���
void printresult(int n1, int n2, char oper, float result);

int main()
{
	int num1, num2;
	char oper;
	float result;

	num1 = inputnumber();
	num2 = inputnumber();
	oper = inputoper();

	result = getresult(num1, num2, oper);
	int isresult = getresult1(num1, num2, oper, &result);
	if (isresult == 0)
	{
		printf("�߸��� ������ ���\n");
		return 0;
	}

	printresult(num1, num2, oper, result);

	return 0;
}


int inputnumber()
{
	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);
	getchar();

	return num;
}

char inputoper()
{
	char oper;
	printf("������ �Է� (+,-,/,*) : ");
	scanf_s("%c", &oper, sizeof(char));
	getchar();

	return oper;
}

float getresult(int n1, int n2, char oper)
{
	float result;

	switch (oper)
	{
	case '+':   result = (float)n1 + n2; break;
	case '-':   result = (float)n1 - n2; break;
	case '*':   result = (float)n1 * n2; break;
	case '/':   result = (float)n1 / n2; break;
	default:    return -1.0f;
	}

	return result;
}

int getresult1(int n1, int n2, char oper, float* result)
{
	switch (oper)
	{
	case '+':   *result = (float)n1 + n2; break;
	case '-':   *result = (float)n1 - n2; break;
	case '*':   *result = (float)n1 * n2; break;
	case '/':   *result = (float)n1 / n2; break;
	default:    return 0;
	}
	return 1;
}

void printresult(int n1, int n2, char oper, float result)
{
	printf("%d %c %d = %.1f\n", n1, oper, n2, result);
}