/*Week-9 Task #4
Write a C function to check whether a number is prime or not.*/

#include<stdio.h>

primeN(int num) {
	int i;
	if (num <= 1)
		return 0;
	for (i=2; i*i <= num; i++){
		if (num % i == 0)
			return 0;
	}
	return 1;
}

main() {
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);
	
	if (primeN(num)) {
		printf("%d is a prime number.", num);
	}
	else
		printf("%d is not a prime number.", num);
}
