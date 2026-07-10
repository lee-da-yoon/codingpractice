// 표준입력 두 점 좌표 입력받기
// 두 점을 지나는 직선 - 기울기와 y절편 계산하여 출력

# include <stdio.h>
# include <stdlib.h>

typedef struct { 
	double x;
	double y;
}Point;

typedef struct {
	double slope;
	double yintercept;
}Line;

Line calculate(Point a, Point b);
int main() {

	Point a, b;

	scanf("%lf %lf", &a.x, &a.y); //첫 번째 좌표 받기 
	scanf("%lf %lf", &b.x, &b.y); // 두 번째 좌표 받기 

	Line m = calculate(a, b); // 함수 호출 
	printf("%.1f %.1f", m.slope, m.yintercept); // 출력하기 

}


Line calculate(Point a, Point b) {
	Line k;
	k.slope = ((a.y - b.y) / (a.x - b.x));
	k.yintercept = a.y - ((k.slope) * a.x);
	return k;
}
