#include <iostream>
using namespace std;


int main(){
   int i, j , n;
   cin >> n;
   
   for(i = 2; i <= n;i++){
      for(j = 2;j <= n;j++){
         cout << i * j << " ";
      }
      cout << "\n";
   }
}
