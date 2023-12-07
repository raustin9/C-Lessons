/*
			Variables

Variables are one of if not THE most important thing in programming
This means you need to get your dick out your ass and pay attention
cause otherwise you're not gonna want to do this, and then we both lose

Aight bet, variables

What is a variable?
A variable simply is something that stores information.
There are many types of information.
The main types are integers, floating point numbers, and words.
Different types of these variables are meant to store and manipulate these different types of information.

integers are just whole numbers like 1, 5, 69, 420, 489, -69, etc
floating point numbers are just numbers with decimal values like 420.69 and -420.69
words are stored as something called a string, I will go into more detail later

Lets look at these variable types:

char    - 1 byte  - stores a number
int     - 4 bytes - stores a number
long    - 8 bytes - stores a number
float   - 4 bytes - stores a floating point number
double  - 8 bytes - stores a floating point number
string  - N/A     - stores text (words or sentences)

Note:
everything in the computer is stored in binary (a 1 or a 0)
Each 1 or 0 is called a bit, and 8 of these bits is a byte
8 might sound like a weird number, but it makes sense because it is a power of 2
As you saw above, each variable has a set number of bytes. This means that there is a limit to what it can store
For integers, the range is something like -2^31 to 2^31, so you are working with a good amount of numbers even with only 4 bytes
Also note that the string does not necessarily follow the same pattern of memory storage, but do not worry about it. I will explain it 
later when we get to vectors.

Now how do we use a variable, you ask?
Well holy shit just read a little more god damn bro chill

To use them, first you have to declare them.
To do this, follow the template below:
[variable type] [variable name];

An example of this is 
int age;
string name;
char letter;

IMPORTANT NOTE:
values that store numbers, so pretty much anything other than strings, will 
not default to 0 when you declare them. What this means is that when I write
'int age;', the new variable I just made called age will be a random number
that I do not know. For now, the best practice is to give it an initial
value when you declare it, and this is called initialization. Here is an 
example of initialization
int age = 0;
Simple right? Yes, it is. Finally
For string variables, it will initialize to an empty string. To show this, I 
have two different declarations of a string variable, one is given an initial valye and the other is not
string name;
string name = "";
These two lines do the exact same thing. "" represents an empty string, and 
because string variables initialize to an empty string, it is redundant to
initialize it like that. If you want to do that just to drive it home, be my guest,
but it is not necessary.

Before I talk more about what makes each type of variable important, I'll show you an example 
of how they are used down below
*/

/* var1.cpp */
#include <iostream>
using namespace std;
int main() {
	int age;             /* Not given an initial value, so it could be anything                                                                                */
	int date = 0;        /* This IS given an initial value of 0, so we know its value before we do anything important with it                                  */
	string name;         /* A string variable with initial value of an empty string ""                                                                         */
	char letter;         /* Declared but uninitialized char variable. Its value could be anything and we cannot predict it                                     */
	char letter2 = 'A';  /* Declared and initialized char variable. Note that I gave it a value of a character despite it holding a number. More on this later */
	return 0;
}

/*
The program above should have given you some examples on how to begin using variables, and 
how they are different when given initial values vs when they aren't.

Something I want to talk about right now is the char variable
If you managed to miss it even though I pointed it out beside the variable, one of them is 
given an intial value of a letter, but if you recall I said that char types store numbers.
This may seem weird at first, but 'A' is a number, and if I remember right it should be 96.
The char type is named because it is meant to store characters, but how do we do that? The 
way that the nerds in the '80s thought to do it was assign each character to a number. 
For example, 'a' = 97. This means that if I initialize a char variable in these two ways:
char letter = 'a';
char letter = 96;
It should give me the same result. This is not too important for your purposes at the moment, but 
if it comes up at random times I do not want you to be confused.

		Now lets talk about doing operations on these variables

What do I mean by operations?
What the fuck do you think I mean? It's math of course, and it's great 
because the computer does it all for you.

Here are the main mathematical operations in c++:
Addition       > +
Subtraction    > -
Multiplication > *
Division       > /
Modulo         > %   (if you haven't seen this yet do not worry I will explain it)

To show how they work, it is best to write an example
*/

#include <iostream>
using namespace std;
int main() {
	int num1 = 3;
	int num2 = 14324;
	int num3 = 0;

	num1 = num1 + 16;
	num2 = num2 / 6;
	num3 = num2 - num1;
	return 0;
}

/*
The program above does some basic operations on integers

IMPORTANT NOTE: 
Remember when I said that integers are only whole numbers?
This means that if you do a division problem with integers, then the remainder gets lost.
For example, if I have this below:
int i = 5;
int j = 21;
j / i = 4
Notice that it is 4 instead of 4.2 because the integer does not store decimal (floating point) values
This is something that can trip up beginners, so be careful with this.
*/

/*
		Modulo Operator (%)

After I tell you what this does you're gonna be like "Alex, how in the world is this 
useful?" And I will tell you that I have no idea, but for some reason I feel like I use
it a decent amount, and they will test on it in the classes, so here it is...

First, just so to see for yourself if you are smart, I want to see if you notice a pattern
and can determine what the operation yields on your own. It is a fairly simple operation, so
it is not very complex, but it will seem unintuitive at first
5%4=1
10%2=0
22%2=0
11%3=2
25%5=0
24%5=4
It may not be easy to see what this does, but it is super simple. The modulo operator returns
the remainder of the first number divided by the second number. This means that 10%2=0 because
10/2=5 with no remainder. However, 11%2=1 because 2 goes into 11 5 times with a remainder of 1
left over. 

That is it. The entire thing is simply just returning the remainder of two numbers divided. This
is useful for determining if two numbers are evenly divisible, and we will get more into this
when I talk about if statements, which will be pretty soon.
*/

/* 
Congradulations, you just learned all you need to know about variables, for now at least. Now I
know that you are jerking off from the excitement of storing information, but don't worry, it gets
even better.

I will put all the sample programs from this file into their own files, so you can compile and run them
for yourself, so if you feel like doing that, then go ahead.

The next lesson will be on input and output!
*/
