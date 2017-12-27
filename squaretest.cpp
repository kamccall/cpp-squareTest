#include <string>
#include <iostream>
#include <ctime>
#include "math.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char** argv)
{

   // calculate and print sqrt of largest long long: 18,446,744,073,709,551,615 
   unsigned long long prime1, prime2;
   unsigned long long largestLong, productOfPrimes;
   double square;
   clock_t time1, time2;

   largestLong = 18446744073709551614;
   square   = sqrt(largestLong);

   cout << "largest int is: " << largestLong << endl;
   cout << "sq root is:     " << square << endl;

   // pick 2 large integers (almost) as large as square root
   prime1 = 4294967291;
   prime2 = 4294967279;
   // prime1 = 197;
   // prime2 = 191;
   cout << "\nusing prime numbers..." << endl;
   cout << "prime1: " << prime1 << endl;
   cout << "prime2: " << prime2 << endl;

   // multiply those 2 large integers together: measure time
   time1 = clock();
   productOfPrimes = prime1 * prime2;
   cout << "\nproduct is: " << productOfPrimes << endl;
   time2 = clock();
   float first = (float)(time2 - time1) / CLOCKS_PER_SEC;
   cout << "time to multiply: " << first << " seconds" << endl << endl;

   // factor the largest int (product variable): measure time
   time1 = clock();
   if (productOfPrimes % 2 == 0)
   {
       cout << "factor of 2..." << endl;
   }
   else if (productOfPrimes % 3 == 0)
   {
       cout << "factor of 3..." << endl;
   }
   else if (productOfPrimes % 5 == 0)
   {
       cout << "factor of 5..." << endl;
   }
   else 
   {
      // unsigned long long counter = 0;
      
      for(unsigned long long i = 5; i < prime1; i=i+2)
      {
         if (productOfPrimes % i == 0)
         {
             cout << "factor of " << i << "..." << endl;
             break; 
         }
        //  counter++;
        //  if (counter % 1000000 == 0)
        //  {
        //      cout << counter / 1000000 << " million processed..." << endl;
        //  }
      }
   }
   time2 = clock();
   float second = (float)(time2 - time1) / CLOCKS_PER_SEC;

   // display time differences
   cout << "time to factor: " << second << " seconds" << endl;
   cout << "--> factoring took " << second / first << " times longer..." << endl;
}

