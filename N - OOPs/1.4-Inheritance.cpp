// Inheritance--> When properties & member function of base class are passed on to the drived class.
// It is used for code reusability
// Class(A) --- (Parent Class, Base ) -------->  Class(B) --- (Child Class, Derived).

#include<iostream>
#include<string>
using namespace std;

class Person{ //Parent Class
public:
 string name;
 int age;
  ~Person(){
    cout<<"Parent Constructor"<<endl;
  }
  Person(string name,int age){
    this->name=name;
    this->age=age;
  }
};

class Student: public Person{ //Child Class
    public:
    int rollno;
    ~Student(){
        cout<<"Child Constructor"<<endl;
    }
    Student(string name, int age, int rollno) : Person(name, age) {
        this->rollno = rollno;
    }
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;

    }
};


/*
"First, the constructor of the parent class will be called, followed by the constructor of the child class. At the time of memory deallocation, the destructor of the child class will be called first, followed by the destructor of the parent class."
*/

class GradStudent : public Student{ // Multilevel Inheritance-->> Parent--> Student--> GradStudent
   public:
   string researchArea;

    GradStudent(string name, int age, int rollno,string researchArea) : Student(name, age,rollno){
         this->researchArea=researchArea;
    }

        void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;
        cout<<"researchArea: "<<researchArea<<endl;

    }
};

class Person2{ //Parent Class
public:
 string sirname;
 int mark;
  Person2(string sirname,int mark){
    this->sirname=sirname;
    this->mark=mark;
  }
  ~Person2(){
    cout<<"Parent2 Constructor"<<endl;
  }
};

class PS :public Person, public Person2{  //Multiple Inheritance --->> Person + Person2 --> PS
public:
      PS(string name, int age, string sirname, int mark)
        : Person(name, age), Person2(sirname, mark) {}

    void getInfo() {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "sirname: " << sirname << endl;
        cout << "mark: " << mark << endl;
    }
};

class Person3 { // Base Class
public:
    string name;
    int age;

    Person3(string name, int age) {
        this->name = name;
        this->age = age;
    }

    ~Person3() {
        cout << "Person3 Destructor" << endl;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student2 : public Person3 { // Derived Class 1 --> hierarchical inheritance 
public:
    int rollNo;

    Student2(string name, int age, int rollNo) : Person3(name, age) {
        this->rollNo = rollNo;
    }

    ~Student2() {
        cout << "Student2 Destructor" << endl;
    }

    void displayInfo() {
        Person3::displayInfo();
        cout << "Roll No: " << rollNo << endl;
    }
};

class Employee : public Person3 { // Derived Class 2 --> hierarchical inheritance 
public:
    int employeeId;

    Employee(string name, int age, int employeeId) : Person3(name, age) {
        this->employeeId = employeeId;
    }

    ~Employee() {
        cout << "Employee Destructor" << endl;
    }

    void displayInfo() {
        Person3::displayInfo();
        cout << "Employee ID: " << employeeId << endl;
    }
};

 //Hybrid (Virtual) Inheritance

class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived1 : virtual public Base {
public:
    void show1() {
        cout << "Derived1 class show function" << endl;
    }
};

class Derived2 : virtual public Base {
public:
    void show2() {
        cout << "Derived2 class show function" << endl;
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    void show3() {
        cout << "Derived3 class show function" << endl;
    }
};



int main(){
   Student s1("Moni",19,8);
   s1.getInfo();

   GradStudent s2("Moni",19,8,"Mumbai");
   s2.getInfo();

   PS t1("Monika", 20, "Chaurasiya", 90);
   t1.getInfo();

    Student2 s("Alice", 20, 101);
    s.displayInfo();

    cout << endl;

    Employee e("Bob", 30, 202);
    e.displayInfo();

}

//Mode of inheritance

/*           
           | Derived Class |    Derived Class  |   Derived Class
           |               |                   |  
Base Class | Private Mode  |    Protected Mode |   Public Mode 
________________________________________________________________                                   
Private    | Not Inherited |    Not Inherited  |   Not Inherited 
Protected  |  Private      |     Protected     |    Protected
Public     |  Private      |     Protected     |     Public

*/
/*

In object-oriented programming, inheritance is a mechanism that allows a class (known as a derived or child class) to inherit properties and behaviors (methods) from another class (known as a base or parent class). There are several types of inheritance, each serving different purposes:

1. Single Inheritance
Single inheritance occurs when a class (derived class) inherits from only one base class.

2. Multiple Inheritance
Multiple inheritance occurs when a class (derived class) inherits from more than one base class.

3. Hierarchical Inheritance
Hierarchical inheritance occurs when multiple classes (derived classes) inherit from a single base class.

4. Multilevel Inheritance
Multilevel inheritance occurs when a class (derived class) inherits from another derived class, forming a chain.

5. Hybrid (Virtual) Inheritance
Hybrid inheritance is a combination of two or more types of inheritance. It aims to avoid ambiguity and redundancy problems, often using virtual inheritance.
 */