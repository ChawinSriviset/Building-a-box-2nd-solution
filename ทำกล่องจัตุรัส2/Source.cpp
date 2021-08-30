#include<stdio.h>

int main() {
	int a;
	printf("Enter a number : ");
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++) 
	{
		printf("*");
	}
	printf("\n");
	for (int i = 1; i <= a - 2; i++) 
	{
		printf("*");
		for (int i = 1; i <= a - 2; i++) 
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for (int i = 1; i <= a; i++)
	{
		printf("*");
	}
	return 0;
}