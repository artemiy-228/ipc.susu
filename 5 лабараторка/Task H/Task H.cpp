#include <iostream>

using namespace std;

int main(){
   int n, i, j;
   double sum;
   cin >> n;
   sum = 0;
   for(i = 0; i <= n; i++){
      for(j = i; j <= n;j++){
         sum += (3 * i - j) / 2.0;
      }
   }
   cout.precision(6);
   cout << fixed <<sum;
}