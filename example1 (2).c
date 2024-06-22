//use library function: 
// improve efficient
// easy to read the code
// more accurate and portable
#include <stdio.h>
//include math libary to math function
#include <math.h>
int main(void) {
	double num = 9;
	int num1 = 16;
	double result = 0;
	//square root of x
	result = sqrt(num);
	printf("result is %f\n", result);
	//pass function argument as variables
	printf("result is %f\n", sqrt(num));
	//pass function argumetn as expression
	printf("result is %f\n", sqrt((1+num)));
	//log of x (base10)
	//pass function argument as constants
	printf("log os 100 is %.2f\n", log10(100));
	//absolute value of x as a floating point number
	printf("absolute value of -6.7 is %.2f\n", fabs(-6.7));
	//rounds x to the smallest integer not less than x
	printf("ceilingn of 5.5 is %2.f\n", ceil(5.5));
	//rounds x to the largest integer not greater than x
	printf("floor of 5.5 is %2.f\n", floor(5.5));
	//x raised by power of y
	printf("9 raised to power of 2 is %.2f\n", pow(9, 2));
	printf("result is %f\n", sqrt(num1));
}