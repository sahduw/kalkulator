#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main() {
    char op;
    float num1, num2;
    char decimal;

    cout << "----------- CALCULATOR -----------" << endl;

    cout << "Enter an operator to continue (+,-,*,/): ";
    cin >> op;
    if (op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "Please enter a valid operator. (+,-,*,/)" << endl;
        return 1;
    }
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

        switch(op) {
            case '+':
            cout << "The answer is " << num1 + num2 << endl;
            break;
            case '-':
            cout << "The answer is " << num1 - num2 << endl;
            break;
            case '*':
            cout << "The answer is " << num1 * num2 << endl;
            break;
            case '/':
            cout << "The answer is " << num1 / num2 << endl;
            break;
            default:
            cout << "You either typed the wrong operator or typed words lol. Try again." << endl;
        }
    
    cout << "----------------------------------";

    sleep(5);
    return 0;
}