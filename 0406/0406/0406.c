#include <stdio.h>
#include <stdlib.h>

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

//���� 1��
//���� �迭���� ũ��� �� ����Ʈ�ΰ�? Sizeof �����ڸ� Ȱ���Ͽ� ����� ��� �Ͻÿ�
//(���� ũ��� sizeof �����ڸ� �̿��� ���� �� �ִ�.)
void exam1(){

	//�迭 ����
	int p1[5];
	int p2[3][5];

	char p3[20];
	char p4[2][20];

	//���
	printf("%d byte \n", sizeof(p1));
	printf("%d byte \n", sizeof(p2));
	printf("%d byte \n", sizeof(p3));
	printf("%d byte \n", sizeof(p4));

}

//���� 2��
void exam2(){

	//���� ����
	int num[4] = { 1, 2, 3, 4 };

	// 0��° �ε��� �� ���
	printf("0��° �ε����� �� : %d\n", num[0]);

	// 2��° �ε��� �� ���
	printf("2��° �ε����� �� : %d\n", num[2]);

	//���� ����
	char arr1[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
	char arr2[5] = { 'A', 'B', 'C', 'D', 'E' };

	//arr1�� ����� ���� 'e' ���
	printf("arr1 : %c\n", arr1[4]);
	
	//arr2�� ����� ���� 'C' ���
	printf("arr2: %c\n", arr2[2]);

	//arr1[2] ���ڿ� arr2[3]��° ���ڰ� ������???
	if (arr1[2] == arr2[3]){
		printf("�����ϴ�\n");
	}else{
		printf("�ٸ���\n");
	}

}

//����3
//���� 10���� �����ϴ� arr1��� �̸��� �迭�� �����ϰ�, 1���� �迭�� ��� 0���� �ʱ�ȭ
//�׸��� ���� ����� �� �ٿ� ����� ��
void exam3(){

	//�迭 ����
	int arr1[10];
	int arr2[10] = {1,2,3,4,5,6,7,8,9,10};
	char c[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	int d = 0;
	int e = 0;
	int f = 0;

	for (int i = 0; i < 10; i++){

		arr1[i] = 0;

		printf("arr1[%d] : %d\n",i, arr1[i]);
	}

	for (int i = 0; i < 10; i++){
		printf("arr2[%d] : %d\n", i,arr2[i]);
	}

	for (c[f] == c[0]; f <= 25; f++)
	{
		printf("%c ", c[f]);
	}
	printf("\n");
	system("pause");

}

//���� 4
void exam4(){

	int arr[12] = {0,1,2,3,4,5,6,7,8,9,10,11};
	
	printf("÷�� : ");

	for (int i = 0; i < 12; i++){	
		printf("%2d " ,arr[i]);
	}

	srand((unsigned)time(NULL));

	printf("\n");
	printf("��� : ");
	for (int i = 0; i < 12; i++){

		//ex)1���� 99������ ������ ������ ��� �;�
		int r = (rand() % 19) + 1;

		printf("%2d ", r);
	}
	
}

//���� 5
// XX
void exam5(){

	int arr[12] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

	printf("÷�� : ");

	for (int i = 0; i < 12; i++){
		printf("%2d ", arr[i]);
	}

	srand((unsigned)time(NULL));

	printf("\n");
	printf("��� : ");
	for (int i = 0; i < 12; i++){

		int r = (rand() % 19) + 1;

		printf("%2d ", r);
	}

	printf("\n");
	printf("��ȯ : ");

	for (int i = 0; i < 12; i++){

		int r = (rand() % 19) + 1;

		printf("%2d ", r);
	}



}

void exam6(){


}