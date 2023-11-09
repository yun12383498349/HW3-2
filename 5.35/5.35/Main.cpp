#include <stdio.h>

// �D���k�p��O�i������
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

	// ��Jn
	printf("�п�Jn�]�O�i�����ƦC����n�Ӽơ^: ");
	scanf("%u", &n);

	// �p��ÿ�X���G
	printf("��%u�ӶO�i�����Ƭ� %llu\n", n, fibonacci(n));

	return 0;
}
