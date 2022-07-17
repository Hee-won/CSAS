#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//using namespace std;

int reverse(int x) {
	int res = 0, tmp;
	while (x > 0) {
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}
}

bool isPrime(int x) {
	int i;
	if (x == 1) return false;
	bool flag = true;
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}


int main() {
	int n, num, i, tmp;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		tmp=reverse(num);
		if (isPrime(tmp)) printf("%d ", tmp);
	}
	return 0;

}

//14. 나중에 다시 풀어볼 문제.!! 함수마다 변수는 따로 선언하기!
