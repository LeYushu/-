#include <stdio.h>
int main(void)
{
    int x,y,z;
    printf("请输入x的值:");
    scanf("%d",&x);
    printf("请输入y的值：");
    scanf("%d",&y);
    z = x;
    x = y;
    y = z;
    printf("交换后的x=%d,y=%d",x, y);
	return 0;
}