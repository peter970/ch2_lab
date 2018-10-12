#include<stdio.h>
#include<stdlib.h>
int peter_5() {
	int i, j;
	int a, b;
	printf("<5> \n");
	a = 0; b = 9;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			if (j == a || j == b)
				printf("X");
			else
				printf("-");
		}
		printf("\n");
		a++;
		b--;
	}
	a = 4; b = 5;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			if (j == a || j == b)
				printf("X");
			else
				printf("-");
		}
		printf("\n");
		a--;
		b++;
	}
}