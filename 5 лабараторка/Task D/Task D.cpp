#include <iostream>
#include <cmath>
using namespace std;


int main(){
   bool f = false;
   int n, x, y, z;
   cin >> n;
   for(x = 1;x <= sqrt(n);x++){
      for(y = 1;y <= sqrt(n);y++){
         for(z = 1;z <= sqrt(n);z++){
            if(x*x + y * y + z *z == n){
               f = true;
               break;
            }
         }
      }
   }
   f == false ? cout << "no" : cout << "yes";
}