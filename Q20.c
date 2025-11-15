#include<stdio.h>
int main()
{
	int n, count = 0;
	do
	{
		printf("Enter an integer: ");
		scanf("%d", &n);
		if(!(n==0))
			count++;
	}
	while(!(n==0));
	printf("The number of integers entered excluding 0 were %d\n", count);
	return 0;
}
