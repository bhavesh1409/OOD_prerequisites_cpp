/*
A friend function has access to the private and protected members of a class and
it can access these members by the virtue of friendship relationship
*/

#include<iostream>
using namespace std;

class EquilateralTrinagle{
    private:
    float a;
    float circumference;
    float area;

    public:
    void setA(float len)
    {
        a = len;
        circumference = 3*a;
        area = (1.73 * a * a)/4;
    }

    friend void PrintResults(EquilateralTrinagle et){
        cout << "circumference == " << et.circumference <<endl;
        cout<< "area == "<<et.area<<endl;
    }
};

friend class Homework(){
    public:
    void PrintResults(EquilateralTrinagle et){
        cout << "circumference == " << et.circumference <<endl;
        cout<< "area == "<<et.area<<endl;
        
    }
}

int main(){

    EquilateralTrinagle et;
    et.setA(3);

    PrintResults(et);
    
    return 0;
}
/*
can a class has multiple friend functions ? 
yes it can have any number of friend functions,

choose your friends carefully and generally we donot use many friend functions
*/

/* concept of friend classes : 

    suppose homework class is made the friend class of equilateralTriangle class
    then pvt and protected members of eq class can be accessed by homework class 
    but note that vice versa is not true

    NOTE : friendship in programing is not mutual
    & friendship is not inherited

    Friend functions are oftenly when we overload operators
    

*/