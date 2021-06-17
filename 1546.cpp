#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> vec;

	int num;
	int temp;
	int max;
	int sum = 0;
	scanf("%d", &num);
	scanf("%d", &temp);
	sum += temp;
	max = temp;
	for (int i = 1; i < num; i++)
	{
		scanf("%d", &temp);
		if (temp > max)
			max = temp;
		sum += temp;
	}
	printf("%f", (double)sum / num / max * 100);

	return 0;
}