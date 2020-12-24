#include <stdio.h>

//학생 정보 구조체
typedef struct tagstudent{

	char name[20];
	int grad;	//1~4
	int kor;
	int eng;
	int mat;

	float average;

}student;

//사용자 입력받아 출력하는 함수
void inputstudent(student *pstu);
//평균함수
void calaverage(student* pstu);
//출력함수
void printstu(student* pstu);

int main(){

	//구조체 학생변수 가져옴
	student stu1;

	//입력 받는 함수
	inputstudent(&stu1);
	calaverage(&stu1);
	printstu(&stu1);
	
	return 0;
}

//사용자 입력받아 출력하는 함수
void inputstudent(student *pstu){

	printf("이름 : ");		scanf_s("%s", pstu->name, sizeof(pstu->name));
	printf("학년(1~4) : ");	scanf_s("%d", &pstu->grad);
	printf("국어 : ");		scanf_s("%d", &pstu->kor);
	printf("영어 : ");		scanf_s("%d", &pstu->eng);
	printf("수학 : ");		scanf_s("%d", &pstu->mat);
}

//평균 함수
void calaverage(student* pstu){	pstu->average = (pstu->kor + pstu->eng + pstu->mat) / 3.0f;}

//출력 함수
void printstu(const student* pstu){	printf("이름 : %s\n", pstu->name);	printf("학년 : %d\n", pstu->grad);	printf("국어점수 : %d\n", pstu->kor);	printf("영어점수 : %d\n", pstu->eng);	printf("수어점수 : %d\n", pstu->mat);	printf("평균 : %.1f\n", pstu->average);}


