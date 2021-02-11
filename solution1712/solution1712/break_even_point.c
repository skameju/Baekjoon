#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	int A, B, C;
	int bepoint;
	scanf("%d %d %d", &A, &B, &C);

	if (C <= B)
	{
		bepoint = -1;
	}
	else
	{
		bepoint = floor((A / (C - B)) + 1);
	}
	
	printf("%d\n", bepoint);
}