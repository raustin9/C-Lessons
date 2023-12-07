/*
Welcome to the lesson on Input and Output
This is where you get to actually do cool stuff now, so please
don't get so wet yet. First I need to explain what exactly input 
output is.

Input/Output (furthermore refered to as IO) is the ability to read in information
from the user of the program, and display information to the user. 

IMPORTANT NOTE:
remember the annoying
#include <iostream> that I put at the top of every program?
This includes something called a library, and that library includes the necessary
tools to do normal IO

It is better demonstrated than explained, so I will write a sample program below
that will have some simple input and output. 
*/

/* IO1.cpp */
#include <iostream>
using namespace std;
int main() {
  /* Variables */
  string name;
  string age;
  /* IO */
  cout << "What is your name: ";                                 /* Displays text to terminal                                                    */
  cin >> name;                                                   /* Reads in information from user into name variables                           */
  cout << "Cool, but I don't remember asking\n";
  cout << "How old are you: ";
  cin >> age;
  cout << "Hi " << name << " you are " << age << " years old\n"; /* Displays text to the screen alongside the variables that the user input into */
  return 0;
}

/* 
When you run this program, it will prompt you to enter your name, and then give you a slight 
roast, and then output the information that you input back to you

Pretty cool right?
Well here is how it works

As I taught you before, there are the string variables called name and age. These are used to store the information
that the user inputs.
Before the user inputs anything, it first displays text to the screen, and it does this using the 'cout' command.
It then reads in information from the user using the 'cin' command. I will talk more about these now

cout
 - Output
 - used to display information TO the user
 - if you want to display text, you need to put quotes around the words you want to display
 - to use it at all, you must use '<<' operator
   I cannot explain why you use it just yet, but for now just follow the examples I give you
 - if you want to display text and variables at the same time, you must put '<<' between them
   this is also more intuitive if you just look at the examples I show you
examples of cout:
cout << "Hello";
cout << "Hello " << name;
cout << "Hello " << name << ", how are you doing?";
The first example only displays text to the screen. The second example will display Hello to the screen followed by whatever
the variable 'name' contains. The third example will display the text Hello followed by name followed by more text. Notice that 
I have to add the space after Hello manually because otherwise, it will look like this:
HelloAlex
instead of 
Hello Alex
Just make sure to remember this when you write your own output. 
If you get confused on cout at all, just look at the examples I give in this file and try and copy them; it will become natural very quickly.

cin
 - Input
 - used to receive information FROM the user
 - only reads to a white space character
 - this information has to go somewhere, and that somewhere is going to be a variable
 - similarly to cout, you have to use the '>>' operator, which is the other direction from the one cout uses
   this will likely trip you up at first, but you will get used to it very quickly.
 - cin is very simple, so just follow the examples I give you here
cin >> name;
cin >> age;
cin >> birthday;
cin >> name >> age >> birthday;
The first three examples are simply reading in one variable at a time. 
The last example is reading in 3 variables in a row. I will explain how this works more later,
but to explain it now, cin only reads to a white space character. To show what I mean, look at this example program:
*/

/* IO2.cpp */
#include <iostream>
using namespace std;
int main() {
  string word;
  string word2;
  string word3;
  cout << "Input 3 words: ";
  cin >> word;
  cin >> word2;
  cin >> word3;
  cout << "The words you input were: " << word << " " << word2 << " " << word3 << "\n";
  return 0;
}

/* IO3.cpp */
#include <iostream>
using namespace std;
int main() {
  string word;
  string word2;
  string word3;
  cout << "Input 3 words: ";
  cin >> word >> word2 >> word3;
  cout << "The words you input were: " << word << " " << word2 << " " << word3 << "\n";
  return 0;
}

/* 
You likely noticed that the two programs are the same other than the cin statements. However, despite the cin
statements looking different, these programs are completely the same. Try it.
Run it and then use the sample input below:
fuck me please
When you use this sample input, input it all in one line with spaces between each word. Both times, the program
will output the same thing.
*/
