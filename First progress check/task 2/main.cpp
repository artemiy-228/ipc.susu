#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int n, i;
   double sum, num;
   
   cin >> n;
   sum = num = 0;

   for(i = 1; i <= n;i++){
      num += sin(i);
      sum += 1 / num;
   }
   cout.precision(6);
   cout << fixed << sum;
}