#include<iostream>
#include<vector>
using namespace std;

class List{
private:
    vector<int> Data;
    vector<int> OG_Data; //to retain a copy useful for resetting the data

public:

    void add(int number) {
        Data.push_back(number);
        OG_Data.push_back(number);
    }

    void display() const { //const because function shoudl not change value of attributes
        for (int num : Data) {
            cout << num << " ";
        }
        cout << endl;
    }

    void reset() {
        Data = OG_Data;
    }

    void bubblesort(){
        bool flag;
        int temp;
        for (size_t i = 0; i < Data.size() - 1; i++) {
            flag = false;
            for (size_t j = 0; j < Data.size() - i - 1; j++) {
                if (Data[j] > Data[j + 1]) {
                    temp = Data[j];
                    Data[j] = Data[j+1];
                    Data[j + 1] = temp;
                    flag = true;
                }
            }
            if (!flag) break; // if it is sorted, break
        }
    }

    void insertionSort() {
        for (size_t i = 1; i < Data.size(); i++) {
            int key = Data[i];
            int j = i - 1;
            while (j >= 0 && Data[j] > key) {
                Data[j + 1] = Data[j];
                j = j - 1;
            }
            Data[j + 1] = key;
        }
    }
};

int main() {
    List myList;
    myList.add(11);
    myList.add(32);
    myList.add(25);
    myList.add(12);
    myList.add(22);
    myList.add(29);
    myList.add(45);

    cout << "Original list:" << endl;
    myList.display();

    cout << "Bubble Sort" << endl;
    myList.bubblesort();
    myList.display();

    myList.reset(); // resetting data to original

    cout << "Original list:" << endl;
    myList.display();

    cout << "Insertion Sort" << endl;

    myList.insertionSort();
    myList.display();

    return 0;
}