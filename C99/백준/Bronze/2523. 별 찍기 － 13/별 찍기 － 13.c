#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 1; j <= n - i; j++)
			putchar('*');
		putchar('\n');
	}
}