#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, n = 0;
	scanf("%d", &num1);
	while (1)
	{
		n++;
		if (num1 <= (3 * n * n - 3 * n + 1))//1+6*1+6*2+6*3...°è»ê½Ä
		{
			break;
		}
	}

	printf("%d", n);
}