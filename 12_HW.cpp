#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include<string>
#include<stdio.h>
//using namespace std;

int main() {
	int n, res = 0, c = 1, d = 9, i, sum = 0;
	/*d=자리의 개수*/
	scanf("%d", &n);
		while(sum+d<n){
			res=res+(c*d);
			sum=sum+d;
			c++;/*다음자리 숫자의 자리수*/
			d = d * 10;/*다음자리 숫자의 개수*/
		}
		res = res + ((n-sum) * c);
		printf("%d\n", res);
	return 0;

}

//12. 나중에 다시 풀어볼 문제.!!
