
#include <stdio.h>

//구조체를 정의하고 타입 키워드를 정의하는 문법입니다.
//struct tagComplex 라는 타입이 만들어 졌고, Complex라는 또 다른 키워드가 생성됩니다.
//장점은 타입 키워드를 사용할 때 struct 라는 키워드 없이 한 단어로 사용 가능합니다.
//많이 사용되는 문법입니다. 
typedef struct tagComplex
{
	double real;
	double imag;
} Complex;


//두 개의 complex 값을 전달 받아 합을 출력하는 함수입니다. 
void add_complex(Complex x, Complex y);
void minus_complex(Complex x, Complex y);
Complex add_complex1(Complex x, Complex y);
void print_complex1(Complex c);
void print_complex2(double r, double i);

void main() 
{
	Complex x, y;

	printf("첫 번째 복소수의 실수부: ");	scanf_s("%lf", &x.real);

	printf("첫 번째 복소수의 허수부: ");	scanf_s("%lf", &x.imag);

	printf("두 번째 복소수의 실수부: ");	scanf_s("%lf", &y.real);

	printf("두 번째 복소수의 허수부: ");	scanf_s("%lf", &y.imag);

	add_complex(x, y);

	//문제1. 마이너스 연산을 하고 결과를 출력하는 함수를 구현해 주세요.
	//       출력 내용은 add_complex 함수와 동일합니다. 
	minus_complex(x, y);

	//문제2. 합의 연산의 결과를 반환하는 함수를 구현해 주세요.
	Complex retcom1 = add_complex1(x, y);

	//문제3. 전달된 complex 결과를 출력하세요. 출력 형태는 다음과 같습니다.
	//       10 + 3i  : 10은 실수부, 3은 허수부
	print_complex1(retcom1);
	print_complex2(retcom1.real, retcom1.imag);
}

void add_complex(Complex x, Complex y) 
{

	printf("합의 실수부: %lf\n", x.real + y.real);
	printf("합의 허수부: %lf\n", x.imag + y.imag);
}

void minus_complex(Complex x, Complex y)
{

	printf("차의 실수부: %lf\n", x.real - y.real);
	printf("차의 허수부: %lf\n", x.imag - y.imag);
}

Complex add_complex1(Complex x, Complex y)
{
	Complex com;
	com.real = x.real + y.real;
	com.imag = x.imag + y.imag;
	return com;
}

void print_complex1(Complex c)
{
	printf("%.f + %.fi\n", c.real, c.imag);
}

void print_complex2(double r, double i)
{
	printf("%.f + %.fi\n", r, i);
}