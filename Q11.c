#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter the first integer, a: ");
	scanf("%d", &a);
	printf("Enter the second integer, b: ");
	scanf("%d", &b);

	printf("The sum of a and b is: %d\n", a+b);
	printf("The difference of a and b is: %d\n", a-b);
	printf("The product of a and b is: %d\n", a*b);
	printf("The quotient of a and b is: %d\n", a/b);
	printf("The remainder of a/b is: %d\n", a%b);

	return 0;
}
