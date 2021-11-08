#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	//int a=10;
	//int* p =&a;
	//printf("%p\n",&a);
	//printf("%d\n",a);
	//printf("%p\n",p);
	//printf("%d\n",a);
	//*p=20;
	//printf("%p\n",&a);
	//printf("%d\n",a);
	//printf("%p\n",p);
	//printf("%d\n",a);
	char ch ='w';
	char *pc=&ch;
	printf("%d\n",sizeof(pc));
	return 0;
}