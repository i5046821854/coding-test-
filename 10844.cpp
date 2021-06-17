#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

using namespace std;

int main(void)
{
	int num;
	scanf("%d", &num);
	int arr[102][10];
	arr[1][0] = 0;
	for (int i = 1; i < 10; i++)
	{
		arr[1][i] = 1;
	}
	for (int i = 2; i <= num; i++)
	{
		arr[i][0] = (arr[i - 1][1]);
		arr[i][9] = (arr[i - 1][8]);
		for(int j = 1 ; j< 9; j++)
			arr[i][j] = (arr[i - 1][j+1] + arr[i - 1][j-1]) % 1000000000;
	}
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum = (sum + arr[num][i]) % 1000000000;
	}
	printf("%d", sum);
	return 0;
}
