//resursive function: function call itself directly or indirectly through another function. 
//recursive problem - solving approaches have several elements :
//the function know how to solve only the simplest case, aka base case.If function is called with base case, it simply return a result
//when called with a more complex problem, function divides the probelm into two conceptual pieces
//one that the function know how to do
//one that it does not know how to do, but it resemble the original problem, but smaller or simpler.Because this new problem looks like the original problem, the function call itself to work on the smaller problem, it is refered as recursive call.
//this sequence of smaller problem must eventually converge on the base case, which function will return the result directly.
// 
//write a code to add up number from 1 to n (1+2+3+...+n)
#include <stdio.h>
int add(int n);
int main(void){
	printf("result is %d\n", add(4));
}

int add(int n) {
	int result = 0;
	//base case, the function need to know how to solve the very simple case
	if (n == 1) {s
		result = 1;
	}
	//when call more complex case, function divides problem into two pieces
	//the pieces function know how to do
	//another piece if don't know what to do, but resemble to the original problem,
	//but simpler. 
	else {
		result = add(n - 1) + n;
	}
	return result;
}