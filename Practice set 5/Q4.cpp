#include<iostream>
using namespace std;
class Name2;
class Name1{
    string name = "Name1";
    public:
    friend void swap(Name1& d1, Name2& a1);
};
class Name2{
    string name = "Name2";
    public:
    friend void swap(Name1& d1, Name2& a1);
};

void swap(Name1& d1, Name2& a1){
    string temp = d1.name;
    d1.name = a1.name;
    a1.name = temp;
    
    cout << d1.name << " aalu " << a1.name << endl;
}

int main(){
    Name1 d1;
    Name2 a1;
    swap(d1, a1);
}
