// 各位数之和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//任意输入一个三位数x，求各位数之和。如输入932，各位数之和为： 9 + 3 + 2 = 14。
#include <stdio.h>
int main(void)
{
	int x, y, a, b, c;
	printf("请输入一个三位数：");
	scanf_s("%d", &x);
	a = x / 100;
	b = (x - a * 100) / 10;
	c = (x - a * 100 - b * 10) / 1;
	y = a + b + c;
	printf("个位数之和为：%d", y);
	return 0;
}