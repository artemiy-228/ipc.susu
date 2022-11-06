#include <iostream>

using namespace std;

int main(){
   int n, i, j, k;
   cin >> n;
   for(i = 1;i <= 9;i++){
      for(j = 0; j <= 9;j++){
         for(k = 0; k <= 9;k++){
            if(i * 100 + j * 10 + k < n){
               if (i != j && j != k && i != k){
               cout << i << j << k << " ";
            }
            }
            else{
               break;
            }
         }
      }
   }

}