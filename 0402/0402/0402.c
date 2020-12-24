#include <stdio.h>
#include <stdlib.h> //exam5
#include <time.h> //exam5

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();

void main(){

	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	exam6();

}

void exam1(){

	//1. ���� ����
	int num;
	int arr[3]; // �迭����

	//2. ���� �ʱ�ȭ(����)
	num = 10;
	arr[0] = 20;
	arr[1] = 30;
	arr[2] = 40;

	//2.2 ���� �ʱ�ȭ(�Է� - scanf_s)
	printf(">> ���� �Է� : ");
	scanf_s("%d", &num);

	getchar();

	printf(">> ���� �Է� : ");
	scanf_s("%d", &arr[0]);

	printf(">> ���� �Է� : ");
	scanf_s("%d", &arr[1]);

	printf(">> ���� �Է� : ");
	scanf_s("%d", &arr[2]);





	//3. ���� ���
	printf("���� ��� : %d\n", num);
	printf("�迭 ��� : %d\n", arr[0]);
	printf("�迭 ��� : %d\n", arr[1]);
	printf("�迭 ��� : %d\n", arr[2]);

}

//3���� ������ ���� �� �� �ִ�  num�̶�� �̸���
//�迭 ���� ����, ����� �Է��� ���� ���� 3���� �Է�
//�޾ƶ� ����� ������ ���� result ������ �����ض�
//����� ����Ͻÿ�.
void exam2(){

	//��������
	int num[3];
	int result;

	//�Է�
	printf(">> ���� �Է� : ");
	scanf_s("%d", &num[0]);

	printf(">> ���� �Է� : ");
	scanf_s("%d", &num[1]);

	printf(">> ���� �Է� : ");
	scanf_s("%d", &num[2]);

	//���
	result = num[0] + num[1] + num[2];

	//���
	printf("�հ� : %d\n", result);

}

//3���̼�
//4���� ������ ���� �� �� �ִ�  arr�̶�� �̸���
//�迭 ���� ����, ����� �Է��� ���� ���� 3���� �Է�
//�޾ƶ� ����� ������ ���� result ������ �����ض�
//����� ������ ����� ����� average������ �����ض�
//����� ����Ͻÿ�. (�� ����� �Ҽ��� 1�ڸ�����)
void exam3(){

	//��������
	int arr[4];
	int result = 0;
	float average = 0;

	//�����Է�
	printf(">> ���� �Է� : ");
	scanf_s("%d", &arr[0]);

	printf(">> ���� �Է� : ");
	scanf_s("%d", &arr[1]);

	printf(">> ���� �Է� : ");
	scanf_s("%d", &arr[2]);

	printf(">> ���� �Է� : ");
	scanf_s("%d", &arr[3]);

	//arr �迭�� �հ�
	result = arr[0] + arr[1] + arr[2] + arr[3];

	//arr �հ��� ���
	//average = result / 4.0f;
	average = (float)result / 4;

	//���
	printf("�հ� : %d\n", result);
	printf("��� : %.1f\n", average);
}

//���� �����
// rand�� Ŀ���ø��� F1 ������ ������� ����� ��������
// #include <stdlib.h>
void exam5(){

	//�����ų�������� �ð����� Ű�� ������
	//#include <time.h>
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++){
		// 0 ~ ������ MAX ����
		// 0 ~ 99������ ������ ������ ��� �;�.(������ ������)
		//int r = rand() % 100; //���� ���� 100���� ������ ��.
		
		//ex)1���� 99������ ������ ������ ��� �;�
		int r = (rand() % 99) + 1; // 1 ~ 100

		printf("%d\n", r);
	}

}

//100���� ������ ������ ���ִ� arr�̸��� �迭 ��������
//����� �Է��� ���ؼ� ���� 100���� �Է¹޾ƶ�.

// MAXDATA ==> 1000���� ġȯ
#define MAXDATA 1000

void exam4(){

	int arr[MAXDATA];

	//�����Լ�
	srand((unsigned)time(NULL));

	//�迭�� for�� -> i������ �迭�� �ε����� �̿��ϴ� �뵵�θ�;
	//������ �̿��� �迭�� ��� ������ �ʱ�ȭ��.
	for (int i = 0; i < MAXDATA; i++){ // 0 ~ 99

		arr[i] = rand() % 100;

	}
	//��ü ���(��ȸ) (����ϰ��ֱ�)
	// ��ȸ : ���ڵ尡 ������ �ִ� ��� �ڵ带 ���
	for (int i = 0; i < MAXDATA; i++){

		// 20���� ����ó�� i�� 0�� �ƴҶ�
		if (i % 20 == 0 && i != 0)
			printf("\n");

		// 3ĭ¥�� arr[i] ���
		printf("%3d", arr[i]);

	}
}

//������ 1000�� ���� �� �� �ִ� arrnum �迭�� �����ϰ�,
//1~99������ �������� �߻����� �ʱ�ȭ �Ͻÿ�,
//��� �迭�� ����� ����� �հ� ����� ����Ͻÿ�. (�� ����� �Ҽ��� 1�ڸ�����)
//����ڷκ��� 1~99������ ���� �Է¹޾�
//�ش� ���� �迭�� � ����Ǿ��ִ��� Ȯ���غ��ÿ�.

#define MAXDATA1 1000
void exam6(){

	//1. ��������
	int arrnum[MAXDATA1];
	int sum = 0;
	double average = 0.0;

	//rand �Լ�
	srand((unsigned)time(NULL));

	//2. �ʱ�ȭ
	for (int i = 0; i < MAXDATA1; i++){

		arrnum[i] = rand() % 99 + 1;

	}

	//3. ����
	for (int i = 0; i < MAXDATA1; i++){
		sum = sum + arrnum[i];
	}

	average = (double)sum / MAXDATA1;

	//4. ��� ���
	printf("�հ� : %d\n", sum);
	printf("��� : %.1f\n", average);

	//==============================================
	int number;
	int count = 0;

	printf("���� �Է�(1~99) : ");
	scanf_s("%d", &number);

	for (int i = 0; i < MAXDATA1; i++){
		if (arrnum[i] == number){
			count++;
		}
	}

	printf("ã�� ������ ������ : %d\n", count);
}