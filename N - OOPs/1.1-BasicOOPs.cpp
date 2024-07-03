#include<iostream>
#include<string>
using namespace std;

    class Player {
        public:
        //Protected:
        //private:
        int health;
        int score;
        private:
        int mark;  //Cannot access from outside.
    
    };
    // Access Modifers

    // private--> Data & methods accessible inside class.
    // Public --> data & methods accessible to everyone.
    // Protected--> data & method accessible inside class & to its derived class.

    /**
     * By default attributes and member function is private.
     */
    class Teacher{
        public:
        Teacher(){
         cout<<"Hello I am a student"<<endl;
        }
        string name;
        string dept;
        string subject;
        double salary;
        // method / member functions
        void changeDept(string newDept){
           dept = newDept;
        }
        //setter
        void setSalary(double s){
            salary=s;
        }
        //getter
        double getSalary(){
            return salary;
        }

    };

    class Amount {
     private:
        double balance;
        string password; // data hiding is called Data Abstraction
     public:
        string accountId;
        string username;
    };

int main(){
    // Object Oriented Programming is a methodology or paradigm to design a program using classes and objects.
 
    /**        Four major topic in c++ opp
     * Data Abstraction
     * Data Encapsulation
     * Inheritance
     * Polymorphism
     */

    // Classes --> class is a user defined datatype. It is a bluePrint of the entities.It is a group of object.
    // Object is an instance of the class. Objects are entities in the real world.
    // Method is nothing but a function.

    class stutent{ // Memory is not assigned 
       int score;
    };
    string a="abc"; // Memory is assigned 
    Player moni;
    moni.score=100;
    moni.health=1000;

    //  moni.mark=1000;  Cannot access because mark is defined as private.
   cout<<moni.score<<endl;
   cout<<moni.health<<endl;
   Teacher Moni;
   Teacher t2;
   Moni.name="Moni Chaurasiya";
   Moni.subject="C++";
   Moni.dept="Computer Engineering ";
   Moni.salary=200000;
   cout<<Moni.name<<endl;
   cout<<Moni.getSalary()<<endl;

// Encapsulation --> Encapsulation is wrapping up of data and member functions in a single unit called class.

}