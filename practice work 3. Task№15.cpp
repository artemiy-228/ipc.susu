//Спортсмен – лыжник начал тренировки, пробежав в первый день 10 км. Каждый следующий день он увеличивал длину пробега на P процентов от пробега предыдущего дня

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int k;
   double p, s;
   cin >> p;
   s = 0;
   k = 0;
   while (true){
      if (s > 200){
         cout.precision(6);
         cout <<fixed << k << " " << s;
         break;
      }
      k++;
      s += 10 * pow((100 + p) / 100, k - 1);
   }
}
