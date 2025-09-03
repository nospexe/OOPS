#include <iostream>
using namespace std;
int main(){
    int factorial = 0;
    int total = 1;
    cout << "Enter a number\n";
    cin >> factorial;
    for(int i = 1; i <= factorial; i ++){
       total *= i;
    }
    cout << "The factorial of "<< factorial << " is "<< total;
    return 0;
}