// Day 7 (Sep 22, 2025) — Loops + If/Else
// Goal: Use loops with conditions to solve slightly bigger problems. This is where you start thinking like a problem solver, not just a syntax learner.

//Example 1
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {   // check even
            sum += i;
        }
    }

    cout << "Sum of even numbers up to " << n << " = " << sum << endl;
    return 0;
}

//Example 2
#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;   // multiply each number
    }

    cout << "Factorial of " << n << " = " << fact << endl;
    return 0;
}

//Example
#include <iostream>
using namespace std;

int main() {
    int n, flag = 0;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not Prime" << endl;
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 1;   // divisible by something
            break;
        }
    }

    if (flag == 0)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}
