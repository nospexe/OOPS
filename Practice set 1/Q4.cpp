#include <iostream>
using namespace std;
int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout << "Enter three numbers \n";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    if (num1 > num2 && num1 > num3){
        cout << num1 << " is the largest";
    }
    else if (num2 > num1 && num2 > num3) {
        cout << num2 << " is the largest";
    }
    else{
        cout << num3 << " is the largest";
    }
    return 0;
}