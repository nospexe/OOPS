#include <iostream>
using namespace std;
int main(){
    int marks = 0;
    cout << "Enter the marks for the student\n";
    cin >> marks;
    if (marks <= 100 && marks >= 90){
        cout << "Grade: A";
    }
    else if(marks >= 80 && marks < 90){
        cout << "Grade: B";
    }
    else if(marks >= 70 && marks < 80){
        cout << "Grade: C";
    }
    else if(marks >= 60 && marks < 70){
        cout << "Grade: D";
    }
    else if(marks >= 0 && marks < 60){
        cout << "Grade: F";
    }
    else{
        cout << "Invalid marks entered, no grade";
    }
    return 0;
}