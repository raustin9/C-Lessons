/*
        What is programming?

All programming is is giving the computer a set of instructions on what to do
In order to write a program, you need to know what you want it to do
  - ex: a program to help count money from a cash register
  - ex: a program to give you attendence credit when you skip class
It is extremely important to know that without knowing what you want to do, you cannot write a good program
When you know what you want to do, then you just have to tell the computer how to do it

*/

/*
        Getting started

Making a program is super simple
Below is a simple shell of a program that does not do anything
Notice that some lines end with a semicolon. The semicolon means that it is the end of a line
Also notice that the #include line does not end with a semicolon. This is normal
I will explain what each part is in the program
*/

#include <iostream>   /* This line includes a library called 'iostream' that allows easy input/output. I talk about this in more detail below                      */
using namespace std;  /* This is for convenience. I will show you what happens if you don't use this line later                                                    */
int main()            /* 'main' is where you put all the things that you want the computer to do. This will make more sense later                                  */
{
  return 0;           /* 'main' is a function, and functions have to return something. Dont think about this too much and just include it in every program for now */
                      /* return 0 also means that the program ends and nothing that you put after it will run                                                      */
}

/*  
        Input/Output

Input and output are incredibly simple
 - Output: outputting information in some way
   > outputting a file like an image
   > displaying text to the terminal
 - Input: taking in information from the user that the program is going to use
   > storing an image file
   > stroring a person's birthday information
Input/Output (furthermore called IO) is essential to writing a good program
Every single program is going to have some form of IO

Below is an example program showing some IO 
This program is only output, but I will show you input shortly

*/

#include <iostream> /* iostream allows us to use 'cout' which displays text to the screen. Without it this would not run */
using namespace std;

int main()
{
  /* The line below this one outputs 'Hello Everyone!' to the terminal */
  cout << "Hello everyone! \n";
  return 0;
}

/*
        Variables

Variables are just as important as IO
All variables are is just stored information, and there are multiple types and they are used in different ways

bool    - 1 byte  - 'boolean'               - stores either a 1 or a 0. 1 is for true and 0 is for false
char    - 1 byte  - 'character'             - stores a character like 'A' or 'a' or '4'  notice that numbers can also be characters. Do not confuse this with integers
int     - 4 bytes - 'integer'               - stores a number from -2^31 to 2^31   does not have decimal or fraction values
long    - 8 bytes - 'long integer'          - stores a number from -2^63 to 2^63   does not have decimal or fraction values
float   - 4 bytes - 'floating point'        - stores a number with decimal values  FYI dont use this one the number range it can hold is really small
double  - 8 bytes - 'double'                - stores a number with decimal values  FYI use this if you need a number that has decimals
string  - 8 bytes - 'string of characters'  - stores anything with words

variables are 'declared' in a program
all that this means is that you have to say that you are using it before you use it
below is an example of a declaration of an int variable

int name_of_variable;
int              - type of variable to declare
name_of_variable - name of the variable you are declaring

you can also declare variables like this:
int varname = 6;
 - the only difference is that I gave it an initial value
 - giving it this initial value is called 'initializing'
 - this is not necessary

Notes on Initialization:
 - when you declare a variable it is initialized to something
 - all initializing means is that it is given a default value that it holds before you give it one
 - IMPORTANT - when declaring an int, char, double, float, and long always initialize it to 0
             - this is because it does not automatically default to 0

Default Initializations
char    - random
int     - random
long    - random
string  - ""
float   - random
double  - random

note that pretty much anything other than a string has a random default value
this means that when you declare these types, it is important to give it your own default value

Below this is a program that shows you how variables work
*/

#include <iostream>
using namespace std;

int main() 
{
  /* Decalring and initializing variables */
  char character = 'A';
  int integer = 0;
  long long_integer = 0;
  float float_integer = 0.0;
  double double_integer = 0.0;
  string example_string = "Example";

  /* Output integer to the screen before doing anything to it */
  cout << integer;

  /* After declaring them, I can now use them and do operations on them */
  integer += 5; /* notice the '+='. This is the same as saying 'integer = integer + 5;' */
                /* you can do the same for '-=' '*=' and '/='                           */
  
  /* Output the integer to the screen after the operation */
  cout << integer;
  return 0;
}


/*
        Using IO with variables

IO and variables go hand in hand

For example, lets say that we want to write a program that takes in a users name and says hello to them

I will write this below
*/

#include <iostream>
using namespace std;

int main()
{
  /* Declare variable for their name */
  string name;

  /* IO */
  cout << "Enter your name: ";
  cin >> name; /* This is the line that reads the input for their name */
  cout << "Hello " << name << " I hope that you are doing well!\n";
  return 0;
}

/* 
      More notes on IO

How to use cout:
 - you can use cout to display variables along with normal text
 - you do this using the '<<' operator
 - so if you wanted to display a variable inside of some text you would do this:
   > 'cout << "I am " << age << " years old";'
 - notice how you have to put a space manually in the quotation marks because otherwise it would output something like this:
   > I am18years old

How to use cin:
 - you can use cin to read in information into a variable
 - it is important to remember that you need to read INTO something
 - basically always cin into a variable

*/

