#include <stdio.h>

int power(int base, int exponent) {
	if (exponent == 1) {
		return base;
	}
	else {
		return base * power(base, exponent - 1);
	}
}

int main() {
	int base, exponent;

	printf("�п�J���ƩM����: ");
	scanf("%d %d", &base, &exponent);

	int result = power(base, exponent);
	printf("%d �� %d ���謰 %d\n", base, exponent, result);

	return 0;
}
