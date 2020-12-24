//sample.c

#include <stdio.h>
#include <string.h>
#include "sample.h"

//전역 변수  : 함수 밖에 선언된 변수 
/*회원정보
회원번호(정수), 이름(문자열), 성별(문자), 전화번호(문자열)
회원번호가 -1이면 해당 인덱스에 데이터가 없는것으로 판단!
회원번호는 배열의 인덱스 +1의 값으로 자동 설정된다. 
*/
int g_number[DATAMAX];			//회원번호
char g_name[20][DATAMAX];		//이름 
char g_gender[DATAMAX];			//성별
char g_phone[20][DATAMAX];		//전화번호

void sample_init()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		g_number[i] = -1;
	}
}

void sample_printall()
{	
	printf("회원번호\t이름\t성별\t전화번호\n");
	printf("----------------------------------------------\n");
	for (int i = 0; i < DATAMAX; i++)
	{
		if( g_number[i] != -1)
			printf("[%02d]\t\t%s\t%s\t%s\n", g_number[i],g_name[i],
				g_gender[i] =='m'?"남":"여", g_phone[i]);
	}
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
	int idx;
	char name[20], phone[20];
	char gender;

	printf("저장위치(0~%d) : ", DATAMAX-1);
	scanf_s("%d", &idx);
	getchar();
	if (idx < 0 || idx >= DATAMAX)
	{
		printf("잘못된 인덱스를 입력하셨습니다.\n");
		return;
	}
	else
	{
		if (g_number[idx] != -1)
		{
			printf("데이터가 존재합니다.\n");
			return;
		}
	}
	printf("이름 : ");
	gets_s(name, sizeof(name));

	printf("성별(m or f) : ");
	scanf_s("%c", &gender, sizeof(char));
	getchar();

	printf("전화번호 : ");
	gets_s(phone, sizeof(phone));

	//문자열을 저장공간에 대입할 때는 다른 방법이 있다. 
	strcpy_s(g_name[idx], sizeof(g_name[idx]), name); //string.h
	g_gender[idx] = gender;
	g_number[idx] = idx + 1;
	strcpy_s(g_phone[idx], sizeof(g_phone[idx]), phone);

	printf("저장되었습니다.\n");
}

void sample_select()
{
	//검색할 회원ID를 입력받는다.
	int number;
	printf("회원ID 입력 : ");
	scanf_s("%d", &number);

	//배열을 순회하면서 배열이 가지고 있는 값과 입력한 숫자값을 비교한다.
	//만약, 동일하면 아래와 같이 출력한다.
	//     1번째 인덱스 -> 10
	//       못찾았으면 "숫자가 없습니다." 출력
	for (int i = 0; i < DATAMAX; i++)  // 4  3 -1  0 3 2 .....
	{
		if (g_number[i] == number)  // 3
		{
			printf("[%d번째 인덱스]\n", i);
			printf("회원 번호 : %d\n", g_number[i]);
			printf("이름      : %s\n", g_name[i]);
//			printf("성별      : %c\n", g_gender[i]);
			printf("성별      : %s\n", (g_gender[i] == 'm' ? "남" : "여"));
			printf("전화번호  : %s\n", g_phone[i]);
			return;
		}
	}
	printf("해당 번호는 없습니다.\n");
}

void sample_update()
{
	//검색할 회원이름을 입력받는다.(O)
	char phone[20];
	char name[20];
	printf("회원 이름를 입력");
	gets_s(name, sizeof(name)); //엔터키를 가져와서 '\0'문자로 변경..

	for (int i = 0; i < DATAMAX; i++)  
	{
		//문자열 비교함수
		//strcmp 첫번째인자가 크다면양수, 같다면 0, 작다면 음수 
		if (strcmp(g_name[i],name)==0)	//배열의 이름을 비교 : 이건 무조건 0반환
		{
			//변경할 데이터를 입력받고 배열을 수정
			//전화번호를 입력받고 전화번호를 수정하세요.(insert)
			printf("전화번호 : ");
			gets_s(phone, sizeof(phone));

			strcpy_s(g_phone[i], sizeof(g_phone[i]), phone);

			printf("변경되었습니다.\n");

			return;
		}
	}
	printf("숫자가 없습니다.\n");
}

void sample_delete()
{
	//검색할 회원ID를 입력받는다.
	int number;
	printf("회원ID 입력 : ");
	scanf_s("%d", &number);

	for (int i = 0; i < DATAMAX; i++)  
	{
		if (g_number[i] == number)
		{
			g_number[i] = -1;
			//이름, 전화번호에 각각  "" 을 저장...
			strcpy_s(g_name[i], sizeof(g_name[i]), " ");
			strcpy_s(g_phone[i], sizeof(g_phone[i]), " ");

			printf("삭제되었습니다.\n");
			return;
		}
	}
	printf("숫자가 없습니다.\n");
}
