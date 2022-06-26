#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int check_sys()
{
	int a = 1;
	return *((char*)&a);
}

int main(void)
{
	

	int ret=check_sys();
	if (ret == 1)
		printf("Ð¡¶Ë´æ´¢\n");
	else
		printf("´ó¶Ë´æ´¢\n");
	system("pause");
	return 0;
}
