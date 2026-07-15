// # include <stdio.h>
// # include <string.h>
// # include <stdlib.h> // atoiê°? ?—¬ê¸°ì— ?ˆ?Œ

// int main(int argc, char* argv[]) { // argc[]?Š” ì£¼ì†Œê°? ????¥?œ ?¬?¸?„°?“¤?˜ ë°°ì—´  - ê°’ì„ ?‚¬?š©?•  ê±°ë©´ ê°„ì ‘?—°?‚°? * ?•„?š”?

// 	// argc[1]?´ ?…? ¥ë°›ì?? ?—°?‚°? - ì²? ê¸????? ?‚°?ˆ ?—°?‚°ê¸°í˜¸ ë¹„êµ?•˜ê¸?? 
// 	// atoi ?•¨?ˆ˜ ?‚¬?š© ë¬¸ì?—´?„ ? •?ˆ˜ë¡? ë³??™˜?•˜ê¸? 

// 	int first = atoi(argv[2]);
// 	int second = atoi(argv[3]);

// 	// + ?—°?‚°
// 	if (*argv[1] == '+') {
// 		printf("Result = %.1f\n", (float)(first + second));
// 	}

// 	// - ?—°?‚° 
// 	if (*argv[1] == '-') {
// 		printf("Result = %.1f\n", (float)(first - second));
// 	}

// 	// * ?—°?‚° 
// 	if (*argv[1] == '*') {
// 		printf("Result = %.1f\n", (float)(first * second));
// 	}

// 	// / ?—°?‚° 
// 	if (*argv[1] == '/') {
// 		if (argc == 4) {
// 			printf("Result = %.1f\n", (float)(first / second));
// 		}
// 		else if ((argc == 3) && (first == 1)) {
// 			printf("?‚¬?š©ë°©ë²•: ?”„ë¡œê·¸?¨?´ë¦? <operation> <num1>, <num2>");
// 		}
// 	}
// 	return 0;
// }

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(int argc, char* argv[]){
    float num1 = (float)atoi(argv[2]);
    float num2 = (float)atoi(argv[3]);
    char op = argv[1][0];
    if (argc == 3){
        if ((op == '/') && (num1 == 1))
            printf("»ç¿ë¹æ¹ı : ");
    }
    else
    {
        if (op == '+')
            printf("Result : %.1f", num1 + num2);
        else if (op == '-')
            printf("Result : %.1f", num1 - num2);
        else if (op == '/')
            printf("Result : %.1f", num1 / num2);
        else if (op == '*')
            printf("Result : %.1f", num1 * num2);
    }

    return 0;
}