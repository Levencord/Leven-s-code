#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int i = 0;
	int count = 0;
	scanf("%d", &a);
	for (i = 0; i < 32; i++)
	{
		if(1==((a >> 1) & 1))
			count++;
	}
	printf("%d\n", count);
	return 0;
}