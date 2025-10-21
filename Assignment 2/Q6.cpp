#include <iostream>
#include <string>

using namespace std;

class Sports;

class Student {
private:
    string Name;
    int Marks;

public:
    Student(string name, int marks) {
        Name = name;
        Marks = marks;
    }

    friend void displayCombinedReport(const Student& s, const Sports& sp);
};


class Sports {
private:
    string sportName;
    int sportScore;

public:
    Sports(string name, int score) {
        sportName = name;
        sportScore = score;
    }

    friend void displayCombinedReport(const Student& s, const Sports& sp);
};

void displayCombinedReport(const Student& s, const Sports& sp) {
    cout << "Combined Report \n";  
    cout << "Name: " << s.Name << endl;
    cout << "Marks: " << s.Marks << endl;
    cout << "Sport: " << sp.sportName << endl;
    cout << "Score: " << sp.sportScore << endl;
    cout << "Total Score: " << s.Marks + sp.sportScore << endl;
}

int main() {
    Student student1("Aayush", 85);
    Sports sports1("Basketball", 92);

    displayCombinedReport(student1, sports1);

    return 0;
}
