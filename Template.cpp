#include<iostream>
using namespace std;
template <class T ,int size>
    T arraymax(T x[size]){
        T y = x[0];
        for(int i = 1; i < size; i++){
            if (x[i] > y){
                y = x[i];
            }
        }
        return y;
    }
    



int main(){
    int arr [7] = {43,5,4,35,63,545,543};
    int c = arraymax<int, 7>(arr);
    cout << "Max is "<< c << endl;

    float arr2 [5] = {4.3, 5.4, 5.5, 5.6, 5.8};
    float d = arraymax<float, 5>(arr2);
    cout << "Max is "<< d << endl;
    return 0;


    
}