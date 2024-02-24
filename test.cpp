#include <iostream>
#include <string>
using namespace std;

// f(x) = x^2 + 2;
// int sum(int a, int b)
// {
//      int c;
//      c = a + b;
//      return c;
// }

class Employee{
     public:
          string name;
          int salary;

          Employee(string n, int s, int sp)
          {
               this->name = n;
               this->salary = s;
               this->secretPassword = sp;
          }

          void printDetails()
          {
               cout <<"The name of our first emplayee is "<< this->name << " and his salary is "<< "$" <<this->salary<<endl;
          }

          void getSecretPassword()
          {
               cout<<"The secret password of employee is "<<this->secretPassword;
          }

          private:
               int secretPassword;

};
class Programmer : public Employee
{
     public:
          int errors;
};

int main()
{
     // cout << "This is C++ Code" << endl;
     // cout << "Next Line";
     // int a, b, c;
     // short _sa = 9;
     // cout<<_sa;

     // camelCase Notation
     // int marksInMaths = 83;
     // cout<<"The marks of the student in maths is " <<marksInMaths;

     // String harry = "harry"
     // short a;
     // int b;
     // long c;
     // long long d;
     // float const score = 45.32;tet
     // double score2 = 45.322;
     // long double score3 = 45.332;
     // score = 43;
     // cout << "The score is " << score;

     // int a, b;
     // cout << "Enter the first Number"<<endl;
     // cin>>a;

     // cout << "Enter Second Number"<< endl;
     // cin >> b;

     // cout << "the sum is " << sum(a,b);

     // cout << "The sum is "<< a + b << endl;
     // cout << "The substraction is "<< a - b <<endl;
     // cout << "The division is "<< a / b <<endl;
     // cout << "The multiply is "<< a * b <<endl;

     // int age;
     // cout << "Enter your age" << endl;
     // cin >> age;

     // switch (age)
     // {
     // case 12:
     //      cout << "You cannot vote";
     //      break;

     // case 18:
     //      cout << "You can vote";
     //      break;

     // default:
     //      cout << "You are neither 12 nor 18 years old";
     //      break;
     // }
     // if(age>18){
     //      cout<<"You can vote";
     // }
     // else if (age>150){
     //      cout << "Invalid age";
     // }
     // else{
     //      cout << "You can not vote";
     // }

     // int index = 0;
     // while(index<23)
     // {
     //      cout << "We are at index no." index << endl;
     //      index = index + 1;
     // }
     // do
     // {
     //      cout << "We are at index no." << index << endl;
     //      index = index + 1;
     // } while (index <34);
     
     // for(int i = 0; i <= 34; i++)
     // {
     //      cout << "The value of i is "<< i << endl;
     // }

     // int arr[3] = {3, 4, 1};
     // cout << arr[2];

     // int marks[6];

     // for( int i =0; i<6; i++)
     // {
     //      cout << "Enter the marks of "<<i<<"th student"<<endl;
     //      cin >> marks[i];
     // }

     // for(int i = 0; i < 6; i++)
     // {
     //      cout<<"The marks of"<<i<<"th student is "<<marks[i]<<endl;
     // }

     // int arr2d[2][3] = {
     //      {1,2,3},
     //      {4,5,6}
     // };

     // for(int i = 0; i<2; i++)
     // {
     //      for(int j = 0; j<3; j++)
     //      {
     //           cout << "The value at "<<i<<", "<<j<<" is "<<arr2d[i][j] << endl;
     //      }
     // }

     // int a = 343;
     // float b = 87.34;
     // cout << (float) a/34<< endl;

     // cout<<(int) b;

     // string name = "harry";
     // cout<<"The name is "<< name<<endl;
     // cout<<"The name length is "<< name.length()<< endl;
     // cout<<"The name is "<< name.substr(0,3)<<endl;
     // cout<<"The name is "<< name.substr(2,3)<<endl;
    
     // float a= 34.34;
     // float* ptra;
     // ptra = &a;
     // cout<< "The vale of a is "<< a<<endl;
     // cout << "The value of a is " << *ptra << endl;
     // cout << "THe address of a is " << &a <<endl;
     // cout << "The address of a is " << ptra << endl;

Employee har("Harry constructor", 344, 3485);
// har.name = "harry";
// har.salary = 100;
har.printDetails();
har.getSecretPassword();
// cout<< har.secretPassword;
// cout <<"The name of our first emplayee is "<< har.name << " and his salary is "<< "$" <<har.salary<<endl;

      
     return 0;
}