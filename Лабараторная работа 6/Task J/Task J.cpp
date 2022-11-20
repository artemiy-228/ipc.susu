#include <iostream>

using namespace std;

int main(){
   int n, *a, count = 1, i, j;
   cin >> n;
   a = new int[n];
   for(i = 0; i < n; i++){
      cin >> a[i];
   }
   for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
         if(a[i] == a[j] and i != j){
            count++;
            break;
         }
      }
      if(count == 1){
         cout << a[i] << "\n";
      }
      count = 1;
   }
   delete[] a;
}