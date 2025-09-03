#include <iostream>
using namespace std;
int main(){
    int year = 0;
    cout << "Enter a year \n";
    cin >> year;
    if (year % 4 == 0 || year % 100 == 0){
        if (year % 100 == 0 && year % 400 == 0){
            cout << "It is a leap year";
        }
        else if (year % 100 != 0){
            cout << "It is a leap year";
        }
        else{
            cout << "Its not a leap year";
        }
    }
    return 0;
}