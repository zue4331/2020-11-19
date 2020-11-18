#include<stdio.h>

int h;

long f(int a) {
	if (a < 2 && a >= 0) {
		return a;
	}
	else return (f(a - 1) + f(a - 2));
}

int main(void) {
	printf("顯示第 n 個\n");
	scanf_s("%d", &h);
	printf("%d", f(h));

	return 0;
}