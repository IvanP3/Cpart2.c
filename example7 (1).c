#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int seed = 10;
	//srand() take an int argument as seed to feed function rand to 
	//produce different sequence or random number for each execution.
	//to avoid enter the seed each time, use time as the seed srand(time(NULL)), include time.h
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		//generate integer between 0 and RAND_MAX
		//Function rand generate pseudorandom number
		//the sequence repeats itself each time the program is executed. 
		printf("%d ", rand());
	}

	puts("");
		for (int i = 0; i < 10; i++) {
			//generate random integer in a range (2-10)
			printf("%d ", 2 + rand() % 9);
		}
}