#include<iostream>
using namespace std;

//Function Overloading in Classes (compile time)

class Addition{
    public:
        int add(int x, int y){
            return x + y; // adds 2 numbers
        }

        int add(int x, int y, int z){
            return x + y + z; // adds three numbers
        }
        double add(double x, double y){
            return x + y; // adds 2 floating point values
        }
        int add(char x, char y){
            return (int)x + (int)y; //adds 2 characters (ascii values)
        }

};

//Function Overriding in Classes (runtime)
class Animal {
public:
    virtual void makeNoise() {
        cout << "The animal makes a sound.\n";
    }
    
    virtual ~Animal(){
        cout << "Virtual destructor. \n";
    }
};

class Dog : public Animal{
public:
    void makeNoise() override {
        cout << "Woof!!!\n";
    }
};

class Cat : public Animal {
public:
    void makeNoise() override {
        cout << "Meow!!!\n";
    }
};

int main(){
    Addition add1;
    cout<< "Result of adding 2 + 4 = " << add1.add(2,4) << endl;
    cout<< "Result of adding 2 + 4 + 5 = " << add1.add(2,4, 5) << endl;
    cout<< "Result of adding 2.3 + 4.2 = " << add1.add(2.3,4.2) << endl;
    cout<< "Result of adding a + b as characters to an integer result = " << add1.add('a','b') << endl; 

    Animal *Animal1 = new Dog();
    Animal *Animal2 = new Cat();
    Animal *Animal3 = new Animal();

    cout << "Calling makeSOund() through base class pointers:" << endl;
    Animal1->makeNoise(); 
    Animal2->makeNoise(); 
    Animal3->makeNoise();

    delete Animal1;
    delete Animal2;
    delete Animal3;

    return 0;
}
