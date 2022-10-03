#include<stdio.h>;

int calculateCharges(int a) {
	
	return a;
};

int main(void) {
	int cars;
	int hours;
	int total1;
	int time;
	int add;
	int realtime;
	int day;
	int taxes;
	int charges;
	int min;
	int a;
	int b;
	int c;
	int d;
	int e;

	min = 25.00;
	total1 = 0;
	time = 8;
	day = 50.00;
	taxes = 0.50;
	charges = 5;

	for (cars = 0; cars != 3; cars++) {
		printf("Enter the amount of hours rented:");
		scanf_s("%d", &hours);
		total1 += hours;
	}
	while (cars != 1) {
		realtime = hours - time;
		if (hours - 24 == 0) {
			a = taxes * hours + day;
			printf("%.2d", calculateCharges(a));
		}
		if (hours - 24 == 24) {
			b = taxes * hours + day * 2;
			printf("%.2d", calculateCharges(b));
		}
		if (hours - 48 == 24) {
			c = taxes * hours + day * 2;
			printf("%.2d", calculateCharges(c));
		}
		if (realtime != 0) {
			d = taxes * hours + min;
			printf("%.2d", calculateCharges(d));
		}
		else {
			e = taxes * hours + charges * realtime + min;
			printf("%.2d", calculateCharges(e));
		}
	}
	while (cars != 2) {
		realtime = hours - time;
		if (hours - 24 == 0) {
			a = taxes * hours + day;
			printf("%.2d", calculateCharges(a));
		}
		if (hours - 24 == 24) {
			b = taxes * hours + day * 2;
			printf("%.2d", calculateCharges(b));
		}
		if (hours - 48 == 24) {
			c = taxes * hours + day * 2;
			printf("%.2d", calculateCharges(c));
		}
		if (realtime != 0) {
			d = taxes * hours + min;
			printf("%.2d", calculateCharges(d));
		}
		else {
			e = taxes * hours + charges * realtime + min;
			printf("%.2d", calculateCharges(e));
		}
	}
	while (cars != 3) {
		realtime = hours - time;
		if (hours - 24 == 0) {
			a = taxes * hours + day;
			printf("%.2d", calculateCharges(a));
		}
		if (hours - 24 == 24) {
			b = taxes * hours + day * 2;
			printf("%.2d", calculateCharges(b));
		}
		if (hours - 48 == 24) {
			c = taxes * hours + day * 2;
			printf("%.2d", calculateCharges(c));
		}
		if (realtime != 0) {
			d = taxes * hours + min;
			printf("%.2d", calculateCharges(d));
		}
		else {
			e = taxes * hours + charges * realtime + min;
			printf("%.2d", calculateCharges(e));
		}
	}
}