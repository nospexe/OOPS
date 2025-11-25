#include<iostream>
using namespace std;

class Counter{
    int count;
    public:
    static int totalCount;
    Counter(int c){
        count = c;
        totalCount ++;
    }
};

int Counter::totalCount = 0;

int main(){
    Counter c1(34);
    Counter c2(33);
    Counter c3(34);
    cout << Counter::totalCount;
    return 0;
}