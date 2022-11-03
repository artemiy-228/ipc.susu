#include <iostream>

using namespace std;

int main(){
   int n, s, a;
   cin >> n;
   s = 0;
   
   for(int i = 0; i < n; i++){
      cin >> a;
      s += a;
      cout << a;
      if (i + 1 != n){
         cout << "+";
      }
   }
   cout << "=" << s;
}