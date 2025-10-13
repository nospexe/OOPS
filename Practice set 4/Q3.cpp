#include <iostream>
using namespace std;

class Complex{

    int Real;
    int Imag;

    public:
    Complex(){
        Real = 0;
        Imag = 0;
    }
    Complex(int real, int img){
        Real = real;
        Imag = img;
    }
    Complex(int real){
        Real = real;
    }

    void display(){
        cout << Real << " + " << Imag << "i"<< endl;
    }
};

int main(){
    Complex c1(2, 3);
    c1.display();
    Complex c2(23);
    c2.display();
    Complex c3;
    c3.display();

    return 0;
}

