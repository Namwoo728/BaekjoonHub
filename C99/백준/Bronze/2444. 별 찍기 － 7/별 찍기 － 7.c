#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++)
			printf(" ");
		for (int j = 1; j <= i * 2 - 1; j++)
			printf("*");
		putchar('\n');
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= i; j++)
			printf(" ");
		for (int j = 1; j <= (n - i) * 2 - 1; j++)
			printf("*");
		putchar('\n');
	}
}