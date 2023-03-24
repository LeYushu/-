//分段函数求解
#include<stdio.h>
int main(void)
{
	int x, y;
	printf("请输入一个数：");
	scanf_s("%d", &x);
	if (x == 0)
	{
		y = 5;
		printf("y=5");
	}
	else if (x > 0)
	{
		y = 3 * x * x - 7;
		printf("y=%d", y);
	}
	else if (x < 0)
	{
		y = 2 * x + 6;
		printf("y=%d", y);
	}
	return 0;
}