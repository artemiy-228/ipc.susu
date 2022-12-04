#include <iostream>
#include <cstring>

using namespace std;

int main(){
   int i = 0, count = 0, min = 257;
   bool flag = 0;
   char array[257];

   cin.getline(array, 257);

   while(array[i] != '\0'){
      if(array[i] != ' '){
         count++;
         flag = 1;
      }
      else if (array[i] == ' '){
         if(min > count && flag == 1){
            min = count;
         }
         flag = 0;
         count = 0;
      }
      i++;
   }
   if(min > count && flag == 1){
            min = count;
   }
   cout << min;
}
