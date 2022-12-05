#include <iostream>
#include <cstring>

using namespace std;

int main(){
   char a[257];
   cin.getline(a, 257);
   for(int i = 0; i < strlen(a); i++){
      if(a[i]>= 65 && a[i] <= 90){
         cout << char(a[i] + 32);
      }
      if(a[i] >= 48 && a[i] <= 57||a[i]>= 97 && a[i] <= 122){
         cout << a[i];
      }
   }
}