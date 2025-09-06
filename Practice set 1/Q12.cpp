#include <iostream>
using namespace std;
int main(){
    int a = 0, b = 0, c = 0;
    cout << "Enter the values of a, b and c in ax^2 + bx + c\n";
    cin >> a >> b >> c;
    if((b*b) - 4*a*c >= 0){
        double ans1 = (-b + ((b*b) - 4*a*c))/2*a;
        double ans2 = (-b - ((b*b) - 4*a*c))/2*a;
        cout << "Root 1: " << ans1 << "\nRoot 2: " << ans2;
    }
    else{
        cout << "Roots are imaginary";
    }
    return 0;
}