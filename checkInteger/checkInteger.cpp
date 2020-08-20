#include<stdio.h>

int main() {
	long x;
	printf("Enter a number : ");
	scanf_s("%ld", &x);

	if (x >= 0) {
		if (x % 2 == 0) {
			printf("You entered a positive even number.");
		}
		else {
			printf("You entered a positive odd number.");
		}
	}
	else {
		if (x % 2 == 0) {
			printf("You entered a negative even number.");
		}
		else {
			printf("You entered a negative odd number.");
		}
	}

	return 0;
}