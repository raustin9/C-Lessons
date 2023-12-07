/*
     Stringstreams

Stringstreams are incredibly useful, but for beginners they can be pretty confusing

Before I show you how you use them, I want to explain what they are used for

The main benefits of stringstreams are that you can turn strings into different data types like integers, and 
you can also split up the string into different parts. The parts are almost always just things separated by spaces

IMPORTANT NOTE: when using stringstreams, you have to have an include at the top. I will point it out later

Here is an example of how you would set up your program to be able to use stringstreams:
*/

#include <iostream>  // Allows you to use input and output
#include <string>    // Allows you to use strings
#include <sstream>   // Allows you to use stringstreams. You MUST include this to use them

int main() {
  // do random things here
  return 0;
}

/* 

Before I go into stringstreams, I want to talk about the getline function

Unlike cin, getline is able to read an entire line of input rather than just reading to a whitespace character.
This means that you can read standard input up until the user presses enter.

Here is an example of how it can be used and how it is different than cin
*/

#include <iostream>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  cout << s;
  return 0;
}
/* 
If I was to try and run this program with the input "this is a test", when it outputs the variable s, it would print "this is a test"
I will write the same program again below, except I will replace getline with cin
*/

#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  cout << s;
  return 0;
}

/*
If I tried to run it with the same input of "this is a test", when it prints it would only print "this" because cin only 
reads up until a whitespace, so the rest of the words are not placed into s.

Now to breakdown how it works:

inside the parentheses, there are two parameters: mode of input and where to store input

For mode of input, it is alomst always going to be cin, so for now just always put it there. When we go into reading input from files, 
you will see that we can put other modes of input there, but for now just always put cin.

For where to store it, it will always be a string variable. In the case of the example above, it was s.

getline is a super useful tool that will come in handy, so be sure to remember it


Now onto stringstreams
Stringstreams are mainly useful in that it is incredibly easy to separate one string into several variables
Along with that, one of its other greatest strengths is that it is easy to change data types
It is easier to show than to explain so I will write a basic example program below
*/

#include <iostream>
#include <sstream>
using namespace std;

int main() {
  stringstream ss;
  string s;
  int x,y,z;

  getline(cin, s);
  ss.str(s);
  ss >> x >> y >> z;
  cout << x << endl << y << endl << z;
  return 0;
}

/*
Now to break it down

1. declare the stringstream, called ss, along with the other variables
2. read in input to s using getline
3. store s into the stringstream using the .str() method
4. move data from stringstream into x y and z using the >> operator
5. output variables and return

to explain the new things:
 - the .str() method is a method for stringstreams that stores a string into a stringstream
 - now that the entire string is stored into the stringstream, you can parse it into the parts separated by whitespace using the >> operator.
   Basically, when you do the >> thing, it will put all the data remaining in the stringstream into the target variable up intil it reads a 
   whitespace, and it will then remove said data from the stringstream. 
 - the important thing about stringstreams that is nice is that you can easily change data types. In this case we were able to turn a string into 
   an integer.

That is all that I am going to talk about in this file, but there is a good amount more to say. There are technically istringstreams and ostringstreams for input
and output stringstreams, but they are lame and don't really matter. 

This is something that is just gonna be a little confusing and over time it will begin to make more sense, so
just know that you will get better at it with practice. It is more of something that you will get better at rather
than know

*/
