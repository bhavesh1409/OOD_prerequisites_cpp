/*
    virtual function :
    use/purpose -> to give us the ability to implement runtime polymorphism

    Situation :
    suppose i have a base class and in this base class i have a function and there exist a derived
    class that inherits from this base class and inside this derived class we have some function 
    with the same name as we had in base class

    what virual function does is it allows us to access the most derived version
    of the function implementation

    Simply, if this derived has its own implementation then thios derived class function
    will get executed and else the base class function will get executed
*/
#include<iostream>
using namespace std;

// class Instrument{
//     public:
//     virtual void MakeSound(){
//         cout << "Instrument is playing......" <<endl;
//     }  
// };

/*implementation of pure virtual function*/
class Instrument{
    public:
    pure virtual void MakeSound() = 0;
    // now every class that inherits from here has to provide its own implementation
};

class Piano : public Instrument{
    public:
    void MakeSound(){
        cout<<"piano is playing........."<<endl;
    }
};
class Accordion : public Instrument{
    public:
    void MakeSound(){
        cout << "Accordion is playing......" <<endl;
    } 
};

int main(){

    // Instrument i1;
    // i1.MakeSound();

    // lets test what we are getting when calling this makesound func, 
    // base class func or derived class func

    Instrument* i1 = new Accordion();
    i1->MakeSound(); // here u wont get the most derived verison since not used the virtual func
    // the o/p will be : "instrument is playing"
    // this is so bcuz it is not the virtual function, 
    // to make it virtual, add virtual keyword

    /* Now, we'll look into pure virtual functions 
        Ques : what kind of sound the specific intrument makes, the
        ans will depend on the type of the instrument, right?
        */
    
    Instrument* instrument[2] = {i1, i2};

    for(int i=0; i<2; i++)
    {
        instrument[i]->makeSound();
    }

    return 0;
}