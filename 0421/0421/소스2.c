//�Ʒ� �ڵ�� �ҽ�1�� qual �Լ��� �����Ͽ����ϴ�.
//�ҽ�1�� ������, �ҽ�2�� �ּҰ� ���� 

#include <stdio.h>

/*
struct point{
	int x, y;

};

int equal(struct point* p1, struct point* p2){
	if (p1->x == p2->x && p1->y == p2->y)
		return 1;
	return 0;
}

int quadrant(struct point* p){

	if (p->x > 0 && p->y > 0)
		return 1;

	else if (p->x < 0 && p->y>0)
		return 2;
	else if (p->x < 0 && p->y < 0)
		return 3;
	else if (p->x > 0 && p->y < 0)
		return 4;
	else
		return -1;
}


//���������� �ҽ�1���� ������ ��ɿ� equals1 �Լ��� �߰��Ͽ� �ּ���.
//�Ʒ� main�Լ��� equals1�� ����ϴ� �ڵ带 �־����ϴ�.
//�׸��� �߰��� equlas2 �Լ��� equlas3�Լ��� ����� �ּ���.

int main()
{

struct point p1, p2;

printf("���� ��ǥ�� �Է��Ͻÿ�: ");

scanf_s("%d,%d", &p1.x, &p1.y);

printf("���� ��ǥ�� �Է��Ͻÿ�: ");

scanf_s("%d,%d", &p2.x, &p2.y);


if (equal(&p1, &p2) == 1)
printf("�� ���� ��ġ�մϴ�\n");
else
printf("�� ���� ��ġ���� �ʽ��ϴ�\n");

printf("ù��° ���� %d��и鿡 �ֽ��ϴ�\n", quadrant(&p1));
printf("�ι�° ���� %d��и鿡 �ֽ��ϴ�\n", quadrant(&p2));

return 0;
}
*/

struct rect{	int width;	int height;};void input_rect(struct rect* r){	printf("������ �� : ");  scanf_s("%d", &(*r).width);	printf("������ ���� : "); scanf_s("%d", &(*r).height);}int equal(struct rect r1, struct rect r2){	if ((r1.width * r1.height) == (r2.width * r2.height))		return 1;	else		return 0;}int equal1(const struct rect* r1, const struct rect* r2){	if (((*r1).width * (*r1).height) == ((*r2).width * (*r2).height))		return 1;	else		return 0;}int equal2(int r1w, int r1h, int r2w, int r2h){	if ((r1w * r1h) == (r2w * r2h))		return 1;	else		return 0;}int equal3(const int *r1w, const int *r1h, const int *r2w, const int *r2h){	if ((*r1w * *r1h) == (*r2w * *r2h))		return 1;	else		return 0;}int rectsize(const struct rect* r1){	return ((*r1).width * (*r1).height);}



int main(){
	struct rect r1, r2;

	//������ ���� ���̸� �Է¹޴� input_rect �Լ�
	input_rect(&r1);

	input_rect(&r2);

	//2���� ����ü ������ ���޹޾� ũ�⸦ ���Ͽ� ������ 1, Ʋ���� 0�� ��ȯ�ϴ� equal�Լ�
	if (equal(r1, r2) == 1)
	printf("�� �簢���� ���̴� �����ϴ�.\n");
	else
	printf("�� �簢���� ���̴� �ٸ��ϴ�.\n");

	if (equal1(&r1, &r2) == 1)
	printf("�� �簢���� ���̴� �����ϴ�.\n");
	else
	printf("�� �簢���� ���̴� �ٸ��ϴ�.\n");

	if (equal2(r1.width, r1.height, r2.width, r2.height) == 1)
	printf("�� �簢���� ���̴� �����ϴ�.\n");
	else
	printf("�� �簢���� ���̴� �ٸ��ϴ�.\n");

	if (equal3(&r1.width, &r1.height,  &r2.width, &r2.height) == 1)
	printf("�� �簢���� ���̴� �����ϴ�.\n");
	else
	printf("�� �簢���� ���̴� �ٸ��ϴ�.\n");

	//1���� ����ü ������ ���޹޾� ���̸� ��ȯ�ϴ� rectsize �Լ�
	int size = rectsize(&r1);
	printf("r1 �簢���� ���̴� %d�Դϴ�.\n", size);

	return 0;
}


