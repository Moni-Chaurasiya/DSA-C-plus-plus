// Dectructor is opposite of Constructor.
// Constructor allocate memory.
// Destructor deallocate memory.
#include<iostream>
using namespace std;
class student {
    public:
        int health;
        int score;
        int mark;  
        double* cgpaPtr;
        student(int health, double cgpa){
            this->health=health;
            cgpaPtr=new double; //Dynamically allocated memory
            *cgpaPtr=cgpa;

        }
        // Destructor --> No need to call. It automatically call itself.
         //If we don't make destructor it will automatically make.
    ~student(){
        cout<< "Hi, I am destructor and I delete everything." <<endl;
        delete cgpaPtr; // To delete Dynamically allocated memory. So that memory should not waste.
    }
};

int main(){
    student moni(1000,3.9);
    moni.score=100;
    moni.health=9000;
    moni.mark=92;
    
} 