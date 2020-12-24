//sample.c

#include <stdio.h>

#include "sample.h"

//전역 변수  : 함수 밖에 선언된 변수 
int g_arr[DATAMAX];

void sample_init()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		g_arr[i] = -1;
	}
}

void sample_printall()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		printf("%5d", i);
	}
	printf("\n");
	printf("---------------------------------------------------\n");
	for (int i = 0; i < DATAMAX; i++)
	{
		printf("%5d", g_arr[i]);
	}
	printf("\n");
}

/*
저장위치와 저장값을 입력받고(선언및 초기화) 전역배열에 저장(연산)
결과를 출력하시오.(결과출력)
예외처리:
1) 사용자가 입력한 인덱스가 범위를 벗어 났을 경우
위치 :사용자가 인덱스를 입력한 후 ~ 저장 전
2) 사용자가 입력한 인덱스의 위치에 데이터가 존재하는 경우
-1이면 존재X, -1이 아니면 존재
*/
void sample_insert()
{
	int idx, data;

	printf("저장위치(0~%d) : ", DATAMAX - 1);
	scanf_s("%d", &idx);
	if (idx < 0 || idx >= DATAMAX)
	{
		printf("잘못된 인덱스를 입력하셨습니다.\n");
		return;
	}
	else
	{
		if (g_arr[idx] != -1)
		{
			printf("데이터가 존재합니다.\n");
			return;
		}
	}

	printf("저장값 : ");
	scanf_s("%d", &data);

	g_arr[idx] = data;

	printf("저장되었습니다.\n");
}

void sample_select()
{
	//검색하고자 하는 숫자를 입력받는다.
	int number;

	printf("숫자 입력 :");
	scanf_s("%d", &number);

	//배열을 순회하면서 배열이 가지고 있는 값과 입력한 숫자값을 비교한다.
	//만약, 동일하면 아래와 같이 출력한다.
	//     1번째 인덱스 -> 10
	//       못찾았으면 "숫자가 없습니다." 출력
	for (int i = 0; i < DATAMAX; i++){
		if (g_arr[i] == number){
			printf("%d번째 인덱스 -> %d\n", i, g_arr[i]);
			return;
		}
	}
	printf("숫자가 없습니다.\n");
}

void sample_update()
{
	//검색하고자 하는 숫자를 입력받는다.
	int number;

	printf("숫자 입력 :");
	scanf_s("%d", &number);
	//배열을 순회하면서 배열이 가지고 있는 값과 입력한 숫자값을 비교한다.
	//만약, 동일하면 아래와 같이 출력한다.
	//     사용자로부터 수정할 값을 입력받는다.
	//     입력받은 값을 찾은 배열의 인덱스 위치에 저장한다.
	//      못찾았으면 "숫자가 없습니다." 출력
	for (int i = 0; i < DATAMAX; i++){
		if (g_arr[i] == number){
			
			int temp;
			printf("변경할 숫자를 입력 : ");
			scanf_s("%d", &temp);

			g_arr[i] = temp;

			printf("변경되었습니다.");

			return;
		}
	}
	printf("숫자가 없습니다.\n");
}

void sample_delete()
{
	//검색하고자 하는 숫자를 입력받는다.
	int number;

	printf("숫자 입력 :");
	scanf_s("%d", &number);
	//배열을 순회하면서 배열이 가지고 있는 값과 입력한 숫자값을 비교한다.
	//만약, 동일하면 아래와 같이 출력한다.
	//      해당 배열의 인덱스에 저장된 값을 -1로 변경한다.
	//      못찾았으면 "숫자가 없습니다." 출력

	for (int i = 0; i < DATAMAX; i++){
		if (g_arr[i] == number){

			g_arr[i] = -1;

			return;
		}
	}
	printf("숫자가 없습니다.\n");
}
