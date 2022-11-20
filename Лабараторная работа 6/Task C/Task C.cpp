#include <iostream>
#include <cfloat>

using namespace std;

int main(){
   double x, *a, min1, number;
   int n;
   min1 = number = DBL_MAX;
   cin >> x >> n;
   a = new double[n];
   for(int i = 0; i < n; i++){
      cin >> a[i];
   }
   for(int i = 0; i < n - 1;i++){
      for(int j = i + 1;j < n;j++){
         double m = (a[i] + a[j]) / 2;
         if(abs(x - m) < min1){
            min1 = abs(x - m);
            number = m;
         }
      }
   }
   cout.precision(6);
   cout << fixed << number;
   delete[] a;
}