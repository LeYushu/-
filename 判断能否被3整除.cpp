// 键盘输入有一个数判断能否被3整除
#include <stdio.h>
int main(void)
{
	int x,y;
	printf("请输入一个数：");
	scanf_s("%d",&x);
	y = x % 3;
	if (y == 0)
	{
		printf("%d可以被3整除", x);
	}
	else
	{
		printf("%d不可以被3整除",x);
	}
	return 0;
}