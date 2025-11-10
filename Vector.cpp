#include <iostream>
#include <vector>

// Helper function to print the vector's contents
void printVector(const std::vector<int>& vec) {
    for (int element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Original vector
    std::vector<int> my_vector = {10, 20, 30, 40};
    std::cout << "Original vector: ";
    printVector(my_vector); // Output: 10 20 30 40

    // Insert the value 50 at index 2
    my_vector.insert(my_vector.begin() + 2, 50);

    // Print the modified vector
    std::cout << "After insertion: ";
    printVector(my_vector); // Output: 10 20 50 30 40

    return 0;
}