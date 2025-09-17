#include <iostream>
using namespace std;

int main() {
    int age = 20;             // integer box holding 20
    double pi = 3.14159;      // decimal number
    char grade = 'A';         // single character (note single quotes)
    string name = "Suhas";    // string (sequence of chars, use double quotes)
    bool isStudent = true;    // true or false

    cout << "Age: " << age << endl;
    cout << "Pi: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Name: " << name << endl;
    cout << "Student? " << isStudent << endl;

    return 0;
}
// Practice (Do These Now)
// Make a variable city and store your city’s name. Print:
// I live in <city>.
// Create two integers a and b with any values. Print their sum.
// Change isStudent to false. What prints?

#include<iostream>
using namespace std;

int main(){
    string city = "Mandya";
    int a=10 , b=5 , sum=0;
    bool isStudent = false;
    
    sum = a+b;
    
    cout<<"I live in :"<<city<<endl;
    cout<<"The sum of a and b is :"<<sum<<endl;
    cout<<"is Student ??"<<isStudent;
    
    return 0;
}
