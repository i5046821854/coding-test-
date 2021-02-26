#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main(void) {
	int num = 0, num1 = 0, num2 = 0;
	scanf("%d", &num);
	int i = 1;
	num1 = num;
	while (1)
	{
		num2 = (num1 % 10) * 10 + ((num1 / 10) + (num1 % 10)) % 10;
		if (num2 == num)
			break;
		else {
			num1 = num2;
			i++;
		}

	}
	printf("%d", i);
	return 0;
}