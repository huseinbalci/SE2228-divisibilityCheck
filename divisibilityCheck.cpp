#include <iostream>

using namespace std;

bool question1Iterative(long long number) {
    int divisors[] = {2, 3, 5, 7, 11, 13, 17};
    int size = sizeof divisors / sizeof divisors[0];
    for (int i = size - 1; i >= 0; --i) {
        long long digits = number % 1000;
        if (digits % divisors[i] != 0) {
            return false;
        }
        number /= 10;
    }
    return true;
}

bool question1Recursive(long long number) {
    int divisors[] = {2, 3, 5, 7, 11, 13, 17};
    int size = sizeof divisors / sizeof divisors[0];
    static int index = size - 1;
    long long digits = number % 1000;
    if (index == -1) {
        return true;
    }
    if (digits % divisors[index] != 0) {
        return false;
    }
    --index;
    return question1Recursive(number / 10);
}

int main() {
    long long number = 1406357289;
    if (question1Iterative(number)) {
        cout << "Q1 IT: Number satisfies the divisibility properties." << endl;
    } else {
        cout << "Q1 IT: Number does not satisfies the divisibility properties." << endl;
    }
    if (question1Recursive(number)) {
        cout << "Q1 RC: Number satisfies the divisibility properties." << endl;
    } else {
        cout << "Q1 RC: Number does not satisfies the divisibility properties." << endl;
    }

    for (int i = 0; i < 7; ++i) {
        
    }
}
