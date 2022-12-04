#include <iostream>
#include <cstring>

using namespace std;

int main(){
   int i = 0;
   char a[257];

   cin.getline(a, 257);

   while(a[i] != '\0'){
      if(a[i] == 'c' && a[i + 1] == 'h' && a[i + 2] == 'i' && a[i + 3] == 'l' && a[i + 4] == 'd'){
         cout << "children";
         i += 5;
      }
      else{
         cout << a[i];
         i++;
      }
   }
}