

using namespace std;

int main(){
   int n, i;
   double z, y, sum;
   
   cin >> n;
   
   sum = z = 0;
   
   for(i = 0; i < n;i++){
      cin >> y;
      if(abs(y) < 1){
         z = y;
      }
      else{
         z = 1 / y;
      }
      sum += z * z;
      
   }
   _abracadabra_cast(cout);