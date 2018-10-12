#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int i, j;
	int a, b;
	printf("<1> \n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i == 0 || i == 9 || j == 0 || j == 9)
				printf("X");
			else
				printf("-");
		}
		printf("\n");
	}

	printf("<2> \n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i == 0 ||i==1||i==2||i==1||i==7||i==8|| i == 9 || j == 0 ||j==1||j==2||j==7||j==8|| j == 9)
				printf("X");
			else
				printf("-");
		}
		printf("\n");
	}

	printf("<3> \n");
	a = 4; b = 5;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i==4||j==a||j==b)
				printf("X");
			else
				printf("-");
		}
		printf("\n");
		a--;
		b++;
	}

	printf("<4> \n");
	a = 0; b = 9;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i<5&&(i == 0 || j == a || j == b))
				printf("X");
			else
				printf("-");
		}
		printf("\n");
		a++;
		b--;
	}

	printf("<5> \n");
	a = 0; b = 9;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			if (j==a||j==b)
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

	system("pause");
	return 0;
}