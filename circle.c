#include <stdio.h>

#define PI 3.1416

int main(){

	float radius;
	float area, circumference;

	printf("Enter radius of circle: ");
	scanf("%f",&radius);

	area= PI * radius *radius;
	printf("Area of circle : %0.5f \n",area);

	circumference = 2 * PI * radius;
	printf("Circumference of circle : %0.5f \n", circumference);

	return 0;
}
