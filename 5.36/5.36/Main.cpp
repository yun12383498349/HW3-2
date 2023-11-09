#include <stdio.h>


void hanoi(int n, char source, char auxiliary, char destination);

int main() {
	int num_disks;

	printf("�п�J��L���ƶq: ");
	scanf("%d", &num_disks);

	printf("���ʶ�L���B�J�p�U:\n");
	hanoi(num_disks, 'A', 'B', 'C');

	return 0;
}

void hanoi(int n, char source, char auxiliary, char destination) {
	if (n == 1) {
		printf(" %c �� %c\n", source, destination);
	}
	else {
		hanoi(n - 1, source, destination, auxiliary);
		printf(" %c �� %c\n", source, destination);
		hanoi(n - 1, auxiliary, source, destination);
	}
}
