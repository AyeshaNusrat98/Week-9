/*Week-8 Task #2
Write a C function to calculate the factorial of a number.*/

#include<stdio.h>

factorial(int num) {
	if(num<0) {
		printf("Invalid Input. Number must be positive.");
		return 0;
	}
	int facto = 1;
	for(int i=1; i<=num; i++) {
		facto *= i;
	}
	return facto;
}

main() {
	int num;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
	
	printf("Factorial of %d is %d.", num, factorial(num));
}
