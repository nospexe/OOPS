#include<iostream>
using namespace std;

class Distance{
    float Feet;
    float Inches;
    public:
    Distance(){
        Feet = 0;
        Inches = 0;//morph 1
        cout << "Default \n";
    }
    Distance(float feet){
        Feet = feet; //morph 2
        cout << "Parameter 1 \n";
    }
    Distance(float feet, float inches){
        Feet = feet;
        Inches = inches; //morph 3
        cout << "Parameter 2 \n";
    }


};
int main(){
    Distance dist1(2, 2);
    return 0;
}