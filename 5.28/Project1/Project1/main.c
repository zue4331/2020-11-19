#include <stdio.h>

char a, b;

int t(char k) {
	if (k > 0x5A) {
		b = a - 32;
	}
	else b = a + 32;

	printf("%c\n", b);
}

int main(void) {
	
	printf("Pleas Enter an Alphabet¡G\n");
	scanf_s("%c", &a);
	t(a);
	

	return 0;
}