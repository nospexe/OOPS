#include <iostream>
using namespace std;

class Book{
    private:
        string Title;
        float Price;
    
    public:
        void SetTitle(string title){
            Title = title;
        }
        void SetPrice(float price){
            Price = price;
        }
        string GetTitle(){
            return Title;
        }
        float GetPrice(){
            return Price;
        }
};

int main(){
    Book book1;
    book1.SetPrice(125.99);
    book1.SetTitle("Prisoner of Azkaban");
    cout << "The name of the book is " << book1.GetTitle();
    cout << " and the price is " << book1.GetPrice();

    return 0;

}