#include <iostream>

using namespace std;

int main(){
   int i, j, k;
   double m, n;
   bool f = 0;
   cin >> m >> n;
   for(i = 0;i <= n;i++){
      for(j = 0;j <= n;j++){
         for(k = 0;k <= n;k++){
            if(i + j + k == n){
               if(m - 10 * i - 5 * j - 0.5 * k == 0){
                  f = 1;
               }
            }
         }      
      }
   }
   f == 1? cout << "yes" : cout << "no";

}