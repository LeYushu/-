﻿// 华氏温度转摄氏温度.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//将华氏温度转化成摄氏温度。
//公式为：C=（5/9）*(F-32)，其中F为华氏温度，C为摄氏温度。
//请根据给定的华氏温度输出对应的摄氏温度。
#include <stdio.h>
int main(void)
{
	float f, c;
	printf("请输入华氏温度");
	scanf_s("%f", &f);
	c=(5.0/9) *(f- 32.0);
	printf("对应摄氏温度为：%f\n",c);
	return 0;
}
