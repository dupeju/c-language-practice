#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>


void printf_lozenge(int line,char ch)
{
	assert(line > 0);
	//打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line-1-i; j++)
			printf(" ");
		for (j = 0; j <2*i+1; j++)
			printf("*");
			printf("\n");
	}

	 //打印下半部分
	for (i=0;i<line-1;i++)
	{
		int j = 0;
		for (j = 0; j <=i; j++)
			printf(" ");
		for (j = 0; j <2*(line-1-i)-1; j++)
			printf("*");
		printf("\n");
	}

}

int main(void)
{
	int line = 0;
	char ch = 0;

	(void)scanf("%d%c",&line,&ch);
	printf_lozenge(line,ch);
	return 0;
}