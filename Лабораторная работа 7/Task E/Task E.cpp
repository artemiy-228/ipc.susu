#include <iostream>
#include <cstring>

using namespace std;

int main(){
   int i = 0, count = 0;
   bool flag = 0;
   char array[257];

   cin.getline(array, 257);

   while(array[i] != '\0'){
      if(array[i] != ' ' && flag == 0){
         count++;
         flag = 1;
      }
      else if (array[i] == ' '){
         flag = 0;
      }
      i++;
   }
   cout << count;
}