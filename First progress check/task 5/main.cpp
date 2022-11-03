#include <iostream>
using namespace std;

int main(){
   int n, i;
   double y, sum;
   
   cin >> n;
   
   sum = 0;
   
   for(i = 0; i < n;i++){
      cin >> y;
      if(abs(y) < 1){
         sum += y * y;
      }
      else{
         sum += (1 / y) * (1 / y);
      }
   }
   cout.precision(6);
   cout << fixed << sum;
   
}