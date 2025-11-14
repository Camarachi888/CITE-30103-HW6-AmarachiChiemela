#include<stdio.h>

int main()
{
	char c = 'A';
	int i = 5;
	long int li = 500L;
	float f = 3.14f;
	double d = 3.14159226535;

	printf("Size of char variable: %zu bytes\n", sizeof(c));
        printf("Size of int variable: %zu bytes\n", sizeof(i));
    	printf("Size of long int variable: %zu bytes\n", sizeof(li));
	printf("Size of float variable: %zu bytes\n", sizeof(f));
	printf("Size of double variable: %zu bytes\n", sizeof(d));

    return 0;
}

