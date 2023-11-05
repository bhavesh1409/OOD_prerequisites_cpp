// Arrays of objects
// generally, arrays store elements with same data types but here we'll se how can we store
// different data objects in array
#include<iostream>
using namespace std;

class Student{    
public:
    string Name;
    int age;
    char Gender;

    virtual void Study() = 0;
};

class ProgrammingStudent : public Student{
    public:
    void Study(){
        cout<< "learning programing......"<<endl;
    }

}; 

class ArtsStudent : public Student{
    public:
    void Study(){
        cout<<"learning to paint......."<<endl;
    }
    
}; 

class MusicStudent : public Student{
    public:
    void Study(){
        cout<<"learning to sing...."<<endl;
    }
    
}; 

int main(){

    Student* student[3]; //an array of pointers to student class 
    // Student class became an abstract class, since it has atleast one 1 pure virtual function

    students[0] = new ProgrammingStudent(); //in dynamic memory, allocate space for derived class
    student[1] = new ArtsStudent();
    student[2] = new MusicStudent();
    // student[i] has the pointer to the object of that class

    for(int i=0; i<=2; i++)
    {
        student[i]->study();
    }


    // now let us go through concepts of memory deallocation
    // else, memory leakage problem

    for(int i=0; i<3; i++)
    {
        delete student[i];
    }
    // static code analyser, generally we use this tool

    return 0;
}