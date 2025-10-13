#include<iostream>
using namespace std;

class Rectangle{
    int Length;
    int Breadth;

    public:
    Rectangle(int len, int brt){
        Length = len;
        Breadth = brt;
    }


    int area(){
        return Length * Breadth;
    }


};

int main(){
    Rectangle rec1(23, 10);
    int x = rec1.area();
    cout << x;
    return 0;
}

