#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	int gcd = 1,lcm = 1;
	for (int i = 1; i <= (num1 > num2 ? num1 : num2); i++) {
		if (num1 % i == 0 && num2 % i == 0)
			gcd = i;
	}
	lcm = (num1 * num2) / gcd;
	printf("%d\n%d", gcd, lcm);
}