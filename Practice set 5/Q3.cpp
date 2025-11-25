#include<iostream>
using namespace std;
class Rectangle{
    int Length;
    int Width;
    public:
    Rectangle(int length, int width){
        Length = length;
        Width = width;
    }
    friend int area(const Rectangle& rec1);
};

int area(const Rectangle& rec1){
    int Area = rec1.Length * rec1.Width;
    return Area;
}

int main(){
    Rectangle rec1(2,12);
    cout << area(rec1);

    return 0;
}