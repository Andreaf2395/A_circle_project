#include <stdio.h>

//define a constant pi
#define PI 3.1416

int main(){

	float radius;
	float area, circumference;
	
	//get radius as input
	printf("Enter radius of circle: ");
	scanf("%f",&radius);

	//compute area and print
	area= PI * radius *radius;
	printf("Area of circle : %0.3f \n",area);
	
	//compute  circumference and print
	printf("Area of circle : %0.5f \n",area);

	circumference = 2 * PI * radius;
	printf("Circumference of circle : %0.5f \n", circumference);

	return 0;
}
