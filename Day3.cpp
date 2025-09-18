#include <iostream>
using namespace std;

int main() {
    int age;
    double gpa;
    string name;

    cout << "Enter your age: ";
    cin >> age; // user types a number

    cout << "Enter your GPA: ";
    cin >> gpa; // user types decimal

    cout << "Enter your first name: ";
    cin >> name; // reads one word (stops at space)

    cout << "\n--- Output ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;

    return 0;
}

//practiced code
#include<iostream>
using namespace std;
int main(){
    int a , b;
    int sum=0;
    cout<<"Enter the value of a and b: \n";
    cin>>a>>b;
    sum=a+b;
    cout<<"The sum of the given numbers are:\n"<<sum;
}


// Today you’ve learned:
// How to read numbers, strings, and multiple values using cin.
// Input/output is the backbone of all coding problems.
