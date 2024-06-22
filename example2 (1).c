//user define functions: you can define functions to perform specific tasks that can be used at many places in a program. 
//benifits to functionalizing a program :
//divide - and -conquer approach make the development more manageable
//resuability : building a new program by using existing function
//avoid repeated code : packaging code as function allow it to be executed from other program locations
//Each function should be limited to performing a single, well defined taskand name should express the task
#include <stdio.h>
//funcion prototype
//A function prototype pleased outside any function definition applies to all calls to the function appearing after the function prototype
//should all agree in the function name, return type, number of parameters
//and order of parameters

//complier use function prototypes to validate function calls.we include parameter names in function prototpyes for documentation purpose.compiler ignores names,
//int adder(int, int ); also a valid propotype
//function call does not match function prototpye will cause compilation error.
//void adder(int a, int b); the return type doesn't match the function call
int adder(int a, int b);
void print_statement(void);
int main(void) {
	int num1 = 2;
	int num2 = 4;
	int sum = 0;

	sum = num1 + num2;
	printf("sum is %d\n", sum);
	//arguments: the variable passes to the function in the caller
	sum = adder(num1, num2);
	printf("sum is %d\n", sum);
}

//return-value-type function-name(perameter-list){
// function actions
//}
//return-value-type is the type of the result returned to the caller, void meas function does not return a value, together the first line refer as function header
//parameter - list: if function does not receive any parameters, the list should contain the keyword void.each parameter must include its type
//the statement within the braces form the function body, local variable can be declared in any block.you can call other function in the block, 
//but define a function inside another function is not allowed

//parameters enable communicating between functions via arguments in function calls
int adder(int a, int b) {
	//perform the task
	//all variables defined in function definations are local variable, they can be accessed only in the function in which they are defined.
	//A function's parameters are also local variables
	int c;
	c = a + b;
	//return the value to the caller
	//return control from a function to its caller by return expression
	return c;
}
void print_statement(void) {
	printf("end of the program\n");
	//reach the end of right brace, return control from a function
	//to its caller
}