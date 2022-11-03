#include <iostream>
using namespace std;

int main(){
   double x, y, u;
   cin >> x >> y;
   u = y * y;
   if(x * x + y * y <= 1 && y <= x / 2){
      u = -3;
   }
   cout.precision(6);
   cout << fixed << u;
}