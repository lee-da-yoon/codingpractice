# include <stdio.h>

//16슬라이드 for while 변환가능
int main(){

	//for를 사용
	int sum = 0;
	int max;
	for (int i = 1; i <= max; i++)
	{
		sum +=i;
	}

	// while을 사용
	sum = 0; 
	int i = 1;
	while (i <= max)
	{
		sum +=i;
		i++;
	}

	return 0;
}

//실습예제 7_10
int main() {
	int i, sum, max; //일단 3개 정의 해서 
	printf("양의 정수 입력 >> "); 
	scanf("%d", &max); // 입력 받고 

	for (i = 1, sum = 0; i <= max; i++); // i = 1 부터 시작 max까지 i 1 씩 증가하면서
		sum +=i; // sum에다가 i 다 쌓아서 더하기
	printf("\nfor 문으로 구한 1에서 %d까지 합 : %3d\n", max, sum);

	i = 1, sum = 0; //초기 선언하기
	while (i <= max) //i가 max 이하인 동안만
	{
		sum +=i ; //sum에다가 i 더해서 하나씩 쌓기 
		i++; // 마지막에 i += 1  -- 결과에 영향 안주고 어쨋든 1만 증가시키면 되므로 ++i, +=i, i = 1, i + 1 도 다 가능 
	}
	printf("while 문으로 구한 1에서 %d까지 합: %3d\n", max, sum);
	return 0;
	
}

//lab 7_2
int main() {
	int input = 0,  result  = 0,  digit = 0; 
	int devider = 100;  // 여기까지 일단 초기에 정의를 했고 
	// input이 입력받을 수, devider자리의 숫자가 digit 이 됨

	printf("양의 정수 [100~999] 입력 : ");
	scanf("%d", & input); // 입력 받기 
	result = input;
	do
	{
		digit = result / devider;  //ex) 100의 자리 수 구하려면 input으로 받은 수 나누기 100의 몫이 필요 
		result %= devider; // 나머지를 다시 result에 넣어두기 
		//그러면 다시 result를 가지고 10의 자리 수 구하려면 10으로 나누어서 몫과 나머지 사용 - devider는 100에서 10이 되어야 한다 
		printf("3d단위 출력 : %d\n", devider, digit);
		devider /= 10;
	} while (devider >= 1);

	return 0; 
}

/* 
# 반복의 중단 break
- break 문장  
	- 반복 내부에서 반복을 종료 
*/

//실습예제 7_11
int main () {
	int input;
	while (1) //조건식이 항상 참이므로 무한반복이다 
	{
		printf("양의 정수 또는 0[종료] 입력 후 [Enter] >> ");
		scanf("%d", &input); // 인풋을 입력받았음
		if (input == 0)
			break;  // 가장 가까운 {} 반복문을 벗어난다. - 일단 해당 회차는 마저 실행을 하고 다음 반복을 안한다는 의미가 맞나? 
		printf("입력한 정수 %d  : 16진수 %#x\n", input, input); //10진수로 한번 프린트 16진수도 프린트 
	}
	puts("종료"); // 얘는 뭔 용도임? 

	return 0; 
}

/*
# 3으로 나누어지지 않는 정수 출력 
- 반복의 계속 continue 
	- continue는 자신이 속한 근접한 반복에서 다음 반복을 실행 
*/

// 실습예제 7_12
int main(){
	const int MAX = 15;  // const 써서 정의하는 상수가 무슨상수더라...

	printf("1에서 %d까지 정수중에서 3으로 나누어 떨어지지 않는 수 \n", MAX);
	for (int i = 1; i <= MAX; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%3d", i);
	}
	puts("");
	return 0;
}

//실습예제 7_13
int main(){
	int count = 1;
loop : 
	printf("%3d", count);
	if (++count <= 10)
		goto loop;
	
		printf("\n종료\n");
		return 0;
}

//실습예제 7_14
int main(){
	int input;
	do 
	{
		printf("양의 정수 또는 음수나 0[종료] 입력 수 [Enter] >> ");
		scanf("%d", input);
		if (input = 0)
			break;
		printf("");
	} while (1);
	return 0;
}

// lab 7_3


//실습예제 7-15
int main(){
	
}