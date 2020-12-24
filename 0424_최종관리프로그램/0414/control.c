//control.c

#include "std.h"

#define FILENAME	"memberlist.ccm"

//전역 변수  : 함수 밖에 선언된 변수 
member g_memlist[DATAMAX];

void con_init()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		g_memlist[i].flag = 0;
	}
}

void con_selectall()
{	
	printf("회원번호\t이름\t성별\t전화번호\n");
	printf("----------------------------------------------\n");
	for (int i = 0; i < DATAMAX; i++)
	{
		member mem = g_memlist[i];

		//데이터가 존재할 때만 출력 
		if(mem.flag == 1)
			printf("[%2d]\t\t%s\t%s\t%s\n", 
				mem.number, mem.name,
				mem.gender =='m'?"남":"여", mem.phone);
	}
}

void con_insert()
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
		if (g_memlist[idx].flag == 1)
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
	strcpy_s(g_memlist[idx].name, sizeof(g_memlist[idx].name), name); //string.h
	g_memlist[idx].gender = gender;
	g_memlist[idx].number = idx + 1;
	strcpy_s(g_memlist[idx].phone, sizeof(g_memlist[idx].phone), phone);
	g_memlist[idx].flag = 1;

	printf("저장되었습니다.\n");
}

void con_select()
{
	//검색할 회원ID를 입력받는다.
	int number;
	printf("회원ID 입력 : ");
	scanf_s("%d", &number);

	//검색 알고리즘 
	int idx = numbertoidx(number);
	if (idx == -1)
	{
		printf("데이터가 없습니다.\n");
		return;
	}

	printf("[%d번째 인덱스]\n", idx);
	printf("회원 번호 : %d\n", g_memlist[idx].number);
	printf("이름      : %s\n", g_memlist[idx].name);
	printf("성별      : %s\n", (g_memlist[idx].gender == 'm' ? "남" : "여"));
	printf("전화번호  : %s\n", g_memlist[idx].phone);
}

void con_update()
{
	//검색할 회원이름을 입력받는다.(O)	
	char name[20];
	printf("회원 이름를 입력");
	gets_s(name, sizeof(name)); //엔터키를 가져와서 '\0'문자로 변경..

	int idx = nametoidx(name);
	if (idx == -1)
	{
		printf("데이터가 없습니다.\n");
		return;
	}

	char phone[20];
	printf("전화번호 : ");
	gets_s(phone, sizeof(phone));

	strcpy_s(g_memlist[idx].phone, sizeof(g_memlist[idx].phone), phone);
	printf("변경되었습니다.\n");
}

void con_delete()
{
	//검색할 회원ID를 입력받는다.
	int number;
	printf("회원ID 입력 : ");
	scanf_s("%d", &number);

	int idx = numbertoidx(number);
	if (idx == -1)
	{
		printf("데이터가 없습니다.\n");
		return;
	}

	g_memlist[idx].flag = 0;
	printf("삭제되었습니다.\n");
}

int numbertoidx(int number)
{
	for (int i = 0; i < DATAMAX; i++)
	{
		member mem = g_memlist[i];
		if (mem.flag ==1 &&  mem.number == number)
			return i;
	}
	return -1;
}

int nametoidx(const char* name)
{
	for (int i = 0; i < DATAMAX; i++)
	{
		member mem = g_memlist[i];
		if (mem.flag == 1 && strcmp(mem.name, name) == 0 )
			return i;
	}
	return -1;
}

void con_file_save()
{
	//1.파일 열기
	FILE* fp;
	errno_t retval = fopen_s(&fp, FILENAME, "wb");	//write + binary
	if (retval != 0)
	{
		printf("파일 열기 에러\n");
		return;
	}

	//2.파일 저장
	//시작주소,  크기( sizeof(g_memlist) * 1), 파일포인터
	fwrite((char*)g_memlist, sizeof(g_memlist),1, fp);

	//3.파일 닫기
	fclose(fp);
}

void con_file_load()
{
	//1.파일 열기
	FILE* fp;
	errno_t retval = fopen_s(&fp, FILENAME, "rb");	//read + binary
	if (retval != 0)
	{
		printf("파일 열기 에러\n");
		return;
	}

	//2.파일 저장
	//시작주소,  크기( sizeof(g_memlist) * 1), 파일포인터
	fread((char*)g_memlist, sizeof(g_memlist), 1, fp);

	//3.파일 닫기
	fclose(fp);
}