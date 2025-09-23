// Day 6 (Sep 21, 2025) — Loops (Repetition)
// Goal: Learn how to repeat tasks automatically using for, while, and do while.

#include <iostream>
using namespace std;

int main() {
    cout << "For loop example: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }

    cout << "\nWhile loop example: ";
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }

    cout << "\nDo-while loop example: ";
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);

    cout << endl;
    return 0;
}

//PRACTICE QUESTIONS

//Print numbers from 1 to 10 using a for loop.
#include <iostream>
using namespace std;
int main() {
    for(int i=1;i<=10;i++){
        cout<<i<<endl;
    }
return 0;
}

// Print numbers from 10 down to 1 using a while loop.
#include <iostream>
using namespace std;
int main() {
int i=10;
while(i>=1){
    cout<<i<<endl;
    i--;
}
return 0;
}

// Take input n and print the sum of numbers from 1 to n.
// Example: n=5 → output 15.
#include <iostream>
using namespace std;
int main() {
int i,n, sum=0;
cout<<"Enter the value of n: \n";
cin>>n;
for(i=1;i<=n;i++){
    sum = sum+i;
}
cout<<"The sum of "<<n<<" numbers is: "<<sum;
return 0;
}


