#include <iostream>

using namespace std;

int main(){
   int n, *a, max, count;
   cin >> n;
   max = count = 0;
   a = new int[n];
   for(int i = 0; i < n; i++){
      cin >> a[i];
   }
   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
         if(a[i] == a[j]){
            count++;
         }
      }
      if(count  > max){
         max = count ;
      }
      count = 0;
   }
   cout << max;
   delete[] a;
}