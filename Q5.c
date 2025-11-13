#include<stdio.h>
int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("You entered %d\n", n);
	return 0;
}
//the program does not provide the correct address to store the value n. In line 6 the student writes scanf("%d", n) instead of scanf("%d", &n) which causes a type mismatch error.
