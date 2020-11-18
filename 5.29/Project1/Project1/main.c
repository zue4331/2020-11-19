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
	printf("輸入兩數(以空格區分)：\n");
	scanf_s("%d %d", &h, &k);

	printf("Lcm：%d\n", l(h, k));

	return 0;
}