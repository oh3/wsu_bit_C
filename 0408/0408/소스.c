#include <stdio.h>

int arr[10];
int initarr;

int main(){

	for (initarr = 0; initarr < 10; initarr++){
		arr[initarr] = 0;

		int idx;
		while (1) {
			printf("[1]입력 [2]전체 출력 [3]삭제 [4]종료\n");
			scanf_s("%d", &idx);
			switch (idx)
			{
			case 1: insertarr(); break;
			case 2: printarr(); break;
			case 3: deletearr(); break;
			case 4: return;
			}
		}

		system("pause");
	}

}

int printarr()
{
	for (initarr = 0; initarr < 10; initarr++)
	{
		printf("%d ", arr[initarr]);

	}
	printf("\n");
	system("pause");
}

int insertarr()
{
	int index;
	int num;
	int a;

	printf("인덱스를 입력하세요. : ");
	scanf_s("%d", &index);

	printf("저장값을 입력하세요. : ");
	scanf_s("%d", &num);
	arr[index] = num;

	printf("arr[%d] = %d", index, num);
	printf("\n");

	for (a = 0; a < 10; a++)
	{
		printf("%d ", arr[a]);

	}
	printf("\n");
}

int deletearr()
{
	int index;
	int num;
	int a;
	printf("인덱스를 입력하세요. : ");
	scanf_s("%d", &index);

	printf("저장값을 입력하세요. : ");
	scanf_s("%d", &num);
	arr[index] = num;
	num = 0;

	for (a = 0; a < 10; a++)
	{
		printf("%d ", arr[a]);

	}
	printf("\n");
}