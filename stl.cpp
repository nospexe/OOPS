#include<iostream>
using namespace std;
template <class T>

T max1(T i, T j){
    return i > j ? i : j;
}

int main(){
    float a=5.5, b=8.4, c;
    int d = 6;
    c = max1<int>(a, d);
    cout << "Max float is " << c << endl;
}