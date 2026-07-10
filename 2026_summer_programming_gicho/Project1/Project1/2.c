#include <stdio.h>
int main2() {
	int a[3] = { 5, 10, 15 };
	int* p = &a[2]; 

	printf("%d ", *p--); // 15  처음에는 a[2]이고, 15 출력 후 *p = *(p-1)이 됨
	printf("%d\n", (*p)--); // 10 *p = a[1] 이므로 10 출력, 그다음에 1 감소하여 a[1] = 9 가 됨

	printf("%d %d %d\n", *(p - 1), *p, *(p + 1)); // 5 9 15 *(p-1) 이 a[0]임 - 5가 출력 
	printf("%d %d %d\n", p[-1], p[0], p[1]); // 5 9 15 간접연산자 + 포인터변수 로 배열의 element value 참조 가능, 배열이름[index]로도 참조 가능 

	return 0;
}

