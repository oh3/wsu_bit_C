
#include <stdio.h>

//����ü�� �����ϰ� Ÿ�� Ű���带 �����ϴ� �����Դϴ�.
//struct tagComplex ��� Ÿ���� ����� ����, Complex��� �� �ٸ� Ű���尡 �����˴ϴ�.
//������ Ÿ�� Ű���带 ����� �� struct ��� Ű���� ���� �� �ܾ�� ��� �����մϴ�.
//���� ���Ǵ� �����Դϴ�. 
typedef struct tagComplex
{
	double real;
	double imag;
} Complex;


//�� ���� complex ���� ���� �޾� ���� ����ϴ� �Լ��Դϴ�. 
void add_complex(Complex x, Complex y);
void minus_complex(Complex x, Complex y);
Complex add_complex1(Complex x, Complex y);
void print_complex1(Complex c);
void print_complex2(double r, double i);

void main() 
{
	Complex x, y;

	printf("ù ��° ���Ҽ��� �Ǽ���: ");	scanf_s("%lf", &x.real);

	printf("ù ��° ���Ҽ��� �����: ");	scanf_s("%lf", &x.imag);

	printf("�� ��° ���Ҽ��� �Ǽ���: ");	scanf_s("%lf", &y.real);

	printf("�� ��° ���Ҽ��� �����: ");	scanf_s("%lf", &y.imag);

	add_complex(x, y);

	//����1. ���̳ʽ� ������ �ϰ� ����� ����ϴ� �Լ��� ������ �ּ���.
	//       ��� ������ add_complex �Լ��� �����մϴ�. 
	minus_complex(x, y);

	//����2. ���� ������ ����� ��ȯ�ϴ� �Լ��� ������ �ּ���.
	Complex retcom1 = add_complex1(x, y);

	//����3. ���޵� complex ����� ����ϼ���. ��� ���´� ������ �����ϴ�.
	//       10 + 3i  : 10�� �Ǽ���, 3�� �����
	print_complex1(retcom1);
	print_complex2(retcom1.real, retcom1.imag);
}

void add_complex(Complex x, Complex y) 
{

	printf("���� �Ǽ���: %lf\n", x.real + y.real);
	printf("���� �����: %lf\n", x.imag + y.imag);
}

void minus_complex(Complex x, Complex y)
{

	printf("���� �Ǽ���: %lf\n", x.real - y.real);
	printf("���� �����: %lf\n", x.imag - y.imag);
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