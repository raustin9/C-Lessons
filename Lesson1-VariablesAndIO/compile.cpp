/*
        How to run a program

step 1: write program
step 2: compile program
step 3: run program

 - Write Program:
this is what the fucking point of all of this is calm the fuck down I'll get to it damn

 - Compile program:
Aight this is like really fucking important so pay attention and remember this.
In order to run a program, it has to be compiled first. Essentially, you can 
think of compiling a program like translating it to a language that the computer understands.
You compile a program using a program called g++.
In order to run g++, you need to run this command in terminal:
g++ [nameOfProgram].cpp
For example, if I have a program called junk.cpp, in order to compile it I would run
g++ junk.cpp
That is how you compile a program, and you can go to the next step

 - Run the program
Yes, I know that you are creaming yourself rn to know how to run your badass programs and get all the badussy you want
Now that you have compiled your program, you might wonder what to do now, and that is a natural question.
After compiling your program, you might assume that the executable file (what you can run) is named the same as your program.
And you would be wrong because fuck you
Following what I said above with a program called junk.cpp,
I compile it using g++ junk.cpp
From here, in order to run the program, you need to do ./[nameOfExecutable]
the default name of a executable when compiled is 'a.out'
In order to run this program, use the command below
./a.out
This will run the program that you created

In order to compile a program with a name of your choice, do what is written below. Do not include brackets when you run this command
g++ [name of .cpp file] -o [what you want to name it]
For example, if I have a program called junk.cpp and I want the executable to be called junk, then run this:
g++ junk.cpp -o junk
and that will compile your code and create an executable called junk, and to run it you would run
./junk
and it would run

I have written a sample program below, and I want you to try and compile and run this program
Note: the name of the program is going to be the name of the file.
In this case it will be compile.cpp

Do not pay much attention to what the actual program is because most of it will look weird to you,
but just try and compile and run it from what I have said earlier.
You can try interacting with the program, but I probably wrote it quickly and might not be the most intuitive 
thing to use, but as long as you can run it at all then you've done well.
Email raustin9@vols.utk.edu if you run in to issues
*/

#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>
#include <random>
using namespace std;

int main() {
	string input;
	stringstream ss;
	int i,j,seed;
	vector <int> ivec;

	printf("\nWassup homie you got this shit to work.\nIdk if that is my good job as a teacher or if you're big brain, but good job either way\n");
	printf("Just for fun, why do I not show off a little of the stuff you'll learn\nInput a number: ");
	cin >> input;
	ss.str(input);
	ss >> j;
	
	seed = ((j * 128903) % 44) + ((j * 3432) % 13);
	default_random_engine rng(seed);
	uniform_int_distribution<int> rand_int(2, j*3);

	for (i = 0; i < j; ++i) ivec.push_back(0);
	for (i = 0; i < j; ++i) ivec[i] = rand_int(rng);
	for (i = 0; i < j; ++i) printf("Fuck you this many times: %d\n", ivec[i]);

	printf("\nngl this program did not really show off anything that you will do\nbut it is a tad funny to me so...\nanyways good work on getting this to run\n");
	
	return 0;
}
