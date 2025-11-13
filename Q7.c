#include <stdio.h>

#define PI 3.1416

int main()
{	
	const float pi = 3.1416;
	int r;
	printf("Enter the radius of the circle: ");
	scanf("%d", &r);

	float area = PI*r*r;
	float circ = 2*pi*r;
	
	printf("The area of the circle is %.2f\nThe circumference of the circle is %.2f\n", area, circ);
	return 0;
}


