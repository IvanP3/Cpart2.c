//local & global raviable, storage duration
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void plus_one();
//global variable: declared outside of any function definition. 
//retain its value throughout program. visiable to all functions in the program
int global_num = 100;
int main(void) {
	int a = 1;
	plus_one();
	plus_one();
	printf("in main function, global_num = %d\n", global_num);
}
//init:                       num=0, static_num = 10
//after 1st function call         1               11
//after 2nd function call         1               12

void plus_one() {
	//all the variables defined in function are local function, only visiable to function itself.
	//storage duration: period the identifier exists in memory
	//function's local variable has auto storage duration by default
	//variable with auto storage duartion creaed when control enter the block in which they are defined. 
	//exist exist when block is active, destoryed when program control exist the block. 
	int num = 0;
	//with keyword static, variabe will has static storage duration
	//the variable exist when program begins, exist when it terminate. 
	//variable with static duration will allocate and initialized once, before the program begin execute. 
	static static_num = 10;
	printf("num start value is %d, static_num start value is %d\n", num, static_num);
	num++;
	static_num++;
	global_num++;
	printf("num updated value is %d, static_num updated value is %d\n", num, static_num);
	printf("in main function, global_num = %d\n", global_num);
}