#include <iostream>
using namespace std;
int main(){
    int num = 0;
    int num2 = 0;
    cout << "Enter a number \n";
    cin >> num;
    cout << "Enter another number \n";
    cin >> num2;
    if (num > num2){
        cout << num << " is larger";
    }
    else{
        cout << num2 <<  " is larger";
    }
    return 0;
}