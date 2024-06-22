/*pass argument by value
a copy of the argument's value is made and passed to the function. 
changes to the copy do not affect the original variables' values in the caller. 
use this whenever you don't want change the original varaible. 
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void addone_1(int a);
int addone_2(int a);
int main(void) {
	int a = 0;
	printf("please enter a:");
	scanf("%d", &a);
	addone_1(a);
	printf(" a = %d\n", a);

	a = addone_2(a);
	printf(" a = %d\n", a);
}

void addone_1(int a) {
	a = a + 1;
}

int addone_2(int a) {
	a = a + 1;
	return a;
}