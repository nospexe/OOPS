#include <iostream>
using namespace std;
int main(){
    int num = 0;

    cout << "Enter a number \n";
    cin >> num;
    if (num > 0){
        cout << num << " is positive";
    }
    else if (num < 0){
        cout << num <<  " is negative";
    }
    else{
        cout << num << " is 0";
    }
    return 0;
}