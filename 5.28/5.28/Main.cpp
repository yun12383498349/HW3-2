#include <stdio.h>

char toLowerCase(char ch) {
	if (ch >= 'A' && ch <= 'Z') {
		return ch + ('a' - 'A');
	}
	else {
		return ch;
	}
}

int main() {
	char inputChar;


	printf("�п�J�@�Ӧr��: ");
	scanf("%c", &inputChar);

	char resultChar = toLowerCase(inputChar);
	printf("�ഫ�᪺�r��: %c\n", resultChar);

	return 0;
}
