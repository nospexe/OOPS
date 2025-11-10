#include<iostream>
using namespace std;

class Image{

    string desc;

    public:
    Image(string d) : desc(d){}

    virtual void display(){
        cout << desc << endl;
    }
};

class Photo : public Image{
    int res_len = 10;
    int res_brd = 20;
    public:
    Photo(int r_l, int r_b, string d) : Image(d), res_len(r_l),res_brd(r_b){}

    void display(){
        cout << (res_len * res_brd) << endl;
        Image::display();
    }

};

int main(){
    Photo p1 (10, 13, "Hello");
    Image *im1 = &p1;

    im1->display();

    
}