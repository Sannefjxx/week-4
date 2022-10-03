#include<stdio.h>;
#include<math.h>;



int main(void) {

	int x;
	int t;

	printf("Enter a number and find out if it's even: ");
	scanf_s("%d", &x);
	
	t = x % 2;

	if (t <= 0 ) {
		printf("%d is even.", x);
	}
	if (t != 0) {
		printf("%d is odd.", x);
	}
	return 0;

}