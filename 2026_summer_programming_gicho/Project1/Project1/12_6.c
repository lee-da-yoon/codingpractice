# include <stdio.h>
# include <string.h>

#define MAX_STRINGS 3
# define MAX_LENGTH 100



int main(void) {
	char* strings[MAX_STRINGS];

	for (int i = 0; i < MAX_STRINGS; i++) {
		strings[i] = malloc(MAX_LENGTH);
		if (strings[i] == NULL) {
			return 1;
		}
	}

	for (int i = 0; i < MAX_STRINGS;i++) {

	}

	
}