// Hola
// if you are reading this it means you have given up
// honestly, kinda pathetic
//
// the solution is down below
// if you have questions email me at raustin9@utk.vols.edu
// or text me idc

#include <iostream>
#include <random>
#include <limits>
using namespace std;

int main() {
  int t, seed;

  /* This section creates a random number and puts it into t
     Basically, t is going to be a random number          */
  // seed = 0xa4b99ff;
  cout << "Enter a number: ";
  cin >> seed;
  while(!cin) {
    cout << "Bro fr it is not hard to enter an integer\nEnter a number: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin >> seed;
   }
  

  default_random_engine rng(seed);
  uniform_int_distribution<int> rand_int(1,100);
  t = rand_int(rng);
  
  cout << "Random number is " << t << endl;

  if (t % 2 == 0) cout << "even\n";
  if (t < 50) cout << "less than 50\n";
  if (t > 70) cout << "greater than 70\n";

  return 0;
}
