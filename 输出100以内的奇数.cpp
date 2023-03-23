//输出100以内的奇数。
#include<stdio.h>
int main(void)
{
	int x=1;
	while (x<=100)
	{
	    if (x % 2 == 1)
	        printf("%d\t", x);
		x++;
	}
	return 0;
}