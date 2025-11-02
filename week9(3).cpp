/*Week-8 Task #3
Write a C function to print Fibonacci series.*/

#include<stdio.h>

fibonacci(int num) {
	int first=0, second=1, next;
	for (int i=1; i<=num; i++) {
		printf("%d ", first);
		next = first+second;
		first = second;
		second = next;
	}
	printf("\n");
}

main() {
	int num;
	printf("Enter the number of terms in Fibonacci series: ");
	scanf("%d", &num);
	
	printf("Fibonacci series: %d\n", fibonacci(num));
	return 0;
}
