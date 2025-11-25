#include<iostream>
using namespace std;

class Student{
    string Name;
    int Age;
    int Marks;
    public:
    Student(){
        cout << "Default constructor called\n";
        Name = "Nothing";
        Age = -1;
        Marks = 0;
    }
    Student(string name, int age, int marks){
        cout << "Parameterized constructor called\n";
        Name = name;
        Age = age;
        Marks = marks;
    }

};

int main(){
    Student student1;
    Student student2("Aayush", 18, 100);
    return 0;
}