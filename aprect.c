/*******************Documentation Section**************
 Program to calculate area and perimeter of a rectangle
 ******************************************************/

/*______________Link Section___________________*/
#include<stdio.h>

//Main Program Section
int main()
{
	int w,h;
	printf("Enter the height of the rectangle: ");
	scanf("%d", &h);
	printf("Enter the width of the rectangle: ");
	scanf("%d", &w);

	int A = (w*h);
	int P = (w+w+h+h);

	printf("The area of the rectangle is: %d\n", A);
	printf("The perimeter of the rectangle is: %d\n", P);

return 0;
}

