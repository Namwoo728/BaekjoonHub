#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int black[] = { 1,1,2,2,2,8 };
	int white[6];
	for (int i = 0; i < 6; i++) {
		scanf("%d", &white[i]);
	}
	for (int i = 0; i < 6; i++) {
		printf("%d ", black[i] - white[i]);
	}
}