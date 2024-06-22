//rewrite example3 with two functions
//get_length, receive an int, get number of digits
//print_digit, print out individual digits

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int get_length(int num);
void print_digit(int num, int length);
int main(void) {
	int num = 0;
	int digit;
	int length = 0;
	printf("please enter the number: ");
	scanf("%d", &num);
	length = get_length(num);
	print_digit(num, length);
}
int get_length(int num) {
	int length = 0;
	length = floor(log10(num)) + 1;
	return length;
}

void print_digit(int num, int length) {
	int digit = 0;
	for (int i = length; i > 0; i--) {
		digit = num / pow(10, i - 1);  
		num = num % (int)pow(10, i - 1);
		printf("digit = %d num = %d\n", digit, num);
	}
}