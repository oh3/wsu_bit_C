#include <stdio.h>
#include <string.h>

/*
struct tagstu 타입키워드를 갖는 학생 구조체 정의

맴버1 : char name[20];      //이름
맴버2 : int  grad;          //학년
맴버3 : char subject[20];   //학과
맴버4 : int  number;        //학번
*/

//구조체 타입 정의
struct tagstu{

	char name[20];      //이름
	int grad;          //학년
	char subject[20];   //학과
	int number;        //학번

};

//학생정보를 입력
void input_stu(struct tagstu* pstu){	strcpy_s((*pstu).name, sizeof((*pstu).name), "홍길동");	(*pstu).grad = 1;	strcpy_s((*pstu).subject, sizeof((*pstu).subject), "컴퓨터학과");	(*pstu).number = 1234567;
}

//학생 정보를 출력
void print_stu(struct tagstu d){

	printf("이름 : %s\n", d.name);
	printf("학과 : %s\n", d.subject);
	printf("학년 : %d\n", d.grad);
	printf("학번 : %d\n", d.number);

}

//학년을 변경
void update_stu(struct tagstu* pstu, int grad){	(*pstu).grad = grad;}

//변경된 결과가 출력
void print_stu1(char name[], int grad, char* subject, int number){

	printf("이름 : %s\n", name);
	printf("학과 : %s\n", subject);
	printf("학년 : %d\n", grad);
	printf("학번 : %d\n", number);

}


int main(){

	//메인문
	struct tagstu stu1;

	//strcopy
	input_stu(&stu1);   //학생 정보를 입력..(문자열은 문자열 함수를 활용)

	print_stu(stu1);   //학생 정보를 출력

	update_stu(&stu1, 3);  //학년을 추가로 전달, 전달한 학년으로 stu1의 정보를 수정

	//변경된 결과가 출력
	print_stu1(stu1.name, stu1.grad, stu1.subject, stu1.number);

	return 0;
}
