#include <iostream>
#include <cmath>
using namespace std;


int sum(int);

int main(){
   int n, max = 3, maxnum = 2;
   cin >> n;
   for(int i = 3; i <= n;i++){
      if (sum(i) > max){
         max = sum(i);
         maxnum = i;
      }
      
   }
   cout << max;

}

int sum(int x){
   int s = x + 1;
   int d = 2;
   while(d * d < x){
      if(x % d == 0){
         s += d;
         s += x / d;
      }
      d++;
   }
   if(d * d == x){
      s += d;
   }
   return s;
}