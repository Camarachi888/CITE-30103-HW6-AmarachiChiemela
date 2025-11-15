#include<stdio.h>
int main()
{
	int n, init, rev = 0;
	printf("Enter an integer: ");
	scanf("%d", &n);
	init = n;

	while(n>0)
	{
		int digit = n%10;
		rev = (rev * 10)+digit;
		n = n/10;
	}

	printf("Original number: %d\n", init);
	printf("Reversed number: %d\n", rev);

	return 0;
}

