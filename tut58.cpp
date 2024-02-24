// Abstract Base Class & Pure Virtual Functions in C++
// The class which is officially made so that from base class a derived class can be made, so the base class is called is called Abstract Base class
// Pure virtual class- In this the derived class must have display function else it will show error-- It must be overrided
// Pure virtual function syntax--> virtual void display() = 0;

// Abstract Base class must have one Pure virtual function-- ex-> Tesla have a music base class but music depend from models to models

// The code is copied(tut57)
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display() = 0;//{ (do-nothing function --> pure virtual function)--If virtual function is not there then compiler will calls its own constructor(display function) that will be useless
            // cout<<"This is CWH display"<<endl;
        // }
};

class CWHVideo: public CWH{
    int videoLength;
    public:
        CWHVideo(string s, float r, int vl):CWH(s, r){ 
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title: "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};

class CWHText: public CWH{
    int words;
    public:
        CWHText(string s, float r, int wc):CWH(s, r){ 
            words = wc;
        }
        void display(){
            cout<<"This is an amazing text tutorial with title: "<<title<<endl;
            cout<<"Ratings of this tutorial: "<<rating<<" out of 5 stars"<<endl;
            cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
        }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo  djVideo(title, rating, vlen);
    // djVideo.display();

    // for Code with Harry
    title = "Django tutorial Text";
    words = 46;
    rating = 4.39;
    CWHText  djtext(title, rating, words);
    // djtext.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djtext;

    tuts[0]->display();// Pointer is always use arrow command
    tuts[1]->display();

    return 0;
}