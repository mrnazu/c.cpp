#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer (N): ";
    cin >> N;

    int sum = 0;
    for (int i = 2; i <= N; i += 2) {
        sum += i;
    }

    cout << "Sum of even numbers from 1 to " << N << ": " << sum << "\n";

    return 0;
}

