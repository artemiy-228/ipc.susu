#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int n, i, j, sum = 1;
   bool f = false;
   cin >> n;
   for(i = 2;i < n;i++){
      for(j = 2;j <= sqrt(i);j++){
         if(i % j == 0){
            sum += j + i / j;
         }
         if(j == sqrt(i)){
            sum -= j;
         }
      }
      if(sum == i){
         f = true;
         cout << i << " ";
      }
      sum = 1;
   }
   if(f == false){
      cout << 0;
   }
}