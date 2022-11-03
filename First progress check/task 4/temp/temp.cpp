

using namespace std;

int main(){
   double x, e, sum, numer, sign, k, num;
   cin >> x >> e;
   
   numer = 1;
   sign = 1;
   k = 0;
   num = numer / sign;
   sum = num;
   
   while(abs(num) >= e){
      k += 2;
      numer *= x * x;
      sign *= k * (k - 1);
      num = -1 * numer / sign;
      sum += num;
   
   }
   _abracadabra_cast(cout);