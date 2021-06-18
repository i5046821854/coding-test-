#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
	int num;
	int target;
	scanf("%d %d", &num, &target);
	int sum = 0;
	int arr[102] = { 0, };
	int s[10010]= { 0, };
	for (int i = 1; i <= num; i++)
	{
		scanf("%d", &arr[i]);
	}
	s[0] = 1;
	for (int i = 1; i <= num; i++)
	{
		for (int j = arr[i]; j <= target; j++)
		{
			s[j] = s[j] + s[j - arr[i]];
		}
	}
	printf("%d\n", s[target]);
	
}