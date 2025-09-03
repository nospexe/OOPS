#include <iostream>
using namespace std;
int main(){
    int num = 0;
    cout << "Enter a number \n";
    cin >> num;
    cout << "the multiplication table of this number is \n";
    for(int i = 1; i <= 10; i++){
        cout << num << " * " << i << " = " << i * num << endl;
    }
    return 0;
}