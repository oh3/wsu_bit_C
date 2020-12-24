//member.h
//구조체 정의는 h파일에서 해야 한다.
//그래야 include 통해서 모든 소프파일들이 해당 키워들
//알게 된다. 
#pragma once

//struct tagmemeber라는 타입을 생성
//그리고, member 라는 타입 키워드로도 사용 가능

typedef struct tagmember{
	int flag;		//0 : 이면 없는정보 1 : 이면 저정된 정보
	int number;		//회원번호
	char name[20];	//이름
	char gender;	//성별
	char phone[20];	//전화번호
}member;