#include<stdio.h>

int h, k;

int p(int a, int b) {
	long t = 1;
	for (int i = 0; i < b; i++) t = t * a;
	return t;
}

int main(void) {
	printf("�п�J����(�Ĥ@�Ӭ����A�ĤG�Ӭ������A�H�Ů�Ϥ�)�G\n");
	scanf_s("%d %d", &h, &k);
	printf("%d �� %d ���謰�G%d\n", h, k, p(h, k));

	return 0;
}