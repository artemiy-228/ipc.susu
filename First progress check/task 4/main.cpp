#include <iostream>

using namespace std;

int main(){
   double x, e, sum, numer, sign, k, num, marker;
   cin >> x >> e;
   
   numer = 1;
   sign = 1;
   k = 0;
   marker = 1;
   num = 1;
   sum = num;
   
   while(abs(num) >= e){
      k += 2;
      marker *= -1;
      numer *= x * x;
      sign *= k * (k - 1);
      num = marker * numer / sign;
      sum += num;
   
   }
   cout.precision(6);
   cout << fixed << sum - num;

}