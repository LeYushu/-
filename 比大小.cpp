//三个整数比较大小，输出最小值。
#include <stdio.h>
int main(void)
{
	int x, y, z;
	printf("请输入三个整数：");
	scanf_s("%d%d%d", &x,& y,& z);
	if (x > y)
		if (y > z)
			printf("最小的数是：%d", z);
		else
			printf("最小的数是：%d", y);
	else if (y > x)
		if (x > z)
			printf("最小的数是：%d", z);
		else
			printf("最小的数是：%d", x);

	return 0;
}
