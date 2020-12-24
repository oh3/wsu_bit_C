// 컴파일러가 문법 검사를 하는 방법
// 하나의 파일을 위에서 아래로...

//3. 함수의 선언 : 해당 함수가 있다는 사실을 컴파일러에게 미리 알려줌.
void goo(); // 세미콜론, 문장의 끝
void qoo();
void woo();

void goo(){

	qoo();

}

void qoo(){

	goo();

}

//woo 함수에서 goo함수를 호출
void woo(){
				
	goo();		// 2. goo 함수를 호출하는 코드

}