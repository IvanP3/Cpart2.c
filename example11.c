//given a number n, calculate the nth number on fibonacci series
//0, 1, 1, 2, 3, 5, 8....
#include <stdio.h>
int fib(int n);
int main(void) {
	int n = 6;
	printf("fib(%d) = %d\n", n, fib(n));
}

int fib(int n) {
	int result = 0;
	if (n == 1 || n == 0) {
		result = n;
	}
	else {
		result = fib(n - 1) + fib(n - 2);
	}
	return result;
}