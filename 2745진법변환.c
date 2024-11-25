#include<stdio.h>
#include<ctype.h>
int main() {
	char n[11];
	int b, i, m = 0;
	scanf("%s %d", n, &b);	//배열은 &로 입력받지 않음
	for (i = 0; n[i] != '\0'; i++) {
		int val;
		if (isdigit(n[i])) val = n[i] - '0';	//n[i]가 '0'일 경우 값을 0으로 바꿔줌 -> 숫자문자를 온전한 숫자로 바꾸는 방법
		if (isalpha(n[i])) val = n[i] - 'A' + 10;
		m = m * b + val;
	}
	printf("%d", m);
}