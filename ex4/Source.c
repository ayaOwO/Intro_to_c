#include <stdio.h>
#include "Rectangle.h"


Rectangle getBiggerRectangle(Rectangle firstRectangle, Rectangle secondRectangle);
int calculateArea(Rectangle rectangle);
int canEitherRectangleContain(Rectangle firstRectangle, Rectangle secondRectangle);
int canRectangleContain(Rectangle container, Rectangle contained);
	
int main(void) {
	Rectangle first = { 1, 2 };
	Rectangle second = { 3, 3 };

	printf("Area: %d\n", calculateArea(first));
	printf("Area: %d\n", calculateArea(second));
	
	Rectangle biggerRectangle = getBiggerRectangle(first, second);
	printf("Bigger rectangle: %d, %d\n", biggerRectangle.width, biggerRectangle.height);

	printf("Can be contained: %d\n", canEitherRectangleContain(first, second));

	return 0;
;}

int calculateArea(Rectangle rectangle) {
	int area = rectangle.width * rectangle.height;

	return area;
}

Rectangle getBiggerRectangle(Rectangle firstRectangle, Rectangle secondRectangle) {
	int firstArea = calculateArea(firstRectangle);
	int secondArea = calculateArea(secondRectangle);
	Rectangle biggerRectangle;

	if (firstArea > secondArea) {
		biggerRectangle = firstRectangle;
	}
	else {
		biggerRectangle = secondRectangle;
	}

	return biggerRectangle;
}

int canRectangleContain(Rectangle container, Rectangle contained) {
	if (container.width > contained.width && container.height > contained.height) {
		return 1;
	}
	else {
		return 0;
	}
}

int canEitherRectangleContain(Rectangle firstRectangle, Rectangle secondRectangle) {
	if (canRectangleContain(firstRectangle, secondRectangle) || canRectangleContain(secondRectangle, firstRectangle)) {
		return 1;
	} else {
		return 0;
	}
}

