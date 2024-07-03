#include<iostream>
using namespace std;

class teacher{
public:

teacher(){ // Non-Parameterised constructor
 cout<<"Hello I am a student"<<endl;
 dept="Computer Science";
}
teacher(string n,string s,double sal,string d){ // Parameterised constructor
 this->name=n;
 this->dept=d;
 this->subject=s;
 this->salary=sal;

}
//Copy constructor
teacher(teacher &obj){
    cout<<"I am custom copy constructor"<<endl;
    this->name=obj.name;
    this->dept=obj.dept;
    this->subject=obj.subject;
    this->salary=obj.salary;
}

   string name;
   string dept;
   string subject;
   double salary;
   void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"subject: "<<subject<<endl;
   }
};

 
class student {
 public:
 string name;
 double* cgpaPtr;
 student(string name,double cgpa){
    this->name=name;
    cgpaPtr = new double;
    *cgpaPtr=cgpa;
 }
 student(student &obj){
    this->name =obj.name;
    cgpaPtr=new double;
    *cgpaPtr=*obj.cgpaPtr;
 }
 void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<< "cgpa: "<<*cgpaPtr<<endl;
 }
} ;

class book {
public:
    string name; 
    int price;
    int noOfPage;
    
    int countBooks(int pri) {
        if (price < pri) {
            return 1;
        } else {
            return 0;
        }
    }

    bool isBookPresent(string bookName) {
        return (name == bookName);
    }
};
int main(){
    //Construtor --> Special method invoked automatically at time of object creation. 
    //                Used for initialisation.
    //Constructor type --> Non-Parameterised, Parameterised, Copy constructor
    //Copy Constructor --> Special Constructor (default) used to copy properties of one object into another.
    /*
     Same name as class.
     Constructor doesn't have a return type.
     Only called once (automatically), at object creation.
     Memory allocation happens when constructor is called.
    
    */
teacher M;

M.name="M Chaurasiya";
M.subject="C++";
cout<<M.name<<endl;
cout<<M.subject<<endl;
cout<<M.dept<<endl;
teacher t1("M","math",200000,"Computer");
t1.getInfo();
 teacher t2(t1);
 t2.getInfo();


   // this --> this is a special pointer in C++ that points to the current object.
   // this->prop is same as *(this).prop
     
   // Two type of copy constructor --> shallow and Deep copy.
   // this is a shallow copy
   // * A shallow copy of an object copies all of the member values from one object to another.
   // * A deep copy, on the other hand, not only copies the member values but also makes copies of 
   //    any dynamically allocated memory that the members point to.

 student s1("M Chaurasiya",8.9);
 student s2(s1);
 s1.getInfo();
 *(s2.cgpaPtr)=9.4; // Shallow copy will change cgpa of every student because same address is passed.
  s1.getInfo();
  s2.name="soni";
 s2.getInfo();

    book Mo;
    Mo.name = "Moni"; 
    Mo.price = 100;
    Mo.noOfPage = 1000;
    
    cout << Mo.countBooks(10) << endl; // Outputs 1 if price < 10, otherwise 0
    cout << Mo.isBookPresent("Moni") << endl; // Outputs 1 if book name is "Moni", otherwise 0

}