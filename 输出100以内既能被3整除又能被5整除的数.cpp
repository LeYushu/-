//输出100以内既能被3整除又能被5整除的数。
#include<stdio.h>
int main(void)
{
	int x=1;
	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("%d\t", x);
		x++;
	}
	return 0;
}
