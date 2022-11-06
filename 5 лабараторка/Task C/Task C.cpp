#include <iostream>

using namespace std;

int main(){
   int a, b, c, q;
   bool f = 0;
   cin >> q;
   for(a = 1; a < q;a++){
      for(b = 1;b < q;b++){
         c = q - a - b;
         if(a * a + b * b == c * c){
            f = 1;
            cout << "yes";
            a = q;
         }
      }
   }
   if(f == 0){
      cout << "no";
   }
}
