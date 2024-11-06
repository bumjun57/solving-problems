#include<stdio.h>
int main() {
	int sec = 0; char str[15];
	scanf("%s", &str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'A' || str[i] == 'B') sec += 3;
		if (str[i] == 'C') sec += 3;
		if (str[i] == 'D' || str[i] == 'E') sec += 4;
		if (str[i] == 'F') sec += 4;
		if (str[i] == 'G' || str[i] == 'H') sec += 5;
		if (str[i] == 'I') sec += 5;
		if (str[i] == 'J' || str[i] == 'K') sec += 6;
		if (str[i] == 'L') sec += 6;
		if (str[i] == 'M' || str[i] == 'N') sec += 7;
		if (str[i] == 'O') sec += 7;
		if (str[i] == 'P' || str[i] == 'Q') sec += 8;
		if (str[i] == 'R' || str[i] == 'S') sec += 8;
		if (str[i] == 'T' || str[i] == 'U') sec += 9;
		if (str[i] == 'V') sec += 9;
		if (str[i] == 'W' || str[i] == 'X') sec += 10;
		if (str[i] == 'Y' || str[i] == 'Z') sec += 10;
	}
	printf("%d", sec);
	return 0;
}