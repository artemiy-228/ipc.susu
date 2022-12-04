#include <iostream>
#include <cstring>

using namespace std;

int main(){
   char a[257];
   int n;
   cin.getline(a, 257);
   n = strlen(a);
   for(int i = 0; i < n; i++){
      cout << a[i];
      if(a[i] == '.'){
         cout << '.' << '.';
      }
   }
}