#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter the 1st subject mark: ");
	scanf("%d", &a);
	printf("Enter the 2nd subject mark: ");
	scanf("%d", &b);
	printf("Enter the 3rd subject mark: ");
	scanf("%d", &c);
	printf("Enter the 4th subject mark: ");
	scanf("%d", &d);
	printf("Enter the 5th subject mark: ");
	scanf("%d", &e);

	if((a>=40) && (b>=40) && (c>=40) && (d>=40) && (e>=40))
		printf("PASS\n");
	else
		printf("FAIL\n");

	return 0;
}

