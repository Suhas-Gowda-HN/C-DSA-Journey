#include <iostream>   // library to handle input & output
using namespace std; // lets us write 'cout' instead of 'std::cout'

// main() is the entry point of every C++ program
int main() {
    cout << "Hello, World!" << endl; // print text to the screen
    return 0; // program ended successfully
}

//Line by Line Explanation

//#include <iostream>
//"Hey compiler, bring me tools for input/output (printing, reading)."

//using namespace std;
//Saves us from writing std::cout. (You’ll see both styles; we’ll use this to stay simple at first.)

//int main() { ... }
//The main function. Every C++ program starts running here.

//cout << "Hello, World!" << endl;
//cout → “console output” (send text to screen).
//<< → means “send this into cout”.

//"Hello, World!" → the text.
//endl → end line, move cursor to the next line.

//return 0;
//Program ended successfully. (If something goes wrong, non-zero numbers can be returned.)
