#include <iostream>
using namespace std;

class Rectangle{
    private:
        int Length;
        int Width;
    
    public:
        void SetLength(int length){
            Length = length;
        }
        void SetWidth(int width){
            Width = width;
        }

        int GetLength(){
            return Length;
        }
        int GetWidth(){
            return Width;
        }

        int Area(){
            return GetLength() * GetWidth();
        }
};

int main(){
    Rectangle rectangle1; 
    rectangle1.SetLength(10);
    rectangle1.SetWidth(15);
    cout << "The area of the rectangle is " << rectangle1.Area() << " unit squared";
    return 0;
}