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
   unsigned long long num1;
   unsigned long long num2;
   unsigned long long product;
   double square;

   product = 18446744073709551614;
   square  = sqrt(product);

   cout << "product is: " << product << endl;
   cout << "sq root is:   " << square << endl;

   // display square root appropriately

   // pick 2 large integers (almost) as large as square root

   // multiply those 2 large integers together: measure time

   // factor the largest int (product variable): measure time

   // display time differences


}

