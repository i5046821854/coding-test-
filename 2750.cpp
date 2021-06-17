#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> vec;
	int repNum = 0;
	scanf("%d", &repNum);
	int temp = 0;
	for (int i = 0; i < repNum; i++)
	{
		scanf("%d", &temp);
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); i++)
	{
		printf("%d\n", vec[i]);
	}
	return 0;
}