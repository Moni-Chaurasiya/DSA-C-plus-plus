//Polymorphism-->It is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.

/*
Polymorphism is a core concept in object-oriented programming (OOP) that allows objects to be treated as instances of their parent class rather than their actual class. The term "polymorphism" means "many forms," and it allows methods to do different things based on the object it is acting upon, even though the method call is the same.

There are two main types of polymorphism:

Compile-time Polymorphism (Static Binding or Method Overloading)
Runtime Polymorphism (Dynamic Binding or Method Overriding)

*/

#include<iostream>
#include<string>
using namespace std;


class Student{
    public:
      string name;
      Student(){
          cout<<"Non-Parameterised\n";
      }
      Student(string name){
          this->name=name;
          cout<<"parameterised constructor\n" ;
      }
}; 


/*
*Compile-time Polymorphism 

Function overloading is a feature that allows multiple functions to have the same name but different parameters (either in number, type, or both). The correct function to call is determined at compile-time based on the arguments passed to the function.

Key Characteristics of Function Overloading:

**Same Name: All overloaded functions must have the same name.
**Different Parameters: The parameter list must differ in at least one of the following ways:
-->Number of parameters
-->Type of parameters
-->Order of parameters

**Return Type: The return type of the functions can be the same or different, but the return type alone is not enough to distinguish between overloaded functions.

Advantage-->Readability,Convenience,Maintainability.
*/
//Example:
class MathOperations {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two doubles
    double add(double a, double b) {
        return a + b;
    }

    // Function to add an integer and a double
    double add(int a, double b) {
        return a + b;
    }

    // Function to add a double and an integer
    double add(double a, int b) {
        return a + b;
    }
};


/*

Operator overloading is a feature in C++ that allows you to redefine the way operators work for user-defined types (like classes and structures). By overloading operators, you can provide custom implementation for operators (e.g., +, -, *, ==) so that they can be used with objects of your classes in a way that is intuitive and similar to built-in types.

 */


//Run time Polymorphism
/*

* Function Overriding
Parent and Child both contain the same function with different implementation.
The parent class function is said to be overridden.

*/
//Example:
class Parent{
  public:
  void getInfo(){
     cout<<"Parent class"<<endl;
  }
  virtual void hello(){
     cout<<"Hello, I am virtual function from Parent"<<endl;
  }
};

class Child : public Parent{
  public:
  void getInfo(){
     cout<<"Child class"<<endl;
  }
  void hello(){
     cout<<"Hello, I am virtual function from child"<<endl;
  }
};
//Virtual Functions
// A virtual function is a member function that you expect to be redefined in derived classes. 
/**
 * Virtual functions are Dynamic in nature
 * Defined by the keyword "virtual" inside a base class and are always declared with a base class and overridden in a child class.
 * A virtual function is called during Runtime.
 */
int main(){
     Student s1;  //Non-Parameterised
     Student s2("Moni"); //parameterised constructor
     // This is known as constructor overloading. It change the form according to the call provided. It is also known as Compile-time Polymorphism.

    // Function Overloading
    MathOperations math;
    cout << "Sum of two integers: " << math.add(5, 3) << endl;          // Calls add(int, int)
    cout << "Sum of three integers: " << math.add(5, 3, 2) << endl;     // Calls add(int, int, int)
    cout << "Sum of two doubles: " << math.add(5.5, 3.3) << endl;       // Calls add(double, double)
    cout << "Sum of int and double: " << math.add(5, 3.3) << endl;      // Calls add(int, double)
    cout << "Sum of double and int: " << math.add(5.5, 3) << endl;      // Calls add(double, int)

    Child c1;
    c1.getInfo();
    c1.hello();


}