#include <iostream>
using namespace std;
int main(){
    int num = 0;
    cout << "Enter a number \n";
    cin >> num;
    if (num % 2 == 0){
        cout << "Your number is even";
    }
    else{
        cout << "Your number is odd";
    }
    return 0;
}