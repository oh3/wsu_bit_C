//소스1.c

void woo();

//참조선언 : extern
extern int g_num;


void goo(){

	g_num = 13; //전역변수
	
	woo();
}

void woo(){

}