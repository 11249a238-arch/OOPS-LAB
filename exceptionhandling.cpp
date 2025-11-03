#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            // throw an exception if denominator is zero
            throw "Division by zero error!";
        }
        double result = (double)numerator / denominator;
        cout << "Result = " << result << endl;
    }
    catch (const char* msg) {
        // handle the exception
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}
