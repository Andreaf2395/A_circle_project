#include <stdio.h>

//define a constant pi
#define PI 3.14

int main(){

	int radius;
	float area, circumference;
	
	//get radius as input
	printf("Enter radius of circle: ");
	scanf("%d",&radius);

	//compute area and print
	area= PI * radius *radius;
	printf("Area of circle : %0.3f \n",area);
	
	//compute  circumference and print
	circumference = 2 * PI * radius;
	printf("Circumference of circle : %0.3f \n", circumference);

	return 0;
}
