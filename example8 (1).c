//enum and generate the choice randoml
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	//enumeration is a set of integer constants
	//represented by identifier.
	//enumeration constant make program more readalbe.
	//values in an enum start with 0 and incremented by 1 by
	//enum flat {constant1, constant2, constant3, ...}
	enum food {Pizza=1, Burger,  Pasta};
	enum food rand_choice = 0;
	srand(time(NULL));
	rand_choice = 1 + rand() % 3;
	printf("Pizza is %d Burger is %d Pasta is %d\n", Pizza, Burger, Pasta);
	printf("rand_choice is %d\n", rand_choice);
	switch (rand_choice) {
	case Pizza:
		printf("Let's have pizza\n");
		break;
	case Burger:
		printf("Let's have burger\n");
		break;
	case Pasta:
		printf("Let's have pasta\n");
		break;
	defualt:
		printf("I'm out of ideas\n");
	}
}