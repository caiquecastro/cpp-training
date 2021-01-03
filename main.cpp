#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int n, i;
    bool isPrime = true;

    if (argc <= 1) {
        cerr << "Missing argument" << endl;
        return 1;
    }

    try {
        n = stoi(argv[1]);
    } catch (invalid_argument e) {
        cerr << "Invalid argument" << endl;
        return 1;
    } catch (out_of_range e) {
        cerr << "Argument out of range" << endl;
        return 1;
    } catch (...) {
        cerr << "An error occurred" << endl;
        return 1;
    }

    for (i = n-1; i > 1; i--) {
        if (n % i == 0) {
            cout << n << " is divisible by " << i << endl;
            isPrime = false;
        }
    }

    if (isPrime) {
        cout << n << " is prime!" << endl;
    }

    return 0;
}