#include <iostream>
using namespace std;

class Car{
    private:
        string Brand;
        string Model;
    
    public: 

        void SetBrand(string brand){
            Brand = brand;
        }
        void SetModel(string model){
            Model = model;
        }
        string GetBrand(){
            return Brand;
        }
        string GetModel(){
            return Model;
        }

};

int main(){
    Car cars[5];
    string brand;
    string model;
    for(int i = 0; i < 5; i++){
        cout << "Enter Brand of Car " << i + 1 << endl;
        getline(cin, brand);
        cout << "Enter Model of Car " << i + 1 << endl;
        getline(cin, model);
        cars[i].SetBrand(brand);
        cars[i].SetModel(model);
    }

    cout << "The following car brands and their models are: \n";
    for(int i = 0; i < 5; i++){
        cout << "Car brand " << i + 1 << ": " << cars[i].GetBrand() << endl;
        cout << "Car model " << i + 1 << ": " << cars[i].GetModel() << endl;    
        cout << endl;    
    }
    return 0;
}