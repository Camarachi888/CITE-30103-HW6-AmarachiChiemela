#include<stdio.h>
int main()
{
	int a;
	printf("Enter an integer: ");
	scanf("%d", &a);
	printf("The number %d is %s.\n", a, (a<0)?"Negative": (a>0)?"Positive":"Zero");

	return 0; 
}
