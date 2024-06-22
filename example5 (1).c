/*
* stack, a last-in, fist-out data structures. like dishes.
function call stack: work behind the scenes, support the function call/return mechanism. 
support creating/maintaining and destroying each function call's local variables.
A function may call other functions, which may call other functions. 
Each function eventually must return control to its caller. so we must keep track of 
the return address that each function needs to return control to its caller. 
Each time a function calls another function, an entry is pushed onto the stack, 
the entry is stack frams, which contains the return address. 
when a called function returns, the stack frams for the function call is popped, 
and control transfer to the return address in the caller
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int x, int y);
int sub(int x, int y);
void print_result(int x);
int main() {
	int a = 0;
	int b = 0;
	int result = 0;
	printf("%s\n", "at main function");
	printf("please enter number a: ");
	scanf("%d", &a);
	printf("please enter number b: ");
	scanf("%d", &b);

	result = add(a, b);
	printf("%s\n", "at main function");
	result = sub(a, b);
	printf("%s\n", "at main function");
}

int add(int x, int y) {
	printf("%s\n", "at add function");
	int z;
	z =  (x + y);
	print_result(z);
	printf("%s\n", "at add function");
	return z;
}

int sub(int x, int y) {
	printf("%s\n", "at sub function");
	int z;
	z =  (x - y);
	print_result(z);
	printf("%s\n", "at sub function");
	return z;
}

void print_result(int x) {
	printf("%s\n", "at print_result function");
	printf("result is %d\n", x);
}
