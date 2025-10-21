#include<iostream>
using namespace std;

class Shape{
    public:
        string Shape_type;
        Shape(string shape){
            Shape_type = shape;
            cout<< "Created a new " << Shape_type << endl;
        }

        float Calc_area(){
            cout<< "Area cannot be calculated for a generic shape" << endl;
            return 0;
        }
        float Calc_perimeter(){
            cout << "perimeter cannot be calculated for a generic shape"<< endl;
            return 0;
        }
};

class Rectangle : public Shape{
    public:
        int Length;
        int Width;
        Rectangle(double length, double width): Shape("Rectangle"){
            Length = length;
            Width = width;
        }

        float Calc_area(){
            return Length * Width;
        }

        float Calc_perimeter(){
            return 2 * (Length + Width);
        }


};

int main(){
    Shape shape1("Circle");
    shape1.Calc_area();
    Rectangle rec1(4,5.2);
    cout<< "The area of the rectangle is " << rec1.Calc_area()<< endl;
    cout<< "the perimeter of the rectangle is "<<rec1.Calc_perimeter()<< endl;
    return 0;
}
