/*
 *  Here is some of the more complicated, but useful, functionality of classes 
 *  in c++
 */

/*
 * Inheritance:
 *
 * Let's say that we have two classes, Dog and Cat. We want both of them
 * to be able to Speak().
 * We can do that with something like this:
 */
class Dog {
    public:
        Speak() {
            cout << name << endl;
        }
    private:
        string name;
};
class Cat {
    public:
        Speak() {
            cout << name << endl;
        }
    private:
        string name;
};

// This is fine, but we can do this using "inheritance"
// Inheritance is where multiple classes can "inherit" behavior
// from a "parent"
//
// It might be easier to show rather than tell, so here is an example:

class Animal {
    public:
        Speak() {
            cout << name << endl;
        }
    private:
        string name;
};  

class Dog : public Animal {

};
class Cat : public Animal {

};

// The example above is functionally the same as what we had before.
// Both the Cat and Dog classes inherit the Speak() method,
// so they can both use it and we do not have to create it again



