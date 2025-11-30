#include <iostream>
#include <vector>
#include <algorithm> // Needed for sort()
#include <numeric>   // Needed for accumulate() (sum)
#include <cmath>     // Needed for pow()

using namespace std;

template <typename T>

class Statistics {
private:
    vector<T> data;

public:
    Statistics() {}
    Statistics(vector<T> initData) : data(initData) {}


    void push(T value) {
        data.push_back(value);
    }

    // We return 'double' because even if T is int, the mean is often a decimal.
    
    double mean() const {
        if (data.empty()) return 0.0;
        // accumulate adds up everything in the vector starting from 0.0
        double sum = accumulate(data.begin(), data.end(), 0.0);
        return sum / data.size();
    }

    double median() const {
        if (data.empty()) return 0.0;
        vector<T> sorted = data;
        sort(sorted.begin(), sorted.end());

        int n = sorted.size();
        if (n % 2 != 0) {
            // Odd: Return the middle element
            return (double)sorted[n / 2];
        } else {
            // Even: Average the two middle elements
            return (sorted[n / 2 - 1] + sorted[n / 2]) / 2.0;
        }
    }

    double variance() const {
        if (data.empty()) return 0.0;
        double m = mean();
        double sumSqDiff = 0;
        
        for (T val : data) {
            // (Value - Mean)^2
            sumSqDiff += pow((val - m), 2);
        }
        return sumSqDiff / data.size();
    }


    // Operator + : Merges two datasets into a NEW object
    Statistics<T> operator+(const Statistics<T>& other) {
        Statistics<T> result;
        
        // 1. Copy my data
        result.data = this->data;
        
        result.data.insert(result.data.end(), other.data.begin(), other.data.end());
        
        return result;
    }

    // Operator << : Prints the dataset
    // Defined inline to avoid template linker headaches
    friend ostream& operator<<(ostream& os, const Statistics<T>& stat) {
        os << "{ ";
        for (size_t i = 0; i < stat.data.size(); i++) {
            os << stat.data[i];
            if (i != stat.data.size() - 1) os << ", ";
        }
        os << " }";
        return os;
    }
};

int main() {
    // --- TEST 1: INTEGERS ---
    cout << "=== INTEGER TEST ===" << endl;
    vector<int> v1 = {1, 2, 3, 4, 5};
    Statistics<int> s1(v1);

    vector<int> v2 = {6, 7, 8};
    Statistics<int> s2(v2);

    cout << "Set 1: " << s1 << endl;
    cout << "Set 2: " << s2 << endl;

    // Test Merging (+)
    int x = 4, y = 5, z;
    z = x + y;
    Statistics<int> s3 = s1 + s2;
    cout << "Merged: " << s3 << endl;
    
    // Test Stats
    cout << "Mean:     " << s3.mean() << endl;     // (36 / 8) = 4.5
    cout << "Median:   " << s3.median() << endl;   // (4+5)/2 = 4.5
    cout << "Variance: " << s3.variance() << endl; 

    cout << "\n-----------------\n";

    // --- TEST 2: FLOATS ---
    cout << "=== FLOAT TEST ===" << endl;
    Statistics<float> f1({2.5, 3.5, 4.5}); // Initializer list syntax
    Statistics<float> f2({5.5, 100.0});    // Outlier added

    Statistics<float> f3 = f1 + f2;
    
    cout << "Merged Floats: " << f3 << endl;
    cout << "Mean:   " << f3.mean() << endl;
    cout << "Median: " << f3.median() << endl;

    return 0;
}