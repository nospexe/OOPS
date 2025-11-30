#include<iostream>
using namespace std;

class Content{
    protected:
    string title;

    public:

    Content(string t){
        title = t;
    }
    virtual void display() = 0;

    virtual ~Content(){
        cout << "Destructor \n";
    }
};

class Video : public Content{
    int duration;
    public:
    Video(string t, int d) : Content(t),  duration(d){
    }
    void display() override{
        cout << "Video class, duration " << duration << endl;
    }
    void test(){
        cout << "Armaan and dhiyanesh video \n";
    }

};

class Article: public Content{
    int wordCount;
    public:
    Article(string t, int wc) : Content(t), wordCount(wc){}
    void display() override{
        cout << "Article class, wordCount "<< wordCount << endl;
    }
};

int main(){
    Content* c1;
    // Video v("Content 1", 112);
    c1 = new Video("Content 1", 112);

    
    // c1->test();
    c1->display();

    
    Video *v1 = (Video*)c1;
    v1->display();
    v1->test();
    
    return 0;
}