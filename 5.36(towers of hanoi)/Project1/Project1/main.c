#include <stdio.h>

int k, l;

void h(int n/*, char A, char B, char C*/) {
	if (n == 1) {
		l = l + 1;
	}
	else {
		h(n - 1/*, A, C, B*/);
		h(1/*, A, B, C*/);
		h(n - 1/*, B, A, C*/);
	}
}

int main(void) {
	printf("�п�J�L�ơG\n");
	scanf_s("%d", &k);
	h(k/*, 'A', 'B', 'C'*/);
	printf("�@���ʤF %d ��\n", l);
	
	return 0;
}