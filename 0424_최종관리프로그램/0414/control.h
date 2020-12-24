//control.h
#pragma once

#define DATAMAX 15

void con_init();
void con_selectall();
void con_insert();
void con_select();
void con_update();
void con_delete();

void con_file_save();
void con_file_load();

int numbertoidx(int number);
int nametoidx(const char* name);


