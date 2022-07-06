#include <stdio.h>
#include "Point.h"

int calculateLengthSquared(Point point);
Point getFurtherPoint(Point first, Point second);

int main(void) {
	Point firstPoint = { 19, 7 };
	Point secondPoint = { 8, 8 };

	Point furtherPoint = getFurtherPoint(firstPoint, secondPoint);

	printf("x: %d, y: %d", furtherPoint.x, furtherPoint.y);

	return 0;
}

int calculateLengthSquared(Point point) {
	int length = point.x * point.x + point.y * point.y;

	return length;
}

Point getFurtherPoint(Point first, Point second) {
	int firstLength = calculateLengthSquared(first);
	int secondLength = calculateLengthSquared(second);
	Point furtherPoint;

	if (firstLength > secondLength) {
		furtherPoint = first;
	} else {
		furtherPoint = second;
	}

	return furtherPoint;
}

