#include <stdio.h> 

int c, h, k;

int g(int a, int b) {
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int l(int a, int b) {
	return a * b / g(a, b);
}

int main(void) {
	printf("��J���(�H�Ů�Ϥ�)�G\n");
	scanf_s("%d %d", &h, &k);

	printf("Lcm�G%d\n", l(h, k));

	return 0;
}