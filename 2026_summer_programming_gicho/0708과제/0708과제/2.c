// # include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	FILE* f;
// 	f = fopen("f2.txt", "r");
// 	int n;
// 	fscanf(f, "%d", &n); // ì²? ë²ˆì§¸ ê°? ? •?ˆ˜ n ?ž…? ¥ë°›ê¸° 

// 	char ** p = (char**)malloc(n * sizeof(char*)); // 2ì°¨ë°°?—´ p

// 	for (int i = 0; i < n; i++) { //p[i]ë¥? ?™?  ?• ?‹¹?•˜ê¸?
// 		p[i] = (char*)malloc(20); //p[i]?„ ê°? ?—´?˜ ì²? ?›?†Œ?˜ ì£¼ì†Œ
// 	}
	
// 	for (int i = 0; i < n; i++) { // ë°°ì—´?— txt?ŒŒ?¼?˜ ë¬¸ìž?—´ ?½?–´?„œ ????ž¥?•˜ê¸?
// 		fscanf(f, "%s", p[i]);  // fget?˜ ì²? parameter?— ë°°ì—´?˜ ì£¼ì†Œê°??
// 	}

// 	for (int i = 0; i < n; i++) {  // nê°œì˜ ë¬¸ìž?—´ ?½?–´ ????ž¥?•˜ê¸?
// 		printf("%s ", p[i]);  
// 	}

// 	for (int i = 0; i < n; i++) { // ë©”ëª¨ë¦? ?•´? œ
// 		free(p[i]);
// 	}

// 	free (p);
// 	fclose(f);
// 	return 0;
// }

# include <stdio.h>
# include <stdlib.h>

int main(){
	FILE *f = fopen("f2.txt", "r");
	int n;
	fscanf(f, "%d", &n);
	
	char ** p;
	p = (char **)malloc(n * sizeof(char *));
	for (int i = 0 ; i < n ; i++){
		p[i] = (char*) malloc(20);
	}

	for (int i = 0; i < n ; i++){
		fscanf(f, "%s", p[i]);
	}

	for (int i = 0 ; i < n ; i++){
		printf("%s ", p[i]);
	}
	printf("\n");

	for (int i = 0 ; i < n ; i++){
		free (p[i]);
	}
	free (p);
	fclose(f);
	return 0;
}