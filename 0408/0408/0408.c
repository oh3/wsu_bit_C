#include <stdio.h>

int arr[10];
int initarr();
int Insertarr();
int printarr();
int deletearr();

void exam1();
void exam2();
void exam3();
void exam4();

void main(){

	int idx;
	while (1) {
		printf("[1]�Է�[2]��ü���[3] ����[4] ����\n");
		scanf_s("%d", &idx);
		switch (idx)
		{
		case 1: Insertarr(); break;
		case 2: printarr(); break;
		case 3: deletearr(); break;
		case 4: return;
		}
	}

	//exam1();
	//exam2();
	//exam3();
	//exam4();

}

int initarr(){
	//�ݺ����� �̿��Ͽ� arr �� ��� ������ 0 ���� �ʱ�ȭ �ϴ� �Լ��� �����Ѵ�.
	for (int i = 0; i < 10; i++)
		arr[i] = 0;

}

int printarr(){

	//printarr ��� �̸��� �Լ��� �����, �迭�� ��� ������ �� �ٷ� ����Ѵ�.
	for (int i = 0; i < 10; i++)
		printf(arr[i]);

}

int Insertarr(){
	
	int index; // �����ε���
	int savenum; //���尪

	//����ڷκ��� �ε��� �Է� ����
	printf(">> �ε��� �Է� : ");
	scanf_s("%d", &arr);

	//����ڷ� ���� ���尪�� �Է� ����.
	printf(">> ���尪 �Է� : ");
	scanf_s("%d", &savenum);

	//arr�� index�� ���尪�� �����Ѵ�.
	arr[index] = savenum;

	//printarr �Լ��� ȣ���Ͽ� ����� Ȯ���Ѵ�.
	printarr;

}


int deletearr(){

	int index;
	
	printf(">> �迭�� �ε��� �Է� : ");
	scanf_s("%d", index);

	arr[index] = 0;

	//printarr �Լ��� ȣ���Ͽ� ����� Ȯ���Ѵ�.
	printarr;;

}

//���� 1
//1. ���� ������ �������� ������ �ۼ��ϼ���.(ù��° �ۼ��� ������ ������ ��)
void exam1(){
	
	/*
	//			Ÿ��	�� /�ּҰ�	����	�޸�ũ��	����
	int * data[2];  //int		�ּ�	  2			8		 2
	char* p1;		//char		�ּ�	  1			1		 1 
	char    **p2;	//char		�ּ�	  1			1		 2
	int *p3[5];		//int		�ּ�	  5			20		 2
	double *p4;		//double	�ּ�	  1			8		 1
	*/

}

//����2
//�ּ��� �ִ� �ڵ带 �ۼ��Ͻÿ�
void exam2(){
	
	
	//������ 1�� ������ �� �ִ� num �̶�� �̸��� ���� ����
	int num;

	//num�� ����� �Է��� ���� �� ����
	printf(">> ����� �Է� : ");
	scanf_s("%d", &num);

	//������ �ּҸ� ������ �� �ִ� pnum�̶�� �̸��� ���� ����
	int* pnum;

	//pnum �� num�� �ּҸ� ����
	pnum = &num;

	//num�� ���� num�� �ּҰ� ���
	printf("num�� �� : %d\n", num);
	printf("num�� �ּҰ� : %p\n", pnum);

	//pnum�� ���� pnum�� �ּҰ� pnum�� ���������� ���
	printf("pnum��   �� : %d\n", pnum);
	printf("pnum�� �������� : %d\n", *pnum);

	//pnum�� ������ ������ �̿��ؼ� num�� ���� 50���� ����
	*pnum = 50;

	//num�� �� ���
	printf("num�� �� : %d\n", num);
	

	//=====================================================

	// ���ڸ� 5�� ������ �� �ִ� arr �迭������ �����ϰ�, ����� ���ÿ� a,b,c,d, e �� ���ڷ� �ʱ�ȭ
	char arr[6] = { 'a', 'b', 'c', 'd', 'e' };

	//������ �ּҸ� ������ �� �ִ� pch1 �̶�� �̸��� ���� ����
	char* pch1;

	//������ �ּҸ� ������ �� �ִ� pch2 �̶�� �̸��� ���� ����
	char* pch2;

	//pch1�� arr �迭�� �ּҸ� ����
	pch1 = arr;

	//pch2�� arr �迭�� �ε��� 2�� �ּҸ� ����
	pch2 = &arr[2];

	//arr �� pch1�� �̿��Ͽ� arr�� �ִ� b ���ڸ� ���� ���
	printf("arr : %c\n", arr[1]);
	printf("pch1 : %c\n", pch1[1]);

	//arr �� pch2�� �̿��Ͽ� arr�� �ִ� a ���ڸ� ���� ���
	printf("arr : %c\n", arr[0]);
	printf("pch2: %c\n", pch2[-2]);

	//pch1�� �̿��Ͽ� arr�� ����� d �� �빮�� D�� ����
	pch1[3] = 'D';
	printf("pch1[3] : %c\n", pch1[3]);

	//pch2�� �̿��Ͽ� arr�� ����� e �� �ҹ��� E�� ����
	pch2[1] = 'E';
	printf("pch2[1] : %c\n", pch2[1]);

	//arr�� �̿��Ͽ� �迭 ��ü ���ڸ� ���(for�� ���)
	pch2[1] = 'd';
	for (int i = 0; i < 5; i++)
		printf("%c\n", arr[i]); 

}

//����3
//�޸� �׸��� �׸���, ��� ����� �����ÿ�.
void exam3(){

	//a�� ũ�Ⱑ �����ο� �迭 ����
	int a[] = { 2, 3, 4, 5, 6, 8 };

	printf("%d\n", sizeof(a));		//24
	printf("%d\n", sizeof (a[0]));  //4
	printf("%d\n", (*a + 5));		//7
	printf("%d\n", *(a + 4));		//6
	printf("%d\n", *a);				//2

}


//���� 4
//�޸��� �׸��� �׸���, ��� ����� �����ÿ�
void exam4(){


	//a�� ũ�⸦ �ڵ�
	int arr[] = { 2, 3, 4, 5, 6, 8 };
	int *ip = arr;

	printf("%d\n", arr);	//2750740
	printf("%d\n", ip);		//2750740
	printf("%d\n", ip + 2); //2750748
	printf("%d\n", ip[2]);	//4
	printf("%d\n", *(arr + 1)); //3
	
}

//���� 5
//�Ʒ� �ڵ带 �ۼ��Ͻÿ�.(���������� �Լ��� �ۼ��ϰ�, main�Լ����� ȣ���ϴ� �ڵ�)
