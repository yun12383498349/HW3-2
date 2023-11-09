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


	printf("請輸入一個字母: ");
	scanf("%c", &inputChar);

	char resultChar = toLowerCase(inputChar);
	printf("轉換後的字母: %c\n", resultChar);

	return 0;
}
