#include <stdio.h>

#define FIBONACCI_START 1

int fibonacci(int index);
void swap(int* firstValue, int* second);

int main(void) {
	int result = fibonacci(7);
	printf("%d", result);

	return 0;
}

int fibonacci(int index) {
	
	int firstValue = FIBONACCI_START;
	int secondValue = 1;

	for (int i = 2; i < index; i++) {
		int nextValue = firstValue + secondValue;
		swap(&firstValue, &secondValue);
		firstValue = nextValue;
	}

	if (index == 0) {
		return FIBONACCI_START;
	} else if (index == 1) {
		return secondValue;
	}

	return firstValue;
}

void swap(int* first, int* second) {
	int holder = *first;
	*first= *second;
	*second = holder;
}