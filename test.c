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
		printf("С�˴洢\n");
	else
		printf("��˴洢\n");
	system("pause");
	return 0;
}
