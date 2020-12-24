#include <stdio.h>

//step 1) 함수로 분할하지 않은 코드 

// 사용자로부터 정수를 하나 입력받는 기능
int inputnumber();
// 사용자로부터 연산자를 하나 입력받는 기능 (inputoper)
char inputoper();
// 입력된 정보로 부터 연산의 결과값을 얻는 기능
float getresult(int n1, int n2, char oper);
int getresult1(int n1, int n2, char oper, float* result);

//결과를 출력하는 기능
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
		printf("잘못된 연산의 결과\n");
		return 0;
	}

	printresult(num1, num2, oper, result);

	return 0;
}


int inputnumber()
{
	int num;

	printf("정수 입력 : ");
	scanf_s("%d", &num);
	getchar();

	return num;
}

char inputoper()
{
	char oper;
	printf("연산자 입력 (+,-,/,*) : ");
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