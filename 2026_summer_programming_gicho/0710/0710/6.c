# include <Stdio.h>


void printValue(void* value, char type);
void printValue(void* value, char type) {
	switch(type){}
}

int main() {
	int i = 10; 
	float f = 23.5;
	char c = 'x';

	printValue(&i, 'i');
}