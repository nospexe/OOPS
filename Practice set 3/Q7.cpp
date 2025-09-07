#include <iostream>
#include <cmath>

using namespace std;
 
class Circle{

    float Radius;
    
    public:
        void SetRadius(float radius){
            Radius = radius;
        }
        float GetRadius(){
            return Radius;
        }

        float getArea(){
            return M_PI * (GetRadius() * GetRadius());
        }
    
};


int main(){
    Circle circle1;
    circle1.SetRadius(4.5);
    cout << "The area of the circle with radius " << circle1.GetRadius() << " is " << circle1.getArea() << " unit squared";
    return 0;
}