#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main(void)
{
	int arr[1000];
	int cnt=0;
	int a, b;
	int min;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		for (int j = 0; j < b; j++)
		{
			scanf("%d", &arr[j]);
		}
		for (int m = 0; m < b; m++) {
			for (int n = 0; n < b - 1; n++)
			{
				if (arr[n] > arr[n + 1])
				{
					int temp = arr[n + 1];
					arr[n + 1] = arr[n];
					arr[n] = temp;
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
		cnt = 0;
	}
}