#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter an integer: ");
	scanf("%d", &a);
	printf("Enter an integer: ");
	scanf("%d", &b);

	int quotient = a/b;
	float implicitQuotient = a/(float)b;
	float explicitQuotient = (float)a/b;

	printf("Integer Qoutient of %d/%d: %d\n", a, b, quotient);
	printf("Floating Point(implicit cast) Qoutient of %d/%d: %.3f\n", a, b, implicitQuotient);
	printf("Floating Point(explicit cast) Quotient of %d/%d: %.3f\n", a, b, explicitQuotient);

	return 0;
}
