#include <iostream>
using namespace std;
int main(){
    int num = 0;
    cout << "Enter a number ";
    cin >> num;
    cout << "The sum of first "<< num << " numbers is ";
    float sum = (num * (num + 1))/2;
    cout << sum;
    return 0;
}