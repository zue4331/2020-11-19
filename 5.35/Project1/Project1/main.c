#include<stdio.h>

int h;

long f(int a) {
	if (a < 2 && a >= 0) {
		return a;
	}
	else return (f(a - 1) + f(a - 2));
}

int main(void) {
	printf("��ܲ� n ��\n");
	scanf_s("%d", &h);
	printf("%d", f(h));

	return 0;
}