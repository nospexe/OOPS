#include<iostream>
using namespace std;


class Fraction{
    int Numerator;
    int Denominator;
    public:
    Fraction(){
        Numerator = 0;
        Denominator = 1;
    }
    Fraction(int numerator){
        Numerator = numerator;
        Denominator = 1;
    }
    Fraction(int numerator, int denominator){
        Numerator = numerator;
        if(denominator !=  0){
            Denominator = denominator;
        }
        else{
            Denominator = 1;
        }
    }

    void Simplest(){
        if (Numerator > Denominator){
            for(int i = Denominator; i > 1; i ++){
                if(Denominator % i == 0 && Numerator % i == 0){
                    Numerator = Numerator / i;
                    Denominator = Denominator / i;
                    break;
                }
            }
        }
        else{
            for(int i = Numerator; i > 1; i ++){
                if(Denominator % i == 0 && Numerator % i == 0){
                    Numerator = Numerator / i;
                    Denominator = Denominator / i;
                    break;
                }
            }
        }
        cout << Numerator << " den:" << Denominator << endl;
    }
};


int main(){
    Fraction f1(8, 4);
    f1.Simplest();

}