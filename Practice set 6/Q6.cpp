#include<iostream>
using namespace std;

class Complex{
    int real;
    int imag;
    public:
    Complex(int r, int i){
        real = r;
        imag = i;
    }
    void display(){
        cout << real << " + " << imag << "i";
    }
    friend Complex add(Complex& a, Complex& b);
};

Complex add(Complex& a, Complex& b){
    int real = a.real + b.real;
    int imag = a.imag + b.imag;
    Complex c(real, imag);
    return c;
}


int main(){
    Complex x(4, 6);
    Complex y(5, 7);
    Complex z = add(x, y);
    z.display();
    return 0;
}
