#include <iostream>
using namespace std;

int main() {
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: cout << "Result = " << a + b; break;
        case 2: cout << "Result = " << a - b; break;
        case 3: cout << "Result = " << a * b; break;
        case 4: cout << "Result = " << a / b; break;
        default: cout << "Invalid choice";
    }

    return 0;
}