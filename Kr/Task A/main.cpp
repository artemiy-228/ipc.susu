#include <iostream>

using namespace std;

int main(){
   int i, j, k, n, c = 0;
   cin >> n;
   for(i = 1; i <= 9; i++){
      for(j = 0; j <= 9; j++){
         for(k = 0; k <= 9; k++){
            if(i + j + k == n){
               c++;
            }
         }
      }
   }
   cout << c;
}