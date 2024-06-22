//Week5 labB
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {
	int num = 0;
	int digit; 
	int length = 0;
	printf("please enter the number: ");
	scanf("%d", &num);
	length = floor(log10(num))+ 1;
	for (int i = length; i > 0; i--) {
		digit = num / pow(10, i - 1);  
		num = num % (int) pow(10, i-1) ;
		printf("digit = %d num = %d\n", digit, num);

	}
}