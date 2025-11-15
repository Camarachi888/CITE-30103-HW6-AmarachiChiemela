#include<stdio.h>
int main()
{
	int a, b;
	char op;
	printf("Enter 2 integers: ");
	scanf("%d %d", &a, &b);
	printf("Enter an operator(+,-,*, or /): ");
	scanf(" %c", &op);

	switch (op)
	{
		case '+':
			printf("Addition operation chosen. %d + %d = %d\n", 				    a, b, a+b);
			break;
		case '-':
			printf("Subtraction operation chosen. %d - %d = %d\n				   ", a, b, a-b);
			break;
		case '*':
			printf("Multiplication operation chosen. %d * %d = 				   %d\n", a, b, a*b);
			break;
		case '/':
			if(b==0)
			{
				printf("Division operation chosen. Cannot divide by 0\n");
			}
			else
			{
				printf("Division operation chosen. %d / %d = 					    %d\n", a, b, a/b);
			}
			break;
		default:
			printf("Invalid entry\n");
	}
	return 0;
}
