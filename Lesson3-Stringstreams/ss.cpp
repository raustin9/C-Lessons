// This is a basic program that shows what a stringstream is able to do
// If you look at the file junk.txt, you will see that each line begins with a random string, and is ended with a number
// This program reads in the entire file line by line into the string s
// It then uses the stringstream to parse the string and get the number out of it
// It then outputs the number from each line 
//  
// run this program with the command
// ./ss < junk.txt

#include <iostream>
#include <sstream>
using namespace std;

int main() {
  int num, i;
  string s;
  stringstream ss;
  
  i = 0;
  while (getline(cin, s)) {
    ++i;
    ss.clear();
    ss << s;
    ss >> s >> num;
    printf("Line %i: %i\n", i, num);
  }

  return 0;
}
