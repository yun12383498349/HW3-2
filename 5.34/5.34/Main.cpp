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

	printf("請輸入底數和指數: ");
	scanf("%d %d", &base, &exponent);

	int result = power(base, exponent);
	printf("%d 的 %d 次方為 %d\n", base, exponent, result);

	return 0;
}
