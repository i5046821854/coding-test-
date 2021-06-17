#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

using namespace std;

int main(void)
{
	int num;
	scanf("%d", &num);
	long long arr[100];
	arr[1] = 1;
	arr[2] = 1;
	for (int i = 3; i <= num; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	printf("%lld", arr[num]);
	return 0;
}
