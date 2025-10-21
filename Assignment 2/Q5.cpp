#include<iostream>
using namespace std;

class Person{
    protected:
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

class Athlete{
    protected:
    string Sport;
    int Num_Trophies;
    public:
        Athlete(string sport, int num_T){
            Sport = sport;
            Num_Trophies = num_T;
            cout << "Athlete constructor";
        }
        void displayInfo(){
            cout << "The athlete plays " << Sport << endl;
            cout << "They have won " << Num_Trophies << " trophies \n";
        }


};

class SportsPerson : public Person, public Athlete{

    public:

    SportsPerson(string name, int age, string gender, string sport, int trophies)
            : Person(name, age, gender), Athlete(sport, trophies){
            cout << "SportsPerson constructor" << endl;
    }

    void displayInfo() {
        Person::displayInfo();
        Athlete::displayInfo();
    }
    
    void playSport(){
        cout << Person::Name << " is playing " << Sport << endl;
    }
};


int main() {
    SportsPerson sp("Serena", 40, "Female", "Tennis", 73);
    cout << endl;
    sp.displayInfo();
    cout << endl;
    sp.playSport();

    return 0;
}