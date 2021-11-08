#include <stdio.h>
int main()
{

	int a;
	int b;
	int sum = 0;
	extern int g_val;
	printf("%d\n",g_val);
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum=%d \n", sum);
	return 0;
}