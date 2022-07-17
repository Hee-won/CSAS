#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, tmp, cnt = 0, i, a = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		tmp = i;
		while(tmp>0){
			tmp / 10;
			cnt++;
		}
		printf("%d\n", cnt);
	return 0;

}

//11. 나중에 다시 풀어볼 문제
