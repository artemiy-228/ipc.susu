#include <iostream>
#include <cstring>

using namespace std;

int main(){
   char a[257];
   cin.getline(a, 257);
   for(int i = 0;i < strlen(a);i++){
      a[i] == '!' ? cout << '.' : cout << a[i];
   }
}