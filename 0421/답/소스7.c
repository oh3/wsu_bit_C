//아래 코드를 분석하세요. 
// scanf -> scanf_s 로
// gets  -> gets_s 로 수정하세요.

//분석이 잘 되는지 자체적으로 검증하시고
//질문 사항이 있으면 질문해 주세요.

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
	printf(" 1. 추가(ADD)\n");
	printf(" 2. 출력(PRINT)\n");
	printf(" 3. 검색(SEARCH)\n");
	printf(" 4. 삭제(DELETE)\n");
	printf(" 5. 종료(EXIT)\n");
	printf("======================\n");

	while (result == 1) 
	{
		printf("메뉴를 선택하시오: ");
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
		printf("1번부터 %d번까지 트랙이 있습니다. 몇 번 트랙에 저장하시겠습니까?", SIZE);
		scanf_s("%d", &i);
		getchar();

		if (num[i - 1] == 1)
			printf("이미 저장되어있는 트랙입니다. 다른 트랙번호를 입력하시오\n");
	} while (num[i - 1] == 1);

	printf("제목: ");					gets_s(list[i - 1].title, sizeof(list[i-1].title));
	printf("가수: ");					gets_s(list[i - 1].singer, sizeof(list[i-1].singer));
	printf("종류(팝=0, 재즈=1, 클래식=2, 락=3): ");	scanf_s("%d", &list[i - 1].class);
	getchar();

	num[i - 1] = 1;

	printf("\n");
}

void print_music(Music* list) 
{
	int i;
	do {
		printf("몇 번 트랙의 음악정보를 출력하시겠습니까? ");

		scanf_s("%d", &i);

		if (num[i - 1] == 0)

			printf("해당 트랙엔 저장된 음악정보가 없습니다. 다른 트랙번호를 입력하시오\n");

	} while (num[i - 1] == 0);

	printf("제목: %s\n", list[i - 1].title);

	printf("가수: %s\n", list[i - 1].singer);

	switch (list[i - 1].class) {

	case 0: printf("종류: 팝\n"); break;

	case 1: printf("종류: 재즈\n"); break;

	case 2: printf("종류: 클래식\n"); break;

	case 3: printf("종류: 락\n"); break;

	}

	printf("\n");

}




void search_music(Music* list, int size) {

	char searchName[20];



	printf("검색하고자 하는 노래 제목을 입력하시오: ");

	gets_s(searchName, sizeof(searchName));



	for (int i = 0; i < size; i++) {

		if (strcmp(searchName, list[i].title) == 0) {

			printf("제목: %s\n", list[i].title);

			printf("가수: %s\n", list[i].singer);

			switch (list[i].class) {

			case 0: printf("종류: 팝\n"); break;

			case 1: printf("종류: 재즈\n"); break;

			case 2: printf("종류: 클래식\n"); break;

			case 3: printf("종류: 락\n"); break;

			}

		}

		else {

			printf("찾으시는 노래가 없습니다\n");

			break;

		}

	}

	printf("\n");

}




void delete_music(Music* list) {

	int i;
	do {

		printf("몇 번 트랙의 음악정보를 삭제하시겠습니까? ");

		scanf_s("%d", &i);

		if (num[i - 1] == 0)

			printf("해당 트랙엔 저장된 음악정보가 없습니다. 다른 트랙번호를 입력하시오\n");

	} while (num[i - 1] == 0);



	num[i - 1] = 0;

	printf("%d번 트랙의 음악정보가 삭제되었습니다\n", i - 1);

	printf("\n");

}
