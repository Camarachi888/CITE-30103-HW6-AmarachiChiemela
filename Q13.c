#include<stdio.h>
int main()
{
	int a;
	printf("Enter an integer: ");
	scanf("%d", &a);

	if((a%2==0) && (a%3==0) && !(a%7==0))
	{
		printf("%d is divisible by 2 and 3, but not by 7.\n", a);
	}
	else
		printf("%d does not satisfy the conditions.\n", a);

	return 0;
}
