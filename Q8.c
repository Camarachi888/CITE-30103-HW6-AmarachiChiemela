#include<stdio.h>
int globalVar = 5;
int main()
{
	int localVar = 10;

	printf("Global variable: %d\n", globalVar);
	printf("Local variable: %d\n", localVar);

	return 0;
}
