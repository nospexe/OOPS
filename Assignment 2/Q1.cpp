#include<iostream>
#include<vector>
using namespace std;


class List{
    public:
        virtual void display() = 0; //Pure virtual function, needs to be overriden

        virtual ~List() = default;
};

class Integer : public List{
    int value;
    public:
        Integer(int x) : value(x){}

        void display() override{
            cout << value; //Displaying each data type value
        }
    
};

class String : public List{
    string value;
    public:
        String(string x) : value(x){}

        void display() override{
            cout << value;
        }
};

class Double : public List{
    double value;
    public:
        Double(double x) : value(x){}

        void display() override{
            cout << value;
        }
};

class Character : public List{
    char value;
    public:
        Character(char x) : value(x){}

        void display() override{
            cout << value;
        }
};

class Boolean : public List{
    bool value;
    public:
        Boolean(bool x) : value(x){}

        void display() override{
            cout << value;
        }
};

int main(){
    vector<List*> list1; //this is the 'python' list

    list1.push_back(new Integer(101));
    list1.push_back(new String("Hello everyone"));
    list1.push_back(new Double(4.33));
    list1.push_back(new Boolean(true));
    list1.push_back(new Character('x'));
    cout << "Num of elements: " << list1.size() << endl;
    for(List* list: list1){
        list->display();
        cout << endl;
    }

    for (List* item : list1) {
        delete item; //heap deletion
    }

    list1.clear();

    return 0;
}