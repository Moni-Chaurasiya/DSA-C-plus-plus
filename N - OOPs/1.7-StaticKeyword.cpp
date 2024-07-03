//Static Keyword--> 
/*
Static Variables--> Variables declared as static in a function are created & initialized once for the lifetime of the program. //in Function

Static variables in a class are created & initialised once. They are shared by all the object of the class. //in Class

 */

/*
Static Members-->
Static Variables: Class-level variables shared among all objects of the class.
Static Functions: Functions that can be called on the class itself, not on specific objects.
*/
#include<iostream>
using namespace std;
void func(){
    static int x=0; // globally declared // It exist lifetime of program.
    cout<<"x :"<< x <<endl;
    x++;
}

class A{
   public:
   int x;
   void incX(){
    x=x+1;
   }
};

class ABC{
    public:
    ABC(){
        cout<<" constructor\n";
    }
    ~ABC(){
        cout<<" destructor\n";
    }
};
int main (){
 func();
 func();
 func();

 A obj;
 obj.x=0;
 cout<<obj.x<<endl;
 obj.incX();
 cout<<obj.x<<endl;
 A obj3; 
 obj3.x=200;
 cout<<obj3.x<<endl;
 // obj and obj2 value will be different as we have initialised different value but if we declared static variable it will be same for both. 
 // x variable will be created twice.

if(true){
    // ABC obj; 
    // In this case output will be
/*    constructor
      destructor
      end of main fnx  */
    static ABC obj2; // first main loop will be finish then it will destruct
    // In this case output will be
/*    constructor
      end of main fnx  
      destructor       */
}

cout<<"end of main fnx"<<endl;

}

// More OPPs concept is...
/*
Friend Function and class
Exception Handling--> try, catch,throw
Template
Namespaces
Composition (Aggregation)
etc...
 */
