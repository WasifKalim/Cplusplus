#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);//which line gives value it its type is void always remember it
};

void Student :: set_roll_number(int r){
    roll_number = r;
}

void Student :: get_roll_number(){
    cout<<"The roll no is: "<<roll_number << endl;
}

class Exam : public Student{
    protected:
    float maths;
    float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(){
    cout <<"The roll number is "<< roll_number<<endl;
    cout << "The marks of maths are "<<maths<<" and physics are "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display_result(){
            get_roll_number();
            get_marks();
            cout << "Your percentage is "<< (maths + physics) / 2<<"%" <<endl;
        }
};

int main(){
    /*
Notes:
    If we are inheriting B from A and C from B:[A--->B--->C]
    1. A is the base class for B and B is the base class for C
    2. ABC is called Inheritance Path
    */
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(99.0,90.0);
    harry.display_result();
    
    return 0;
}