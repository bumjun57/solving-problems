#include<stdio.h>
int main() {
	int a, b, c, res;
	scanf("%d%d%d", &a, &b, &c);
	if (a == b && b == c) {
		res = 10000 + a * 1000;
		printf("%d", res);
	}
	else if (a == b || b == c) {
		res = 1000 + b * 100;
		printf("%d", res);
	}
	else if (a == c) {
		res = 1000 + a * 100;
		printf("%d", res);
	}
	else {
		if (a > b && a > c)
			printf("%d", a * 100);
		else if (a<b && b>c)
			printf("%d", b * 100);
		else if (a < c && b < c)
			printf("%d", c * 100);
	}
}