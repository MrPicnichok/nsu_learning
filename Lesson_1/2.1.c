#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
	setlocale(LC_ALL, "Rus");
	int k;
	char* str;
	scanf_s("%d", &k);
	if (k % 10 == 1) {
		str = (char*)malloc(sizeof(char));
		*str = '\0';
	}
	else if (k % 10 == 0 || k % 10 > 5) {
		str = (char*)malloc(sizeof(char)*3);
		*str = '�';
		*(str + 1) = '�';
		*(str + 2) = '\0';
	}
	else {
		str = (char*)malloc(sizeof(char) * 2);
		*str = 'a';
		*(str + 1) = '\0';
	}
	printf("�� ����� %d ����%s � ����.", k, str);
	return 0;
}