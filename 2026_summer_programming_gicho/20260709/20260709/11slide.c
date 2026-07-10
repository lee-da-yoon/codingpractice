# define _CRT_SECURE_NO_WARNINGS
# include <math.h>
# include <stdio.h>

typedef struct {
	int x;
	int y;

}Point;

double getDistance(Point p1, Point p2);

int main(void)
{
	Point p1, p2;
	scanf("%d %d", &p1.x, &p1.y);
	scanf("%d %d", &p2.x, &p2.y);
	printf("Point 1: (%d %d)\n", p1.x, p1.y);
	printf("Point 1: (%d %d)\n", p2.x, p2.y);

	printf("%.2f", getDistance(p1, p2));
	return 0;
}

double getDistance(Point p1, Point p2) {
	return sqrt(((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));
}