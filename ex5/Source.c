#include <stdio.h> 

#define FIBONACCI_START 1
#define NUMBER_ISNT_IN_FIBONACCI -1

int getFibonacciIndex(int number);
void swap(int* first, int* second);
int fibonacci(int index);

int main(void) {
	printf("Index is: %d\n", getFibonacciIndex(13));
	printf("Index is: %d\n", getFibonacciIndex(0));
	printf("Index is: %d\n", getFibonacciIndex(1));
	printf("Index is: %d\n", getFibonacciIndex(12));

	return 0;
}

int getFibonacciIndex(int number) {

	int firstValue = FIBONACCI_START;
	int secondValue = 1;
	int i;

	for (i = 2; firstValue < number; i++) {
		int nextValue = firstValue + secondValue;
		swap(&firstValue, &secondValue);
		firstValue = nextValue;
	}


	if (firstValue != number) {
		return NUMBER_ISNT_IN_FIBONACCI;
	} else if (number == FIBONACCI_START) {
		return 0;
	} else if (number == 1) {
		return 1;
	}

	return i;
}

void swap(int* first, int* second) {
	int holder = *first;
	*first= *second;
	*second = holder;
}

