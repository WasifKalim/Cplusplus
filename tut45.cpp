// Code Example Demonstrating Virtual Base Class
#include<bits/stdc++.h>
using namespace std;
/*
student -- > test [Done]
student --> sports [Done]
test --> result [Done]
sports --> result [Done]
*/

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll number is "<<roll_no<<endl;
        }
};

// class Test: virtual public Student{ both syntax are same
class Test: public virtual Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout<<"You result is here: "<<endl
                <<"Maths: "<<maths<<endl
                <<"Physics: "<<physics<<endl;
        }
};

class Sports: virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout << "YOUR PT score is "<<score<<endl;
        }
};

class Result: public Test, public Sports
{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();// In this, there will be two ways go to print_number in class Student (1.via class_Test 2. via class_Result) so virtual is defined int class_Test and class_Result to avoid confusion of compiler
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};

int main(){
    Result harry;
    harry.set_number(402);
    harry.set_marks(78.9, 99.5);
    harry.set_score(9);
    harry.display();
    return 0;
}

// Result m roll_no do barr throw ho raha tha