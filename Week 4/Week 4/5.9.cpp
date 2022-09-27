#include<stdio.h>;
#include<math.h>;
#include<float.h>;



int main(void) {

	int calculateCharges;
	int hours;
	int realtime;
	int total1;
	int total2;
	int time;
	int tax;
	int charge;
	int min;
	int day;
	int cash;
	int cars;

	
	time = 8;
	tax = 0.50;
	charge = 5.00;
	min = 25.00;
	day = 50.00;
	

	printf("Enter the amount of hours the car was rented for:");
	scanf_s("%d", &hours);
	printf("Car\t Hours\t Charge\n ");

	for (cars = 0; cars =< 3; cars++) {

		if (cars == 1) {
			tax = hours * tax;
			realtime = hours - time;
			if (hours - 24 == 0) {
				calculateCharges = day + tax;
			}
			if (hours - 24 == 24) {
				calculateCharges = day * 2 + tax;
			}
			if (hours - 48 == 24) {
				calculateCharges = day * 3 + tax;
			}
			if (realtime == 0) {
				calculateCharges = min + tax;
			}
			if (realtime >= 0) {
				cash = realtime * charge;
				calculateCharges = min + cash + tax;
			}
			printf("%d\t %d\t %d\n", cars, hours, charge);
			
		}
		

	}

}