#include<stdio.h>;

int main(void) {

	float x;
	float y;

	printf("Enter a decimal number:");
	scanf_s("%f", &x);
	
	int ceil(x + .5);
	y = ceil;
	printf("%.5f\t%.0f\n", x, y);


}
