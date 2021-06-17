#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdio.h>
#include <stack>

using namespace std;

void print(stack<char> sta)
{
	while (!sta.empty())
	{
		printf("%c", sta.top());
		sta.pop();
	}
	printf(" ");
}

int main(void)
{
	int num = 0;
	scanf("%d", &num);
	getchar();
	char str[1000];
	stack<char> ch;

	for (int i = 0; i < num; i++)
	{
		fgets(str, 1000, stdin);
		for (int j = 0; j < strlen(str); j++)
		{
			if (str[j] == ' ' || str[j] == '\n' )
			{
				while (!ch.empty())
				{
					printf("%c", ch.top());
					ch.pop();
				}
				printf(" ");
			}
			else
			{
				ch.push(str[j]);
			}
		}
		printf("\n");
	}

	return 0;
}