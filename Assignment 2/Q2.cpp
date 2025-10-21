#include<iostream>
#include<vector>
using namespace std;

struct KeyValue{ //easier than making a class for this 
    string Key;
    int value;
};

class Dictionary{
    vector<KeyValue> pair;

    int Key_index(const string& key) const { //const because this must not change any attribute value
        for (size_t i = 0; i < pair.size(); i++) {
            if (pair[i].Key == key) {
                return i;
            }
        }
        return -1; 
    }

    public:
        void add(const string& key, int value) { //pass by reference but cannot be modified
            int index = Key_index(key);
            if (index != -1) {
                pair[index].value = value;
            } else {
                pair.push_back({key, value});
            }
        }

    void find_value(const string& key) const {
        int index = Key_index(key);
        if (index != -1) {
            cout << "'" << key << "': " << pair[index].value << endl;
        } else {
            cout << "'" << key << "' not foundv." << endl;
        }
    }

    void display() const {
        if (pair.empty()) {
            cout << "Dictionary is empty." << endl;
            return;
        }
        for (size_t i = 0; i < pair.size(); i++) {
            cout << pair[i].Key << ": " << pair[i].value << endl;
        }
    }
};

int main() {
    Dictionary myGrades;

    myGrades.add("Math", 95);
    myGrades.add("History", 88);
    myGrades.add("Science", 92);

    myGrades.display();
    cout << endl;
    myGrades.find_value("History");
    myGrades.find_value("English");
    cout << endl;

    myGrades.add("Math", 98);
    myGrades.display();

    return 0;
}

