/*
Abstraction : means showing the important information and hiding the complex info
that user might not be inserted in
example -> car, coffee making machine

things that absracted don't change very frequently for the end user
one word -> Implementation hiding

To implement abstraction in programing, we need to create the abstract classes
abstract classes -> classes that has atleast one pure virtual function

virtual function -> the method that ensures to get the implementation of the
most derived class (if present)

pure virtual function -> in which the implementation is seperately designed for
all the derived classes.
*/
#include<iostream>
using namespace std;

class Smartphone(){
    public:
    virtual void TakeASelfie() = 0;
    virtual void MakeACall() = 0;
    //note we cannot create instances of absteract classes
    // but we can create the pointers to abstract classes

};

class Android : public Smartphone{
    public:
    void TakeASelfie(){
        cout <<"Android selfies"<<endl;
    }

    void makeACall(){
        cout << "Android Calling.........."<<endl; 
    }
};

class Iphone : public Smartphone{
    public:
    void TakeASelfie(){
        cout << "Iphone Selfie....."<<endl;
    }

    void makeACall(){
        cout << "Iphone Calling.........."<<endl; 
    }
};

int main(){
    Smartphone* s1 = new Android();

    s1->TakeASelfie();

    s1->MakeACall();
    return 0;
}