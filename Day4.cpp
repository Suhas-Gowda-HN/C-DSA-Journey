//Day 4 (Sep 19, 2025) — Operators in C++
//Goal: Use arithmetic, relational, and assignment operators to build a small calculator.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl; // integer division
    cout << "a % b = " << (a % b) << endl;

    cout << "\nComparisons:" << endl;
    cout << "a == b ? " << (a == b) << endl;
    cout << "a != b ? " << (a != b) << endl;
    cout << "a > b ? " << (a > b) << endl;
    cout << "a < b ? " << (a < b) << endl;

    return 0;
}


// Practice (Do These Now)

// Write a program to calculate area of a rectangle given length and width.
#include <iostream>
using namespace std;
int main() {
    int l=25 , w=25;
    int area=0;
    area = l*w;
    cout<<"The length of the Rectangle is: "<<l<<endl;
    cout<<"The width of the Rectangle is: 25\n "<<w;
    cout<<"The area of the Rectangle is: "<<area;
}
// Ask the user for two numbers, print which one is greater (using relational operators).
#include <iostream>
using namespace std;
int main() {
    int a , b;
    cout<<"Enter the values for a and b"<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<"The greatest number is: "<<a;
    }
    else if(b>a){
       cout<<"The greatest number is: "<<b; 
    }
    else{
        cout<<"Both the numbers are equal";
    }
}
// Bonus: Write a program that takes 3 integers and prints their average (integer division is fine for now)
#include <iostream>
using namespace std;
int main() {
    int a , b, c , average=0;
    cout<<"Enter the values for a and b and c"<<endl;
    cin>>a>>b>>c;
    average = (a+b+c)/3;
    cout<<"The average value of the three given numbers are:  "<<average;
}
