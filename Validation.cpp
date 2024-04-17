// Nejat Abiba  
// CIS 1202 800
// April 16, 2024

#include <string>;
#include <iostream>;

using namespace std;

bool containsNonDigit(string& str) {
    for (char ch : str) {
        if (!isdigit(ch) && (ch != '.')) {
            return true;
        }
    }
    return false;
}

int getIntInput() {
    string strInput;
    getline(cin, strInput);

    if (containsNonDigit(strInput)) {
        cout << "Invalid Input! Please enter only numbers: ";
        return getIntInput();
    }

    try {
        return stoi(strInput);
    }
    catch (...) {
        cout << "Invalid Input! Try Again: ";
        return getIntInput();
    }
}

int getIntInput(int low, int high) {
    string strInput;
    getline(cin, strInput);

    if (containsNonDigit(strInput)) {
        cout << "Invalid Input! Please enter only numbers: ";
        return getIntInput(low, high);
    }

    try {
        int result = stoi(strInput);
        if (result < low || result > high) {
            cout << "Invalid Input! Please enter a number between " << low << " and " << high << ": ";
            result = getIntInput(low, high);
        }
        return result;
    }
    catch (...) {
        cout << "Invalid Input! Try Again: ";
        return getIntInput(low, high);
    }
}

float getFloatInput() {
    string strInput;
    getline(cin, strInput);

    if (containsNonDigit(strInput)) {
        cout << "Invalid Input! Please enter only numbers: ";
        return getFloatInput();
    }

    try {
        return stof(strInput);
    }
    catch (...) {
        cout << "Invalid Input! Try Again: ";
        return getFloatInput();
    }
}