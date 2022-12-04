#include <iostream>
#include <cstring>

using namespace std;

int main(){
   char a[257];
   int n = 1, k;
   cin >>  k;
   getchar();
   cin.getline(a, 257);
   for(int i = 0; i < strlen(a); i++){
      cout << a[i];
      if(n == k){
         cout << "\n";
         n = 0;
      }
      n++;
   }
}