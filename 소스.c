#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"


int main(void)
{
	char arr[50][50];
	int n, m;
	int num = 0;
	int a=0, b=0;
	int i, j;
	scanf("%d %d", &n, &m);
	getchar();
	for (i = 0; i < n; i++)
	{
		scanf("%s", arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (arr[i][j] == 'X')
				break;
		}
		if (j == m)
			a++;
	}
	for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
		{
			if (arr[i][j] == 'X')
				break;
		}
		if (i == n)
			b++;
	}
	int result = a > b ? a : b;
	printf("%d", result);
	return 0;

}