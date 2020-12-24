#include <stdio.h>

typedef struct tagFood
{
	char name[100];
	int calories;
} Food;

void add_calories(Food info[], int count);
void print_calories(const Food *info, int count); //위 함수의 매개변수와 동일한 표현임
int add_calories1(const Food* info, int count);

void main() 
{
	Food info[10] = { 0 };
	int i = 0, count = 0;
	char an;

	while (1) 
	{
		printf("음식정보를 저장하시겠습니까?(y/n)");
		scanf_s("%c", &an, sizeof(char));
		getchar();			//'\n' 제거
		if (an == 'n')
			break;

		printf("음식이름: ");
		gets_s(info[i].name, sizeof(info[i].name));

		printf("칼로리: ");
		scanf_s("%d", &info[i].calories);
		getchar();

		i++;
		count++;
	}
	add_calories(info, count);

	//문제1 : 입력한 모든 정보를 다음과 같이 출력하세요.(단, 전달된 count를 활용하여 반복문을 구성하세요)
	//        인덱스 음식명  칼로리
	//        ------------------
	//         1     사이다    10
	//         2     콜라       5
	//           ...
	print_calories(info, count);

	//문제3 : add_calories 함수를 수정하여, 칼로리 합을 반환하는 함수를 구현하세요.
	int retval = add_calories1(info, count);
	printf("총 칼로리는 %d입니다.\n", retval);
}

void print_calories(const Food* info, int count)
{
	printf("%s\t%s\t%s\n", "인덱스", "음식명", "칼로리");
	printf("-----------------------------------\n");
	for (int i = 0; i < count; i++)
	{
		printf("%d\t", i + 1);
		printf("%s\t", info[i].name);
		printf("%d\n", info[i].calories);
	}
}



//문제2:배열에 저장된 칼로리의 합을 저장하기 위한 코드를 추가하세요.
void add_calories(Food info[], int count) 
{
	int i, sum = 0;
	for (i = 0; i < count; i++)
		sum  = sum + info[i].calories;  
	printf("총 칼로리는 %d입니다\n", sum);
}


int add_calories1(const Food* info, int count)
{
	int i, sum = 0;
	for (i = 0; i < count; i++)
		sum = sum + info[i].calories;

	return sum;
}
