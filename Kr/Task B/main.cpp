#include <iostream>

using namespace std;

int main(){
   double i, j, n, sum = 0;
   cin >> n;
   for(i = 0; i <= n; i++){
      for(j = i; j <= n; j++){
         sum += (n + i) / (2 * i + j + 1);
      }
   }
   cout.precision(6);
   cout << fixed << sum;
}