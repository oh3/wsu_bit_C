#include <stdio.h>

//�Ʒ� �ڵ带 �м��� �� ������ ������ �����Ͻÿ�.
/*
struct point{
	int x, y;
};

int equal(struct point p1, struct point p2){
	if (p1.x == p2.x && p1.y == p2.y)
		return 1;
	return 0;
}

int quadrant(struct point p){
	if (p.x > 0 && p.y > 0)
		return 1;
	else if (p.x < 0 && p.y>0)
		return 2;
	else if (p.x < 0 && p.y < 0)
		return 3;
	else if (p.x > 0 && p.y < 0)
		return 4;
	else
		return -1;
}

int main(){
	struct point p1, p2;

	printf("���� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d,%d", &p1.x, &p1.y);

	printf("���� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d,%d", &p2.x, &p2.y);

	if (equal(p1, p2) == 1)
		printf("�� ���� ��ġ�մϴ�\n");
	else
		printf("�� ���� ��ġ���� �ʽ��ϴ�\n");

	printf("ù��° ���� %d��и鿡 �ֽ��ϴ�\n", quadrant(p1));
	printf("�ι�° ���� %d��и鿡 �ֽ��ϴ�\n", quadrant(p2));

	return 0;
}
*/

/*
[�簢�� ������ �����ϴ� ���α׷�]
1. struct rect(int width, int height) ����ü ����
*/
struct rect{
	int width;
	int height;
};

//2. ������ ���� ���̸� �Է¹޴� input_rect �Լ�
void input_rect(struct rect* r1){

	(*r1).width = 100;
	(*r1).height = 200;
	
}

//3. 2���� ����ü ������ ���޹޾� ũ�⸦ ���Ͽ� ������ 1, Ʋ���� 0�� ��ȯ�ϴ� equal�Լ�
int equal(struct rect p1, struct rect p2){
	if (p1.width == p2.width && p1.height == p2.height)
		return 1;
	return 0;
}

//4. 1���� ����ü ������ ���޹޾� ���̸� ��ȯ�ϴ� rectsize �Լ� 
int rectsize(struct rect* p1){

	return (*p1).height;
}

//���� main ������ �������� ���� ���忡 �´� ������ �Լ��� �����ϼ���.
int main()
{
	struct rect r1, r2;

	//������ ���� ���̸� �Է¹޴� input_rect �Լ�
	input_rect(&r1);
	
	input_rect(&r2);
	
	//2���� ����ü ������ ���޹޾� ũ�⸦ ���Ͽ� ������ 1, Ʋ���� 0�� ��ȯ�ϴ� equal�Լ�
	if( equal(r1, r2) == 1)
		printf("�� �簢���� ���̴� �����ϴ�.\n");
	else
		printf("�� �簢���� ���̴� �ٸ��ϴ�.\n");

	
	//1���� ����ü ������ ���޹޾� ���̸� ��ȯ�ϴ� rectsize �Լ� 
	int size = rectsize(&r1);
	printf("r1 �簢���� ���̴� %d�Դϴ�.\n", size);
	
	return 0;
}


/////////////////////////////////////
/* ��
struct rect
{
int width;
int height;
};

void input_rect(struct rect* r)
{
printf("������ �� : ");  scanf_s("%d", &(*r).width);
printf("������ ���� : "); scanf_s("%d", &(*r).height);
}

int equal(struct rect r1, struct rect r2)
{
if ( (r1.width * r1.height) == (r2.width * r2.height))
return 1;
else
return 0;
}

int rectsize(const struct rect * r1)
{
return ((*r1).width * (*r1).height);
}

//���� main ������ �������� ���� ���忡 �´� ������ �Լ��� �����ϼ���.
int main()
{
struct rect r1, r2;

//������ ���� ���̸� �Է¹޴� input_rect �Լ�
input_rect(&r1);

input_rect(&r2);

//2���� ����ü ������ ���޹޾� ũ�⸦ ���Ͽ� ������ 1, Ʋ���� 0�� ��ȯ�ϴ� equal�Լ�
if( equal(r1, r2) == 1)
printf("�� �簢���� ���̴� �����ϴ�.\n");
else
printf("�� �簢���� ���̴� �ٸ��ϴ�.\n");

//1���� ����ü ������ ���޹޾� ���̸� ��ȯ�ϴ� rectsize �Լ�
int size = rectsize(&r1);
printf("r1 �簢���� ���̴� %d�Դϴ�.\n", size);

return 0;
}

*/