#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1={"adssada",60};
	struct Book* b2=&b1;
	printf("书名：%s，价格：%d元\n",b1.name,b1.price);
	printf("书名：%s，价格：%d元\n",(*b2).name,(*b2).price);
	printf("书名：%s，价格：%d元\n",b2->name,b2->price);
	 
}