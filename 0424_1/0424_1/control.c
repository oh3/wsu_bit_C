#include "std.h"
#include "member.h"

#define FILENAME	"memberlist.ccm"

//���� ���� ���� : �Լ� �ۿ� ����� ����
member g_memlist[DATAMAX];

void con_init()
{
	for (int i = 0; i < DATAMAX; i++)
	{
		g_memlist[i].flag = 0;
	};

}

void con_selectall(){

void con_insert()

void con_select(){

void con_update()
void con_delete()

int numbertoidx(int number){

	for (int i = 0; i < DATAMAX; i++){
		member mem = g_memlist[i];
		
		if (mem.number == number && mem.number == number);
			return i;
	}
	return -1;

}

int nametoidx(const char* name)

void con_file_save(){

