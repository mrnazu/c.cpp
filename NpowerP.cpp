#include <iostream>

using namespace std;

int main() {
    int n, p;
    
    cout << "Enter base (N): ";
    cin >> n;
    
    cout << "Enter the exponent (P): ";
    cin >> p;

    int result = 1;

    for (int i = 0; i < p; ++i) {
        result *= n;
    }

    cout << "\nResult: " << result << endl;

    return 0;
}

