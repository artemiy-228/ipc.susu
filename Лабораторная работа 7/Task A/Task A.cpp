#include <iostream>
#include <cstring>

using namespace std;

int main(){
   char array[257];
   cin.getline(array, 257);
   for(int i = 0; i < strlen(array);i++){
      if(array[i] != '*'){
         cout << array[i] << array[i];
      }
   }
}