#include <iostream>
using namespace std;
#include <string>
class Student{
    private:
        string name;
        int age = 0;
    public:
        void setName(string Name) {
            name = Name;
        }

        void setAge(int Age) {
            age = Age;
        }

        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }
    
};
int main(){
    Student student1;
    student1.setName("Aayush");
    student1.setAge(18);
    cout << "The name of the first student is " << student1.getName() << endl;
    cout << "The age of the first student is " << student1.getAge();
}