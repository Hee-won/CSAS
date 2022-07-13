#include <iostream>
using namespace std;
int main() {
   int max = -2147, min = 2147, i, n,m, result;
   cin >> n;
   for (i = 0; i < n; i++) {
      cin >> m;
      if (m > max)   m = max;
      if (m < min)   m = min;
   }

   result = max - min;
   cout << result;

   return 0;
}



//최대 나이 차이를 출력
