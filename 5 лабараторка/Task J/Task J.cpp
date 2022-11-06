#include <iostream>

using namespace std;

int main(){
   int n, k, m;
   double x, sum;
   
   cin >> n >> x;
   sum = 0;
   for(k = 1; k <= n;k++){
      for(m = k;m <= n; m++){
         sum += (x + k) / m;
      }
   }
   cout.precision(6);
   cout << fixed << sum;
}