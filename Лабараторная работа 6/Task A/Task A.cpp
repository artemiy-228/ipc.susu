#include <iostream>
#include <climits>

using namespace std;

int main(){
   int n, i, j, max_abs;
   max_abs = INT_MAX;
   cin >> n;
   int *a;
   a = new int[n];
   for(i = 0; i < n;i++){
      cin >> a[i];
   }
   for(i = 0; i < n - 1; i++){
      for(j = i + 1; j < n; j++){
         if(abs(a[j] - a[i]) < max_abs){
            max_abs = abs(a[j] - a[i]);
         }
      }
   }
   cout << max_abs;
   delete[] a;
}