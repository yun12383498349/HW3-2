#include <stdio.h>

// 非遞歸計算費波那契數
unsigned long long int fibonacci(unsigned int n) {
	unsigned long long int a = 0, b = 1, temp;

	if (n == 0) {
		return a;
	}
	else if (n == 1) {
		return b;
	}
	else {
		for (unsigned int i = 2; i <= n; ++i) {
			temp = a + b;
			a = b;
			b = temp;
		}
		return b;
	}
}

int main() {
	unsigned int n;

	// 輸入n
	printf("請輸入n（費波那契數列的第n個數）: ");
	scanf("%u", &n);

	// 計算並輸出結果
	printf("第%u個費波那契數為 %llu\n", n, fibonacci(n));

	return 0;
}
