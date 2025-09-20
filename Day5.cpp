// Day 5 (Sep 20, 2025) — If/Else (Decision Making)
// Goal: Learn how to control the flow of a program based on conditions.

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 75) {
        cout << "Grade: B" << endl;
    } else if (marks >= 50) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}

// Practice (Do These Now)

// Write a program that checks if a number is even or odd.
// Hint: use % 2 (modulo).
// If remainder = 0 → even, else odd.
#include <iostream>
using namespace std;
int main() {
   int a , b ;
   cout<<"Enter the Number: \n";
   cin>>a;
   if(a%2==0){
       cout<<"The number is even \n";
   }
   else
   {
       cout<<"The number is odd";
   }

    return 0;
}

// Write a program that asks for your age and prints:
// <18 → "Minor"
// 18 to 59 → "Adult"
// 60+ → "Senior Citizen"
#include<iostream>
using namespace std;
int main(){
     int a;
     cout<<"Enter your age in Numbers: \n";
     cin>>a;
     if(a<18){
         cout<<"You are Minor";
     }
     else if(a>=18 && a<=60){
         cout<<"you are Adult";
     }
     else if(a>60 && a<120){
         cout<<"you are Senior Citizen";
     }
     else{
         cout<<"you are not Human";
     }
}

// Check Leap Year (NEW)
// Input: a year (e.g., 2024)
// Output: "Leap Year" or "Not Leap Year".
// Rule:
// A year is a leap year if:
// divisible by 400, OR
// divisible by 4 but not by 100.
#include<iostream>
using namespace std;
int main(){
     int a;
     cout<<"Enter any year of your choice:\nExample: 2000\n";
     cin>>a;
    if(a%400==0){
        cout<<"Leap Year";
    }
    else{
        if(a%4==0 && a%100!=0){
            cout<<"Leap Year";
        }
        else{
            cout<<"Not Leap Year";
        }
    }
}
