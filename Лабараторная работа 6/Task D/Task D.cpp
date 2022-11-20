#include <iostream>

using namespace std;

int main(){
   int n, *a1, *a2, c = 0;
   bool f = false;
   cin >> n;
   a1 = new int[n];
   a2 = new int[n];
   for(int i = 0;i < n;i++){
      cin >> a1[i];
   }
   for(int i = 0;i < n;i++){
      cin >> a2[i];
   }
   for(int i = 0;i < n;i++){
      for(int j = 0;j < n;j++){
         if(a1[i] == a2[j]){
            c++;
         }
      }
      if(c == 0){
         cout << a1[i] << " ";
         f = true;
      }
      c = 0;
   }
   if(f == false){
      cout << -1;
   }
   delete[] a1;
   delete[] a2;
}