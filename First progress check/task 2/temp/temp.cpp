

using namespace std;

int main(){
   int n, i;
   double sum, num;
   
   cin >> n;
   sum = num = 0;
   for(i = 1; i <= n;i++){
      num += sin(i);
      sum += 1.0 / num;
   }
   _abracadabra_cast(cout);