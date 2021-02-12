#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, ip;
	int sum = 0;
	int n, m;

	scanf("%d", &ip);

	while (ip>sum)
	{
		num++;
		sum += num;
	}

	if (num % 2 == 1)
	{
		n = sum - ip + 1;
		m = ip - (sum - num);
	}
	else
	{
		n = ip - (sum - num);
		m = sum - ip + 1;
	}

	printf("%d/%d", n, m);
	return 0;
}