#include<iostream>
using namespace std;
class Person{
    string Name;
    int Age;
    string Gender;
    public:
        Person(string name, int age, string gender){
            Name = name;
            Age = age;
            Gender = gender;
        }
        void displayInfo(){
            cout << "Hello everybody, I am "<< Name << endl;
            cout << "I am "<< Age << " years old \n";
            cout << "I identify as a " << Gender << endl;
        }

};

class Employee : public Person{
    protected:

    string Occupation;
    string Company;
    float Salary;

    public:
        Employee(string name, int age, string gender, string occupation, string company,
        float salary): Person(name, age, gender){
            Occupation = occupation;
            Company = company;
            Salary = salary;
        }

        void displayInfo(){
            Person::displayInfo();
            cout << "I work as an "<< Occupation << endl;
            cout << "Company: "<< Company << endl;
            cout << "My salary is: "<< Salary << endl;
        }
};

class Manager : public Employee{
    float Bonus;
    string Department;
    int Subordinates;
    public:
        Manager(string name, int age, string gender, string occupation, string company,
        float salary, float bonus, string depar, int subs): Employee(name, age, gender, occupation, company, salary){
            Department = depar;
            Bonus = bonus;
            Subordinates = subs;
            cout << "Hello, I am a manager \n";
        } //Multilevel Inheritence

        void displayInfo(){
            Employee::displayInfo();
            cout << "Im the head of " << Department << endl;
            cout << "My bonus is " << Bonus << endl;
            cout << "I have "<< Subordinates << " people working under me\n";
        }

        void fire_person(string name){
            cout << name << " is fired from " << Company<< endl;
        }

        void hire_person(string name){
            cout << name << ", you are hired in " << Company << endl;
        }

};


int main(){
    Person p1("Harry", 20, "male");
    p1.displayInfo();
    Employee emp1("Mark", 25, "male", "consultant", "TCS", 150000);
    emp1.displayInfo();
    Manager man1("Aria", 30, "female", "Principal consultant", "TCS", 500000, 25000, "Consultancy", 20);
    man1.displayInfo();
    man1.fire_person("Mark");
    man1.hire_person("Jerry");
    return 0;
}