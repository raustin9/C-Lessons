/*
 * Classes
 *
 * What are classes?
 * If you have used something like Java or C# before you will be familiar with the concept of classes.
 * Essentially, you can combine variables (data) and functions (behavior) together
 * 
 * Here is an example of what that means:
 */
#include <iostream>
#include <string>
using namespace std;

class Dog {
    public:
        Dog(string name);   // This is a constructor. This is used to create the class. More on this below
        void Bark();        // This is a function 
    private:
        string name;   // This is a member variable
};

// This is the definition of a member function
void Dog::Bark() {
    cout << "Bark!" << endl;
}

/*
 *  The above example shows a class for a Dog
 *  Things that are a part of a class are called "members"
 *  We have a "member variable" called "name" that is the name of the dog
 *  We have a "member function" (also called a "method") called "Bark()"
 *
 *  You likely noticed that one is private and the other is public
 *  We will get more into that later
 *
 *  The way that you define the function body for a "method" is by doing:
 *  <return type> <class name>::<function name>(parameters...) {...}
 *  -- You MUST specify the classname for the function otherwise the compiler will not know that the function belongs to that class --
 */

// USING A CLASS
int main(void) {
    Dog dog = Dog("Maggie"); // this is the constructor. The constructor is how we 
                             // create an instance of an object

    dog.Bark(); // This is how we can use the Bark() method from the Dog class.
                // we use <instance>.<method>() to call it

    return 0;
}

/*
 * Constructors and Destructors
 *
 * Classes are data types just line an "int" or "float" or "string" etc
 * However, there is a difference that Classes are complex. This is because 
 * they contain multiple member variables. 
 *
 * Because of this complexity, there is a special function that we write in order to 
 * specify how the class object is going to be created and destroyed.
 * 
 * The constructor is a special function that we create and use to create an object.
 * The destructor is a special function we create and use to make sure that it gets destroyed properly.
 */

class Cat {
    public:
        Cat(); // constructor always has the same name as the class
        ~Cat(); // destructor has the same name as the constructor but with a ~ in front
    private:
        string name;
};

// The constructor has no return type.
// We define it in the way below
// When we create a cat object, it will set its name to 
// Mufasa because the constructor does it.
Cat::Cat() {
    this->name = "Mufasa";
}

// The desctructor also has no return type
// We define it similar to the constructor above
// just make sure to have the ~
Cat::~Cat() {
    cout << "Bye" << endl;
}

// What is the "this" keyword?
// 'this' specifies that we are using something that belongs to the class
// In the case above, we are specifying that we want to set the Cat class's
// "name" member variable to Mufasa.

// Here is an example of why that might be useful
class Person {
    public:
        Person(int age); // create a constructor that takes in an age
    private:
        int age;
};

Person::Person(int age) {
    this->age = age; // using "this" makes sure the compiler knows to use the member variable of the Person class
}

// We can see below that we have 2 different variables that both have the name "age"
// We want to use the "this" keyword to specify that we want to use the one that belongs to the class


/*
 *  Public Vs Private
 *
 *  I mentioned the public and private sections earlier, but what do they mean?
 *  
 *  Anything that is put in the public section is able to be seen and used outside of the class.
 *  Anything inside of the private section can only be seen and used inside of the class.
 *
 *  This might be confusing so here is an example:
 */
class School {
    public:
        vector<string> public_students;
    private:
        vector<string> private_students;
};

int main(void) {
    School west_high_school = School();
    west_high_school.students.push_back("Alex"); // THIS IS NOT ALLOWED
    west_high_school.public_students.push_back("Alex"); // this is fine
}

// The reason we do this is because we may not want to let other functions that
// do not belong to the class make changes to the class's data. 
// The general pattern that you will see a lot is that most if not all of
// the data (variables) is private, and there are some public methods that can 
// make changes to it. 
// This means that we can write our code for a class easier because the way the data 
// can be chaned is limited to what we want. This makes it more predictable. 
// 
// For example, if we want to make it so that the name of a student can only 
// be 8 letters long, we can make that so. If we didn't have private members 
// we would not be able to do that


