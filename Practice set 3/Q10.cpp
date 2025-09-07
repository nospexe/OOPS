#include <iostream>
using namespace std;

class University{
    string Name;
    int Ranking;
    public:
        void SetName(string name){
            Name = name;
        }
        void SetRanking(int ranking){
            Ranking = ranking;
        }
        string GetName(){return Name;}
        int GetRanking(){return Ranking;}
};

int main(){
    University student1;
    student1.SetName("Aayush");
    student1.SetRanking(100);
    student1.Name //error shown as it cannot be accessed
    
    return 0;
}