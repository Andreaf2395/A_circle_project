#include <stdio.h>

#define PI 3.14

int main(){

	int radius;
	float area;

	printf("Enter radius of circle: ");
	scanf("%d",&radius);

	area= PI * radius *radius;
	printf("Area of circle : %0.3f \n",area);

	return 0;
}
