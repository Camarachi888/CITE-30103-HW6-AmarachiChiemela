#include<stdio.h>

int main(void)
{
	float a=5, b=10;
	float avg = (a+b) / 2;
	printf("Average = %.2f\n", avg);
	return 0;
}
//the issue lies in declaring a and b as integers. Because the two variables, and number two are all integers, so the resulting number gets rid of all trailing numbers after the decimal. Then the number is converted to a float variable type resultin in an incorrect average. This error is classified as a logical error.
