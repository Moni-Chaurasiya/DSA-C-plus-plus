// Abstraction --> Hiding all unnecessary details & showing only the important parts.
// It is a access modifier.
/*
--> Abstract class are used to define blueprint.
--> Abstract classes are used to provide a base class from which other classes can be derived.
--> They cannot be instantiated(make object) and are meant to be inherited.
--> Abstract classes are typically used to define an interface for derived classes.
*/
//Example:
#include<iostream>
using namespace std;

class Shape{  //abstract class
    virtual void draw()=0; //pure virtual function
};

class Circle: public Shape{
   public:
     void draw(){
        cout<<"drawing a circle"<<endl;
     }
};

int main(){
 Circle c1;
 c1.draw();

}



