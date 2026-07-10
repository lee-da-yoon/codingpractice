# include <Stdio.h>
# include <stdlib.h>
#define MAX_LEN 80

int main() {
	char a[3][MAX_LEN];
	fgets(a[0], MAX_LEN, stdin);
	fgets(a[1], MAX_LEN, stdin);
	fgets(a[2], MAX_LEN, stdin);
	printf("%s", a[0]);
	printf("%s", a[1]);
	printf("%s", a[2]);
	return 0;
}