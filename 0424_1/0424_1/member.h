//member.h
//����ü ���Ǵ� h���Ͽ��� �ؾ� �Ѵ�.
//�׷��� include ���ؼ� ��� �������ϵ��� �ش� Ű����
//�˰� �ȴ�. 
#pragma once

//struct tagmemeber��� Ÿ���� ����
//�׸���, member ��� Ÿ�� Ű����ε� ��� ����

typedef struct tagmember{
	int flag;		//0 : �̸� �������� 1 : �̸� ������ ����
	int number;		//ȸ����ȣ
	char name[20];	//�̸�
	char gender;	//����
	char phone[20];	//��ȭ��ȣ
}member;