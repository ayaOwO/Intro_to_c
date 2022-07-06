#include <stdio.h>

int sqrt(int number);

int main(void) {
	printf("%d\n", sqrt(100));
	printf("%d\n", sqrt(101));
	printf("%d\n", sqrt(4));
	printf("%d\n", sqrt(0));

	return 0;
}

int sqrt(int number) {
	int i;

	for (i = 1; i * i <= number; i++) {}
	
	return i - 1;
}