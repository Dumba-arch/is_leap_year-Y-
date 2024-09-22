#include <iostream>
using namespace std;

bool is_leap_year(int Y) {
    // Check if the year is a century year
    if (Y % 100 == 0) {
        // If it's a century year, it must be divisible by 400 to be a leap year
        return Y % 400 == 0;
    } else {
        // If it's not a century year, it must be divisible by 4 to be a leap year
        return Y % 4 == 0;
    }
}

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    // Check if the entered year is positive
    if (year <= 0) {
        cout << "Please enter a valid positive year." << endl;
    } else {
        if (is_leap_year(year)) {
            cout << year << " is a leap year." << endl;
        } else {
            cout << year << " is not a leap year." << endl;
        }
    }

    return 0;
}

