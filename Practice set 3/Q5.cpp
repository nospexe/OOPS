#include <iostream>
using namespace std;

class Employee{
    private:
        string ID;
        float Salary;
    
    public:
        void SetID(string id){
            ID = id;
        }
        void SetSalary(float salary){
            Salary = salary;
        }

        string GetID(){
            return ID;
        }
        float GetSalary(){
            return Salary;
        }
};

int main(){
    Employee emp1;
    Employee emp2;
    Employee emp3;
    emp1.SetID("001#");
    emp2.SetID("002#");
    emp3.SetID("003#");
    emp1.SetSalary(100000);
    emp2.SetSalary(125000);
    emp3.SetSalary(95000);
    cout << "Employee 1 details " << endl << "id: " << emp1.GetID() << endl << "Salary: " << emp1.GetSalary();
    cout << endl << endl;
    cout << "Employee 2 details " << endl << "id: " << emp2.GetID() << endl << "Salary: " << emp2.GetSalary();
    cout << endl << endl;
    cout << "Employee 3 details " << endl << "id: " << emp3.GetID() << endl << "Salary: " << emp3.GetSalary();

    return 0;
}