/*
      StringStreams

Stringstreams may seem a little weird at first, but trust me they are really intuitive

You are able to move things into and out of the stringstream using similar operators to cout and cin

To move something into the stringstream, you use '<<'
To move something out of the stringstream, you use '<<'

In order to use them, you have to use a #include:
#include <sstream>

You declare a stringstream like this:
stringstream ss;

you cannot give it an initial value

stringstreams are useful when converting integers (numbers) into strings (text) and vice versa

I will just do an example and explain it then
*/

#include <iostream>
#include <sstream>
using namespace std;

int main()
{
  /* Declare variables */
  int numbers = 0;
  string word;
  stringstream ss;

  /* IO */
  cout << "Enter some numbers: ";
  cin >> numbers;

  /* This moves the integer into a string using a stringstream */
  ss << numbers; /* This copies the information in the numbers variable into the stringstream */
  ss >> word;    /* This puts the information from the stringstream into the word variable    */

  return 0;
}

/*
    if statements

Now you have reached what I consider to actually be programming
if statements allow you to truly do powerful things

An if statement follows this logic: if a condition is true, then do this thing. Otherwise, skip

Here is the general format for an if statement:
if (condition == true)
{
  do things
}
Noticed the double equals sign?
Yeah me too shut the fuck up and pay attention
You have to use it when doing if statements. The only time you use it is when you are doing what is called a conditional
A conditional is simply the condition part of the if statement
Just remember that you have to use two equals signs when you do an if statement
Yes, it is really annoying, and yes, you will get a lot of bugs because of it

Here is an example of a simple if statement
if (2 == (4 / 2))
{
  cout << "True";
}
What does this mean?
First, look at the condition which is ALWAYS inside the parentheses
The condition is 2 = (4/2), and 4/2 is 2, so the condition is saying 2 = 2.
Because this is true, then what is inside the brackets will execute, so it will print "True" to the screen

The other part of if statements is "else"
else looks like this:

if (condition == true)
{
  do this if condition is true
}
else 
{
  do this if condition is not true
}

basically, the code in the else section will only run if the condition in the if statement does not hold

here is an example of an if/else statement

if (2 == 3*5)
{
  cout << "True";
}
else
{
  cout << "False";
}
This will output "False" because 2 = 15 is not true, so it will skip the section with 'cout << "True"'

There is also else if statements
These are used when you have multiple if statements

Here is how it is formatted:
if (condition 1 == true)
{
  do this if condition 1 is true
}
else if (condition 2 == true)
{
  do this if condition 2 is true
}
else
{
  do this if neither condition is true
}

Here is an example

if (2 == 4)
{
  cout << "1";
}
else if (2 == 1+1)
{
  cout << "2";
}
else
{
  cout << "3";
}
If you are following this logic, then you would know that this would output "2" because condition 1 is false, but condition 2 is true.

IMPORTANT NOTES
you may be asking what the point of else if clauses are since you can just do multiple if statements in a row, 
but take this scenario:
if (1 == 2-1)
{
  thing 1
}
if(1 == 0+1)
{
  thing 2
}
this code will execute thing 1 and thing 2 because both conditions are true
However, take this code:
if (1 == 2-1)
{
  thing 1
}
else if (1 == 0+1)
{
  thing 2
}
this code will only execute thing 1 even though both conditions are true
This is because an else if statement is treated like a normal else, and this means that the else if clause is skipped if the first if statement's condition is true

IMPORTANT NOTES ABOUT CONDITIONS
now you are probably nutting in your pants right now because of the raw power that you have just gained, 
but don't go commiting genocide just yet.
An if statement is only as good as its conditions, and you don't know shit about them yet. But fret not, I will be your hero

Boolean Expressions:
lets say that you want to have multiple conditions in your if statement
The way that you can do this is with boolean expressions
"What the fuck is a boolean expression" you ask
Well shut the fuck up and let me explain holy shit

Before I explain what they are, here is how they're used
if (condition1==true [boolean expression] condition2==true)
{
  execute this
}

Boolean expressions are meant to relate the 2 conditions together
There are 3 main boolean expressions:
 - && - and 
 - || - or
 - !  - not

and (&&)
 - the entire condition evaluates to true if both conditions are true
 - the entiere condition evaluates to false if either of the expressions are false
 - basically, the if statement will only be true if both conditions are true, and if 
   either one is false, then the whole thing is false

or (||)
 - the entire condition will evaluate to true if either condition is true
 - the entire condition can only evaluate to false if both condition are false
 - basically, it means that the only way for the if statement to be false is if everything is false,
   otherwise the if statement will evaluate to true

not (!)
 - this is different from && and ||
 - this basically makes the condition the opposite

Examples of how to use it

if ( (1 == 2-1) && (7 > 4) )
{
  thing 1
} 
--> this will be true because 1 equals 2 minus AND 7 is greater than 4

if ( (1 == 2-1) && (7 < 4) )
{
  thing 1
}
--> this will not execute because while 1 equals 2-1 BUT 7 is NOT greater than 4, so because not both of them are true it will not execute inside the brackets
if ( (1 == 1) || (7 < 4) ) 
{
  thing 1
}
--> this will execute because 1 == 1 is true, and even though 7 < 4 is false, when using the OR operator, only one condition needs to be true for the whole thing to be true
