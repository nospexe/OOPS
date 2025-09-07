#include <iostream>
using namespace std;

class Temperature{
    float Celsius;

    public:
        void SetCelsius(float celsius){
            Celsius = celsius;
        }
        float GetCelsius(){
            return Celsius;
        }
        float GetFahrenheit(){
            float Fahrenheit = (Celsius * 1.8) + 32;
            return Fahrenheit;
        }

};

int main(){
    Temperature temp1;
    temp1.SetCelsius(40);
    cout << "The temperature is " << temp1.GetCelsius() << " degree celsius and " << temp1.GetFahrenheit() << " degree Fahrenheit";
    return 0;
}
