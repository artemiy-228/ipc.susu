#include <iostream>

using namespace std;

int main(){
   int *a, n, c = 0;
   cin >> n;
   a = new int[n];
   for(int i = 0; i < n; i++){
      cin >> a[i];
   }
   for(int i = 0; i < n - 1; i++){
      for(int j = i + 1; j < n;j++){
         if(a[i] == a[j]){
            c++;
         }
      }
   }
   cout << c;
}