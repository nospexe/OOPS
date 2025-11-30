#include<iostream>
using namespace std;

class A{
    public:
    void f(){
        cout << "f from base\n";
    }
    virtual void g(){
        cout << "g from base\n";
    }
    virtual void h(){
        cout << "h from base\n";
    }
};

class B : public A{
    public:
    virtual void f(){
        cout << "f from derived\n";
    }
    void g(){
        cout << "g from derived\n";
    }
    void h(){
        cout << "h from derived\n";
    }
};

int main(){
    A* aptr = new A;
    B* bptr = new B;
    bptr = (B*)aptr;
    bptr->f();
    bptr->g();
    bptr->h();
    aptr->f();
    return 0;
}
