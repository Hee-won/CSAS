#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
#include<stdio.h>
//using namespace std;
int main() {
   char a[100];
   scanf("%s", &a);
   int num=0, cnt=0;
   
   for (int i = 0; a[i] != '\0'; i++) {
      if (a[i] >= 48 && a[i] < 57) {
         num = num * 10 + a[i] - 48;
      }
   }

   for (int i = 1;i<=num; i++) {
      if(num%i==0)   cnt++;
   }

   printf("%d\n%d", num, cnt);

   return 0;
}




//6번) 
