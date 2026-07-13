// # include <Stdio.h>
// # include <stdlib.h>
// #define MAX_LEN 80

// int main() {
// 	char a[3][MAX_LEN];
// 	fgets(a[0], MAX_LEN, stdin);
// 	fgets(a[1], MAX_LEN, stdin);
// 	fgets(a[2], MAX_LEN, stdin);
// 	printf("%s", a[0]);
// 	printf("%s", a[1]);
// 	printf("%s", a[2]);
// 	return 0;
// }

# include <stdio.h>
# define MAX_LEN 80

int main(){
	char arr[3][MAX_LEN];
	fgets(arr[0], sizeof(arr[0]), stdin);
	fgets(arr[1], sizeof(arr[1]), stdin);
	fgets(arr[2], sizeof(arr[2]), stdin);

	printf("%s", arr[0]);
	printf("%s", arr[1]);
	printf("%s", arr[2]);

	return 0;
}