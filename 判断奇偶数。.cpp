//输入一个数，判断它是奇数还是偶数。
#include <stdio.h>
int main(void)
{
	int x,y;
	printf("请输入一个整数：");
	scanf_s("%d", &x);
	y = x % 2;
	if (y == 0)
		printf("%d是偶数", x);
	else
		printf("%d是奇数", x);
	return 0;
}