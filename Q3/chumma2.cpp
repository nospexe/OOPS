#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;


class Student {
    string name;
    int marks;
public:
    Student(string n, int m) : name(n), marks(m) {}


    int key() const {
        return marks; 
    }

    void display() const {
        cout << "Student: " << name << " | Marks: " << marks << endl;
    }
};


class Product {
    string name;
    double price;
public:
    Product(string n, double p) : name(n), price(p) {}


    double key() const {
        return price;
    }

    void display() const {
        cout << "Product: " << name << " | Price: $" << price << endl;
    }
};

template <typename T>
void sortItems(T arr[], int size) {

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {

            if (arr[j].key() > arr[j + 1].key()) {

                swap(arr[j], arr[j + 1]); 
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i].display();
    }
}


int main() {

    Student students[] = {
        Student("Alice", 85),
        Student("Bob", 92),
        Student("Charlie", 40)
    };
    int sCount = 3;

    cout << "--- Sorting Students (by Marks) ---" << endl;
    sortItems(students, sCount);
    printArray(students, sCount);


    // 2. Create Array of Products
    Product products[] = {
        Product("Laptop", 1200.50),
        Product("Mouse", 25.00),
        Product("Monitor", 300.99)
    };
    int pCount = 3;

    cout << "--- Sorting Products (by Price) ---" << endl;
    sortItems(products, pCount); // Compiler creates sortItems<Product>
    printArray(products, pCount);

    return 0;
}