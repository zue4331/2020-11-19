#include<stdio.h>

int h, k;

int p(int a, int b) {
	long t = 1;
	for (int i = 0; i < b; i++) t = t * a;
	return t;
}

int main(void) {
	printf("請輸入兩整數(第一個為底，第二個為冪次，以空格區分)：\n");
	scanf_s("%d %d", &h, &k);
	printf("%d 的 %d 次方為：%d\n", h, k, p(h, k));

	return 0;
}