#include <iostream>
#include <algorithm>
using namespace std;
template <typename SortItems>

void Sort(SortItems arr[], int size){
    int temp = 0;
    for(int i = 0; i < size; i ++){
        for(int j = 0; j < size - 1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {1,7,3,4,9,12,66,3};
    Sort(arr, 8);
    for(int i = 0; i < 8; i ++){
        cout << arr[i];
    }
    return 0;
}