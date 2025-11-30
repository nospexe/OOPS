#include<iostream>
using namespace std;

class Model{
    public:
    virtual void train() = 0;
    virtual void predict() = 0;

    virtual ~Model(){
        cout << "Destructor";
    }

};

template <typename T>

class LinearModel : public Model{
    T val;
    public:
    LinearModel(T v): val(v){}
    void train() override {
        cout << "Training the type \n" << val << endl;
    }
    void predict() override {
        cout << "Predicting the value in key \n" << val << endl;
    }
    ~LinearModel(){
        cout << "Derived destructor";
    }
};

template <typename T2>

class PolynomialModel : public Model{
    int deg;
    T2 int2;
    public:
    PolynomialModel(int d, T2 int23): deg(d), int2(int23){
        deg = d;
    }
    void train() override {
        cout << "Training the type \n" << deg << endl;
    }
    void predict() override {
        cout << "Predicting the value in key \n" << deg << endl;
    }

};

int main(){
    Model* bptr; // Base Pointer

    bptr = new LinearModel<int>(4);

    bptr->predict();
    bptr->train();

    delete bptr;
}
