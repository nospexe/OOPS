#include<iostream>
using namespace std;
template <class T>
    void arrayswap(T &x, T &y){
        T z = x;
        x = y;
        y = z;
    }   
    

int main(){
    int a = 5 , b = 6;
    float a1 = 5.5, b1 = 5.6;
    string s1("Balaji"), s2("Balaa TS");


    cout << "Values before swapping\n a: " << s1 << " and b: " << s2 << endl;
    arrayswap<string>(s1, s2);
    cout << "Values after swapping\n a: " << s1 << " and b: " << s2 << endl;

    return 0;

}
