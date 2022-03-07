#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }

    // in case of virtual function -> pointer se jab hum call karenge inherited functions ko to apni-apni hi class ke functions call honge
    virtual void display() {}
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "Number of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, videolen;
    int words;

    title = "Django Tutorial";
    videolen = 14.56;
    rating = 4.89;
    CWHVideo video(title, rating, videolen);
    // video.display();

    title = "Django Tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText text(title, rating, words);
    // text.display();

    // OR

    CWH *tuts[2];
    tuts[0] = &video;
    tuts[1] = &text;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

/*

Rules for virtual functions -
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in the base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/