//判断某个整数是否为水仙花数
//水仙花数定义：一个三位数，每一位的三次方相加等于他本身。
//pow是取次方的意思，例如11的2次方为（11，2）
#include <stdio.h>
#include <math.h>
int main(void)
{
	int x, a, b, c;
	printf("请输入一个三位数：");
	scanf_s("%d", &x);
	a = x / 100;
	b = (x - a * 100) / 10;
	c = x - a * 100 - b * 10;
	if (pow(a,3)  + pow(b,3) + pow(c,3)== x)
		printf("%d是水仙花数。", x);
	else
		printf("%d不是水仙花数。", x);
	return 0;
}